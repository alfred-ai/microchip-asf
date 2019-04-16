/**
 *
 * \file
 *
 * \brief SAM AES Driver Quick Start
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
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
 *
 */

/** \page asfdoc_sam0_aes_callback_use_case Quick Start Guide for AES - Callback
 *
 * The supported board list:
 *    - SAM L21 Xplained Pro
 *    - SAM L22 Xplained Pro
 *
 * This example demonstrates how to use the AES driver to perform:
 * - ECB encryption and decryption
 * - CBC encryption and decryption
 * - CFB128 encryption and decryption
 * - OFB encryption and decryption
 * - CTR encryption and decryption
 *
 * Upon startup, the program uses the USART driver to display application
 * output message from which several encryption/decryption modes can be tested.
 *
 * \section asfdoc_sam0_aes_callback_use_case_setup Quick Start Callback
 *
 * \subsection asfdoc_sam0_aes_callback_use_case_prereq Prerequisites
 * There are no prerequisites for this use case.
 *
 * \subsection asfdoc_sam0_aes_callback_use_case_setup_code Code
 *
 * Add to the main application source file, outside of any functions:
 * \snippet quick_start_callback.c cipher_data
 *
 * Add to the main application source file, outside of any functions:
 * \snippet quick_start_callback.c module_var

 * Copy-paste the following setup code to your user application:
 * \snippet quick_start_callback.c setup
 *
 * Add to user application initialization (typically the start of \c main()):
 * \snippet quick_start_callback.c setup_init
 *
 * \subsection asfdoc_sam0_aes_callback_use_case_setup_flow Workflow
 * -# Define sample data from NIST-800-38A appendix F for ECB mode.
 *    \snippet quick_start_callback.c cipher_data
 *
 * -# Create related module variable and software instance structure.
 *    \snippet quick_start_callback.c module_var
 *
 * -# Configure, initialize, and enable AES module.
 *  -# Configuration AES struct, which can be filled out to
 *     adjust the configuration of a physical AES peripheral.
 *     \snippet quick_start_callback.c setup_config
 *  -# Initialize the AES configuration struct with the module's default values.
 *     \snippet quick_start_callback.c setup_config_defaults
 *  -# Enable the AES module.
 *     \snippet quick_start_callback.c module_enable
 *  -# Register and enable the AES module callback.
 *     \snippet quick_start_callback.c module_enable_register
 *

 *
 * \section asfdoc_sam0_aes_callback_use_case_main Use Case
 *
 * \subsection asfdoc_sam0_aes_callback_use_case_main_code Code
 * Copy-paste the following code to your user application:
 * \snippet quick_start_callback.c  encryption_decryption
 *
 * \subsection asfdoc_sam0_aes_callback_use_case_main_flow Workflow
 * -# Configure ECB mode encryption and decryption and run test.
 *    \snippet quick_start_callback.c ECB_MODE
 * -# Configure CBC mode encryption and decryption and run test.
 *    \snippet quick_start_callback.c CBC_MODE
 * -# Configure CFB mode encryption and decryption and run test.
 *    \snippet quick_start_callback.c CFB_MODE
 * -# Configure OFB mode encryption and decryption and run test.
 *    \snippet quick_start_callback.c OFB_MODE
 * -# Configure CTR mode encryption and decryption and run test.
 *    \snippet quick_start_callback.c CTR_MODE
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */
