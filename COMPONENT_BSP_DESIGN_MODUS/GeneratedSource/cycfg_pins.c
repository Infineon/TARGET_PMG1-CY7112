/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5721
* mtb-pdl-cat2 1.4.0.5338
* personalities 5.0.0.0
* udd 3.0.0.1428
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDIO_PORT_NUM,
        .channel_num = CYBSP_SWDIO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDCK_PORT_NUM,
        .channel_num = CYBSP_SWDCK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_USB_DP_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_USB_DP_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_USB_DP_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_USB_DP_PORT_NUM,
        .channel_num = CYBSP_USB_DP_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_USB_DM_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_USB_DM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_USB_DM_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_USB_DM_PORT_NUM,
        .channel_num = CYBSP_USB_DM_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_USB_DP_PORT, CYBSP_USB_DP_PIN, &CYBSP_USB_DP_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_USB_DP_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_USB_DM_PORT, CYBSP_USB_DM_PIN, &CYBSP_USB_DM_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_USB_DM_obj);
#endif //defined (CY_USING_HAL)
}
