/**
 * @file tal_slotted_csma.h
 *
 * @brief File provides CSMA-CA states.
 *
 * Copyright (c) 2013-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 */

/*
 * Copyright (c) 2013-2015 Atmel Corporation. All rights reserved.
 *
 * Licensed under Atmel's Limited License Agreement --> EULA.txt
 */

#ifdef BEACON_SUPPORT

/* Prevent double inclusion */
#ifndef TAL_SLOTTED_CSMA_H
#define TAL_SLOTTED_CSMA_H

/**
 * \ingroup group_tal_tx_csma_231
 * \defgroup group_tal_slotted_csma  Slotted CSMA Module
 * Transmits data using Slotted CSMA/CA mechanism.
 *  @{
 */

/* === INCLUDES ============================================================ */

/* === EXTERNALS =========================================================== */

/* === TYPES =============================================================== */

/*
 * CSMA-CA states
 */
typedef enum csma_state_tag {
	CSMA_IDLE = 0,
	BACKOFF_WAITING_FOR_CCA_TIMER,
	BACKOFF_WAITING_FOR_BEACON,
	CSMA_ACCESS_FAILURE,
	FRAME_SENDING,
	TX_DONE_SUCCESS,
	TX_DONE_FRAME_PENDING,
	TX_DONE_NO_ACK,
	NO_BEACON_TRACKING,
	CSMA_HANDLE_BEACON
} csma_state_t;

/* === MACROS ============================================================== */

/* === PROTOTYPES ========================================================== */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief Starts slotted CSMA
 */
bool slotted_csma_start(bool perform_frame_retry);

/**
 * \brief State machine handling slotted CSMA
 */
void slotted_csma_state_handling(void);

#if (MAC_START_REQUEST_CONFIRM == 1)

/**
 * \brief Calculates the entire transaction duration
 */
void calculate_transaction_duration(void);

#endif

#ifdef BEACON_SUPPORT
uint16_t calc_frame_transmit_duration(uint8_t *phy_frame);

#endif /* BEACON_SUPPORT */
/* ! @} */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* TAL_SLOTTED_CSMA_H */

#endif /* BEACON_SUPPORT */

/* EOF */
