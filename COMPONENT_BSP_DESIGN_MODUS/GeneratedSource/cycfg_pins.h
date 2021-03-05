/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.2.0.2801
* mtb-pdl-cat2 1.1.0.2839
* personalities 3.0.0.0
* udd 3.0.0.912
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SDA (P0_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SCL (P0_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_DEBUG_UART_TX (P1_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_DEBUG_UART_RX (P1_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_USER_BTN (P1_2)
	#define CYBSP_USER_BTN1 CYBSP_USER_BTN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_USER_LED (P1_3)
	#define CYBSP_USER_LED1 CYBSP_USER_LED
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT2
#define CYBSP_SWDIO_PORT_NUM 2U
#define CYBSP_SWDIO_PIN 0U
#define CYBSP_SWDIO_NUM 0U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_0_HSIOM
	#define ioss_0_port_2_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_2_pin_0_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_PORT_PIN P2_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO P2_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT2
#define CYBSP_SWDCK_PORT_NUM 2U
#define CYBSP_SWDCK_PIN 1U
#define CYBSP_SWDCK_NUM 1U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_1_HSIOM
	#define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_2_pin_1_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_PORT_PIN P2_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK P2_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
