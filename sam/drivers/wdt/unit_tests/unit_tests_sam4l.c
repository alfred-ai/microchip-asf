/**
 * \file
 *
 * \brief Unit tests for WDT-SAM4L driver.
 *
 * Copyright (c) 2012-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#include <asf.h>
#include <conf_test.h>

/**
 * \mainpage
 *
 * \section intro Introduction
 * This is the unit test application for the WDT-SAM4L driver.
 * It consists of test cases for the following functionality:
 * - Reset MCU by the WDT
 * - Watchdog in basic mode
 * - Watchdog in window mode
 *
 * \section files Main Files
 * - \ref unit_tests.c
 * - \ref conf_test.h
 * - \ref conf_board.h
 * - \ref conf_clock.h
 * - \ref conf_usart_serial.h
 *
 * \section device_info Device Info
 * SAM4L devices can be used.
 * This example has been tested with the following setup:
 *  - SAM4L evaluation kit
 *  - SAM4L Xplained Pro kit
 *  - SAM4L8 Xplained Pro kit
 *
 * \section compinfo Compilation info
 * This software was written for the GNU GCC and IAR for ARM. Other compilers
 * may or may not work.
 *
 * \section contactinfo Contact Information
 * For further information, visit <a href="http://www.atmel.com/">Atmel</a>.\n
 * Support and FAQ: https://www.microchip.com/support/
 */

/** \name Unit test configuration */
/* @{ */
/**
 * \def CONF_TEST_USART
 * \brief USART to redirect STDIO to
 */

/**
 * \def CONF_TEST_BAUDRATE
 * \brief Baudrate of USART
 */

/**
 * \def CONF_TEST_CHARLENGTH
 * \brief Character length (bits) of USART
 */

/**
 * \def CONF_TEST_PARITY
 * \brief Parity mode of USART
 */

/**
 * \def CONF_TEST_STOPBITS
 * \brief Stopbit configuration of USART
 */
/* @} */

/** Address to store unit test stage */
#define WDT_UT_TAG_ADDR    (FLASH_USER_PAGE_ADDR + 128)

/**
 * \name WDT unit test stage
 * @{
 */
#define WDT_UT_STAGE_START          0x10  /**< Start stage */
#define WDT_UT_STAGE_RST_MCU        0x21  /**< Reset MCU by the WDT */
#define WDT_UT_STAGE_BM_NORMAL      0x32  /**< Normal usage in basic mode */
#define WDT_UT_STAGE_BM_TIMEOUT_RST 0x33  /**< Timeout reset in basic mode */
#define WDT_UT_STAGE_WM_NORMAL      0x44  /**< Normal usage in window mode */
#define WDT_UT_STAGE_WM_TIMEBAN_RST 0x45  /**< Timeban reset in window mode */
#define WDT_UT_STAGE_WM_TIMEOUT_RST 0x46  /**< Timeout reset in window mode */
#define WDT_UT_STAGE_END            0x57  /**< End stage */

#define WDT_UT_STAGE_MASK           0xF0
#define WDT_UT_STAGE_BM             0x30
#define WDT_UT_STAGE_WM             0x40
/** @} */

/** Global g_ul_ms_ticks in milliseconds since start of application */
volatile uint32_t g_ul_ms_ticks = 0;

/**
 *  \brief Handler for System Tick interrupt.
 *
 *  Process System Tick Event
 *  Increments the g_ul_ms_ticks counter.
 */
void SysTick_Handler(void)
{
	g_ul_ms_ticks++;
}

/**
 *  \brief Waits for the given number of milliseconds (using the g_ul_ms_ticks
 *  generated by the SAM's microcontrollers's system tick).
 *
 *  \param ul_dly_ticks  Delay to wait for, in milliseconds.
 */
static void mdelay(uint32_t ul_dly_ticks)
{
	uint32_t ul_cur_ticks;

	ul_cur_ticks = g_ul_ms_ticks;
	while ((g_ul_ms_ticks - ul_cur_ticks) < ul_dly_ticks);
}

/**
 * \brief Check if the WDT reset happened.
 *
 * \return True for WDT reset happened, false for not happened.
 */
static bool is_wdt_reset(void)
{
	if ((PM->PM_RCAUSE & PM_RCAUSE_WDT) == PM_RCAUSE_WDT)  {
		return true;
	} else {
		return false;
	}
}

/**
 * \brief Test watchdog for all cases.
 *
 * \note Because MCU will be reset serval times druing the test,
 * to simplify the design, only one test case but with many test stages.
 *
 * \param test Current test case.
 */
static void run_wdt_test_all(const struct test_case *test)
{
	struct wdt_dev_inst wdt_inst;
	struct wdt_config   wdt_cfg;
	uint32_t wdt_window_ms = 0;
	uint32_t wdt_timeout_ms = 0;
	uint32_t wdt_ut_stage;

	/* Get test stage */
	wdt_ut_stage = (uint32_t)(*(uint32_t *)WDT_UT_TAG_ADDR);

	if (is_wdt_reset()) {
		/* Check if the reset is as expected */
		switch (wdt_ut_stage) {
		case WDT_UT_STAGE_START:
			test_assert_true(test, 0,
					"Unexpected watchdog reset at start stage!");
			break;

		case WDT_UT_STAGE_RST_MCU:
			/* Move to next stage */
			wdt_ut_stage = WDT_UT_STAGE_BM_NORMAL;
			flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
			break;

		case WDT_UT_STAGE_BM_NORMAL:
			test_assert_true(test, 0,
					"Unexpected watchdog reset at basic mode!");
			break;

		case WDT_UT_STAGE_BM_TIMEOUT_RST:
			/* Move to next stage */
			wdt_ut_stage = WDT_UT_STAGE_WM_NORMAL;
			flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
			break;

		case WDT_UT_STAGE_WM_NORMAL:
			test_assert_true(test, 0,
					"Unexpected watchdog reset at window mode!");
			break;

		case WDT_UT_STAGE_WM_TIMEBAN_RST:
			/* Move to next stage */
			wdt_ut_stage = WDT_UT_STAGE_WM_TIMEOUT_RST;
			flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
			break;

		case WDT_UT_STAGE_WM_TIMEOUT_RST:
			/* Move to next stage */
			wdt_ut_stage = WDT_UT_STAGE_END;
			flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
			break;

		case WDT_UT_STAGE_END:
			test_assert_true(test, 0,
					"Unexpected watchdog reset at end stage!");
			break;

		default:
			/* Clear flash content */
			wdt_ut_stage = 0xFFFFFFFFu;
			flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
			test_assert_true(test, 0,
					"Unexpected watchdog reset!");
			break;
		}
	} else {
		/* First WDT unit test start at here, set stage flag */
		wdt_ut_stage = WDT_UT_STAGE_START;
		flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
	}

	/*
	 * ---- Test reset MCU by the WDT ----
	 */
	if (wdt_ut_stage == WDT_UT_STAGE_START) {
		bool ret;

		/* Move to next stage */
		wdt_ut_stage = WDT_UT_STAGE_RST_MCU;
		flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);

		/* Reset MCU by the watchdog. */
		ret = wdt_reset_mcu();
		test_assert_false(test, ret,
				"Can't reset MCU by the WDT: failed!");

		/* The code should not go to here */
		test_assert_true(test, 0,
				"Reset MCU by the WDT: failed!");
	}

	/*
	 * ---- Test the WDT in basic mode ----
	 */
	if ((wdt_ut_stage & WDT_UT_STAGE_MASK) == WDT_UT_STAGE_BM) {
		/*
		 * Intialize the watchdog in basic mode:
		 * - Use default configuration.
		 * - But change timeout period to 0.57s
		 *  (Ttimeout = 2pow(PSEL+1) / Fclk_cnt = 65535 / 115000).
		 */
		wdt_get_config_defaults(&wdt_cfg);
		wdt_cfg.timeout_period = WDT_PERIOD_65536_CLK;
		wdt_timeout_ms = 570;
		wdt_init(&wdt_inst, WDT, &wdt_cfg);
		wdt_enable(&wdt_inst);
		wdt_clear(&wdt_inst);

		mdelay(wdt_timeout_ms / 2);
		wdt_clear(&wdt_inst);

		/* The code should reach here */
		test_assert_true(test, 1,
				"Clear the WDT in basic mode: passed.");

		/* Move to next stage */
		wdt_ut_stage = WDT_UT_STAGE_BM_TIMEOUT_RST;
		flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
		/* Wait for the WDT reset */
		mdelay(wdt_timeout_ms * 2);

		/* The code should not go to here, disable watchdog for default */
		wdt_disable(&wdt_inst);
		test_assert_true(test, 0,
				"No WDT reset happened in basic mode!");
	}

	/*
	 * ---- Test the WDT in window mode ----
	 */
	if ((wdt_ut_stage & WDT_UT_STAGE_MASK) == WDT_UT_STAGE_WM) {
		/* Enable WDT clock source if need */
		if (BPM->BPM_PMCON & BPM_PMCON_CK32S) {
			/* Enable 32K RC oscillator */
			if (!osc_is_ready(OSC_ID_RC32K)) {
				osc_enable(OSC_ID_RC32K);
				osc_wait_ready(OSC_ID_RC32K);
			}
		} else {
			/* Enable external OSC32 oscillator */
			if (!osc_is_ready(OSC_ID_OSC32)) {
				osc_enable(OSC_ID_OSC32);
				osc_wait_ready(OSC_ID_OSC32);
			}
		}

		/*
		 * Intialize the watchdog in window mode:
		 * - Use 32K oscillator as WDT clock source.
		 * - Set timeout/timeban period to 0.5s
		 *  (Ttimeout = 2pow(PSEL+1) / Fclk_cnt = 16384 / 32768).
		 */
		wdt_get_config_defaults(&wdt_cfg);
		wdt_cfg.wdt_mode = WDT_MODE_WINDOW;
		wdt_cfg.clk_src = WDT_CLK_SRC_32K;
		wdt_cfg.window_period = WDT_PERIOD_16384_CLK;
		wdt_cfg.timeout_period = WDT_PERIOD_16384_CLK;
		wdt_window_ms = 500;
		wdt_timeout_ms = 500;
		wdt_init(&wdt_inst, WDT, &wdt_cfg);
		wdt_enable(&wdt_inst);

		mdelay(wdt_window_ms + wdt_timeout_ms / 10);
		wdt_clear(&wdt_inst);

		/* The code should reach here */
		test_assert_true(test, 1,
				"Clear the WDT in window mode: passed.");

		if (wdt_ut_stage == WDT_UT_STAGE_WM_NORMAL) {
			/* Move to next stage */
			wdt_ut_stage = WDT_UT_STAGE_WM_TIMEBAN_RST;
			flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
			/* Clear the WDT in time ban window */
			wdt_clear(&wdt_inst);
			/* The WDT reset should happen */
			mdelay(50);
		} else if (wdt_ut_stage == WDT_UT_STAGE_WM_TIMEOUT_RST) {
			/* Wait for the WDT reset when timeout */
			mdelay(wdt_window_ms);
			mdelay(wdt_timeout_ms * 2);
		}

		/* The code should not go to here, disable watchdog for default */
		wdt_disable(&wdt_inst);
		test_assert_true(test, 0,
				"No WDT  reset happened in window mode!");
	}

	/*
	 * ---- Check if all test are OK ----
	 */
	if (wdt_ut_stage == WDT_UT_STAGE_END) {
		test_assert_true(test, 1,
				"All test stages done for WDT.");
		/* Clear flash content */
		wdt_ut_stage = 0xFFFFFFFFu;
		flashcalw_memcpy((void *)WDT_UT_TAG_ADDR, &wdt_ut_stage, 4, true);
	} else {
		test_assert_true(test, 0,
				"WDT test stopped with unexpected stages.");
	}
}

/**
 * \brief Run WDT driver unit tests.
 */
int main(void)
{
	const usart_serial_options_t usart_serial_options = {
		.baudrate = CONF_TEST_BAUDRATE,
		.charlength = CONF_TEST_CHARLENGTH,
		.paritytype = CONF_TEST_PARITY,
		.stopbits = CONF_TEST_STOPBITS
	};

	sysclk_init();
	board_init();
	stdio_serial_init(CONF_TEST_USART, &usart_serial_options);

	/* Configure systick for 1 ms */
	if (SysTick_Config(sysclk_get_cpu_hz() / 1000)) {
		/* Systick configuration error */
		while (1);
	}

	/* Define all the test cases */
	DEFINE_TEST_CASE(wdt_test_all, NULL, run_wdt_test_all, NULL,
			"Test watchdog all.");

	/* Put test case addresses in an array */
	DEFINE_TEST_ARRAY(wdt_tests) = {
		&wdt_test_all
	};

	/* Define the test suite */
	DEFINE_TEST_SUITE(wdt_suite, wdt_tests, "SAM4L WDT driver test suite");

	/* Run all tests in the test suite */
	test_suite_run(&wdt_suite);

	while (1) {
		/* Busy-wait forever. */
	}
}
