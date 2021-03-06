/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   drvpdn_inline_mt6589.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   PDN Driver (C Inline Implementation) for MT6595
 *      - PDN_SET(), PDN_CLR() is for Bus Clock Gating/Ungating
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 ****************************************************************************/

#ifndef __DRVPDN_INLINE_MT6752_H__
#define __DRVPDN_INLINE_MT6589_H__

/*******************************************************************************
 * Locally Used Options
 *******************************************************************************/
#define INTERRUPT_PROTECT       1

/*******************************************************************************
 * Include header files
 *******************************************************************************/

#include "reg_base.h"
#include "pdn_hw_mt6589_series.h"

/* dummy */
#define DUMMY_PDN_SET_REGISTER  (0xFFFFFFF0)
#define DUMMY_PDN_CLR_REGISTER  (0x0FFFFFFF)

/*******************************************************************************
 * WR8 PDN enum auto-generated by cpp
 *******************************************************************************/
enum { PDN_OPT_32BIT_REG = 0x01, PDN_OPT_16BIT_REG = 0x02, PDN_OPT_NEVER_OFF = 0x04, PDN_OPT_INVERSED_POLARITY = 0x08};

typedef enum {
    PDN_UART1_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_GCU_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,
    PDN_DMA_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_SIM_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_SIM2_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_GPT_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_USB_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_TOPSM_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_ELM_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_TDMA_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,

    PDN_BSI2G_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON4,
    PDN_BPI2G_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON4,
    PDN_AFC2G_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON4,

    PDN_BSI3G_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_BPI3G_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,

    PDN_WCDMATIMER_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_DIV_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,
    PDN_AFC3G_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,

    PDN_OSTIMERARM_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_IRDMA_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON0,
    PDN_APC_PRE_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON2,
    PDN_FCS_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,
    PDN_BFE_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON2,
    PDN_VAFE_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON2,
    PDN_HIF_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,

    PDN_ABM_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_ALC_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_ADOE_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_PF_BUFF_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,
    PDN_BOOT_SLV_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_AP_UART1_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_UART2_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_UART3_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_UART4_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_DMA_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_USB0_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_USB1_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_MSDC2_1_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_MSDC2_2_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_MSDC3_1_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_MSDC3_2_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_MSDC3_3_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_NFI_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_NLI_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_HIF_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM1_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM2_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM3_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM4_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM5_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM6_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM7_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_PWM_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_THERM_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_IRDA_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_I2C0_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_I2C1_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_I2C2_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_I2C3_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_I2C4_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,
    PDN_AP_I2C5_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,

    PDN_GCC_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON0,
    PDN_TXBUF_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON0,
    PDN_RXBUF_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON0,
    PDN_IRDBG_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON0,
    PDN_AHB2DSPIO_CON_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CON0,

    PDN_DBG_CON_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CON0,

    PDN_BSIPMIC_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_BPIPMIC_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_PFCDEC_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_BYCACC_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_ATB_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_PFCENC_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON0,
    PDN_BSI2G_T_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,
    PDN_BPI2G_T_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,
    PDN_AFC2G_T_CON_REG = (kal_int32)DRVPDN_MODEM_CG_CON2,

    PDN_INFRA_MD1_PMICWRAP_CON_REG = (kal_int32)DRVPDN_AP_INFRA_MD1_CG_CON,

    PDN_INFRA_MD2_PMICWRAP_CON_REG = (kal_int32)DRVPDN_AP_INFRA_MD2_CG_CON,

    PDN_INFRA_MD1_PMICSPI_CON_REG = (kal_int32)DRVPDN_AP_INFRA_MD1_CG_CON,

    PDN_INFRA_MD2_PMICSPI_CON_REG = (kal_int32)DRVPDN_AP_INFRA_MD2_CG_CON,

    PDN_TOPCKG_MD1_PMICSPI_CON_REG = (kal_int32)DRVPDN_AP_TOPCKGEN_CG_CON,

    PDN_TOPCKG_MD2_PMICSPI_CON_REG = (kal_int32)DRVPDN_AP_TOPCKGEN_CG_CON,
    PDN_HIF_COMBIN_CON_REG = (kal_int32)DRVPDN_AP_PERI_CG_CON0,

    PDN_MAX_CON_REG
} PDN_CON_REG;

typedef enum {
    PDN_UART1_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_GCU_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,
    PDN_DMA_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_SIM_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_SIM2_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_GPT_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_USB_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_TOPSM_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_ELM_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_TDMA_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,

    PDN_BSI2G_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET4,
    PDN_BPI2G_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET4,
    PDN_AFC2G_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET4,

    PDN_BSI3G_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_BPI3G_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,

    PDN_WCDMATIMER_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_DIV_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,
    PDN_AFC3G_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,

    PDN_OSTIMERARM_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_IRDMA_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET0,
    PDN_APC_PRE_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET2,
    PDN_FCS_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,
    PDN_BFE_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET2,
    PDN_VAFE_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET2,
    PDN_HIF_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,

    PDN_ABM_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_ALC_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_ADOE_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_PF_BUFF_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,
    PDN_BOOT_SLV_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_AP_UART1_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_UART2_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_UART3_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_UART4_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_DMA_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_USB0_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_USB1_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_MSDC2_1_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_MSDC2_2_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_MSDC3_1_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_MSDC3_2_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_MSDC3_3_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_NFI_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_NLI_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_HIF_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM1_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM2_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM3_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM4_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM5_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM6_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM7_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_PWM_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_THERM_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_IRDA_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_I2C0_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_I2C1_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_I2C2_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_I2C3_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_I2C4_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,
    PDN_AP_I2C5_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,

    PDN_GCC_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET0,
    PDN_TXBUF_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET0,
    PDN_RXBUF_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET0,
    PDN_IRDBG_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET0,
    PDN_AHB2DSPIO_SET_REG = (kal_int32)DRVPDN_MD2GSYS_CG_SET0,

    PDN_DBG_SET_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_SET0,

    PDN_BSIPMIC_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_BPIPMIC_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_PFCDEC_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_BYCACC_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_ATB_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_PFCENC_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET0,
    PDN_BSI2G_T_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,
    PDN_BPI2G_T_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,
    PDN_AFC2G_T_SET_REG = (kal_int32)DRVPDN_MODEM_CG_SET2,

    PDN_INFRA_MD1_PMICWRAP_SET_REG = (kal_int32)DRVPDN_AP_INFRA_MD1_CG_SET,

    PDN_INFRA_MD2_PMICWRAP_SET_REG = (kal_int32)DRVPDN_AP_INFRA_MD2_CG_SET,

    PDN_INFRA_MD1_PMICSPI_SET_REG = (kal_int32)DRVPDN_AP_INFRA_MD1_CG_SET,

    PDN_INFRA_MD2_PMICSPI_SET_REG = (kal_int32)DRVPDN_AP_INFRA_MD2_CG_SET,

    PDN_TOPCKG_MD1_PMICSPI_SET_REG = (kal_int32)DRVPDN_AP_TOPCKGEN_CG_SET,

    PDN_TOPCKG_MD2_PMICSPI_SET_REG = (kal_int32)DRVPDN_AP_TOPCKGEN_CG_SET,
    PDN_HIF_COMBIN_SET_REG = (kal_int32)DRVPDN_AP_PERI_CG_SET0,

    PDN_MAX_SET_REG
} PDN_SET_REG;

typedef enum {
    PDN_UART1_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_GCU_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,
    PDN_DMA_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_SIM_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_SIM2_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_GPT_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_USB_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_TOPSM_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_ELM_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_TDMA_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,

    PDN_BSI2G_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR4,
    PDN_BPI2G_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR4,
    PDN_AFC2G_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR4,

    PDN_BSI3G_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_BPI3G_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,

    PDN_WCDMATIMER_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_DIV_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,
    PDN_AFC3G_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,

    PDN_OSTIMERARM_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_IRDMA_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR0,
    PDN_APC_PRE_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR2,
    PDN_FCS_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,
    PDN_BFE_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR2,
    PDN_VAFE_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR2,
    PDN_HIF_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,

    PDN_ABM_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_ALC_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_ADOE_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_PF_BUFF_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,
    PDN_BOOT_SLV_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_AP_UART1_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_UART2_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_UART3_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_UART4_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_DMA_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_USB0_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_USB1_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_MSDC2_1_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_MSDC2_2_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_MSDC3_1_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_MSDC3_2_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_MSDC3_3_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_NFI_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_NLI_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_HIF_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM1_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM2_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM3_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM4_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM5_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM6_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM7_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_PWM_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_THERM_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_IRDA_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_I2C0_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_I2C1_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_I2C2_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_I2C3_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_I2C4_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,
    PDN_AP_I2C5_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,

    PDN_GCC_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR0,
    PDN_TXBUF_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR0,
    PDN_RXBUF_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR0,
    PDN_IRDBG_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR0,
    PDN_AHB2DSPIO_CLR_REG = (kal_int32)DRVPDN_MD2GSYS_CG_CLR0,

    PDN_DBG_CLR_REG = (kal_int32)DRVPDN_MD_PWR_GLOBAL_CLR0,

    PDN_BSIPMIC_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_BPIPMIC_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_PFCDEC_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_BYCACC_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_ATB_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_PFCENC_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR0,
    PDN_BSI2G_T_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,
    PDN_BPI2G_T_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,
    PDN_AFC2G_T_CLR_REG = (kal_int32)DRVPDN_MODEM_CG_CLR2,

    PDN_INFRA_MD1_PMICWRAP_CLR_REG = (kal_int32)DRVPDN_AP_INFRA_MD1_CG_CLR,

    PDN_INFRA_MD2_PMICWRAP_CLR_REG = (kal_int32)DRVPDN_AP_INFRA_MD2_CG_CLR,

    PDN_INFRA_MD1_PMICSPI_CLR_REG = (kal_int32)DRVPDN_AP_INFRA_MD1_CG_CLR,

    PDN_INFRA_MD2_PMICSPI_CLR_REG = (kal_int32)DRVPDN_AP_INFRA_MD2_CG_CLR,

    PDN_TOPCKG_MD1_PMICSPI_CLR_REG = (kal_int32)DRVPDN_AP_TOPCKGEN_CG_CLR,

    PDN_TOPCKG_MD2_PMICSPI_CLR_REG = (kal_int32)DRVPDN_AP_TOPCKGEN_CG_CLR,
    PDN_HIF_COMBIN_CLR_REG = (kal_int32)DRVPDN_AP_PERI_CG_CLR0,

    PDN_MAX_CLR_REG
} PDN_CLR_REG;

typedef enum {
    PDN_UART1_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_UART,

    PDN_GCU_REG_BIT = (kal_int32)MODEM_CG_CON2_GCU,
    PDN_DMA_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_DMA,
    PDN_SIM_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_SIM1,
    PDN_SIM2_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_SIM2,

    PDN_GPT_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_GPT,

    PDN_USB_REG_BIT = (kal_int32)AP_PERI_CG_CON0_USB0,
    PDN_TOPSM_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_TOPSM,
    PDN_ELM_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_ELM,

    PDN_TDMA_REG_BIT = (kal_int32)MODEM_CG_CON2_TDMA,

    PDN_BSI2G_REG_BIT = (kal_int32)MODEM_CG_CON4_BSI_2G,
    PDN_BPI2G_REG_BIT = (kal_int32)MODEM_CG_CON4_BPI_2G,
    PDN_AFC2G_REG_BIT = (kal_int32)MODEM_CG_CON4_AFC_2G,

    PDN_BSI3G_REG_BIT = (kal_int32)MODEM_CG_CON0_BSI_3G,
    PDN_BPI3G_REG_BIT = (kal_int32)MODEM_CG_CON0_BPI_3G,

    PDN_WCDMATIMER_REG_BIT = (kal_int32)MODEM_CG_CON0_WTIMER,
    PDN_DIV_REG_BIT = (kal_int32)MODEM_CG_CON2_DIVIDER,
    PDN_AFC3G_REG_BIT = (kal_int32)MODEM_CG_CON0_AFC_3G,

    PDN_OSTIMERARM_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_OSTIMER,
    PDN_IRDMA_REG_BIT = (kal_int32)MD2GSYS_CG_CON0_IRDMA,
    PDN_APC_PRE_REG_BIT = (kal_int32)MD2GSYS_CG_CON2_APC_PRE,
    PDN_FCS_REG_BIT = (kal_int32)MODEM_CG_CON2_FCS,
    PDN_BFE_REG_BIT = (kal_int32)MD2GSYS_CG_CON2_BFE,
    PDN_VAFE_REG_BIT = (kal_int32)MD2GSYS_CG_CON2_VAFE,
    PDN_HIF_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MD_HIF,

    PDN_ABM_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_ABM,
    PDN_ALC_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_ALC,
    PDN_ADOE_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_ADOE,

    PDN_PF_BUFF_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_PF_BUFF,
    PDN_BOOT_SLV_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_BOOT_SLV,

    PDN_AP_UART1_REG_BIT = (kal_int32)AP_PERI_CG_CON0_UART0,
    PDN_AP_UART2_REG_BIT = (kal_int32)AP_PERI_CG_CON0_UART1,
    PDN_AP_UART3_REG_BIT = (kal_int32)AP_PERI_CG_CON0_UART2,
    PDN_AP_UART4_REG_BIT = (kal_int32)AP_PERI_CG_CON0_UART3,
    PDN_AP_DMA_REG_BIT = (kal_int32)AP_PERI_CG_CON0_AP_DMA,
    PDN_AP_USB0_REG_BIT = (kal_int32)AP_PERI_CG_CON0_USB0,
    PDN_AP_USB1_REG_BIT = (kal_int32)AP_PERI_CG_CON0_USB1,
    PDN_AP_MSDC2_1_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MSDC20_1,
    PDN_AP_MSDC2_2_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MSDC20_2,
    PDN_AP_MSDC3_1_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MSDC30_1,
    PDN_AP_MSDC3_2_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MSDC30_2,
    PDN_AP_MSDC3_3_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MSDC30_3,
    PDN_AP_NFI_REG_BIT = (kal_int32)AP_PERI_CG_CON0_NFI,
    PDN_AP_NLI_REG_BIT = (kal_int32)AP_PERI_CG_CON0_NLI,
    PDN_AP_HIF_REG_BIT = (kal_int32)AP_PERI_CG_CON0_AP_HIF,
    PDN_AP_PWM1_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM1,
    PDN_AP_PWM2_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM2,
    PDN_AP_PWM3_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM3,
    PDN_AP_PWM4_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM4,
    PDN_AP_PWM5_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM5,
    PDN_AP_PWM6_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM6,
    PDN_AP_PWM7_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM7,
    PDN_AP_PWM_REG_BIT = (kal_int32)AP_PERI_CG_CON0_PWM,
    PDN_AP_THERM_REG_BIT = (kal_int32)AP_PERI_CG_CON0_THERM,
    PDN_AP_IRDA_REG_BIT = (kal_int32)AP_PERI_CG_CON0_IRDA,
    PDN_AP_I2C0_REG_BIT = (kal_int32)AP_PERI_CG_CON0_I2C0,
    PDN_AP_I2C1_REG_BIT = (kal_int32)AP_PERI_CG_CON0_I2C1,
    PDN_AP_I2C2_REG_BIT = (kal_int32)AP_PERI_CG_CON0_I2C2,
    PDN_AP_I2C3_REG_BIT = (kal_int32)AP_PERI_CG_CON0_I2C3,
    PDN_AP_I2C4_REG_BIT = (kal_int32)AP_PERI_CG_CON0_I2C4,
    PDN_AP_I2C5_REG_BIT = (kal_int32)AP_PERI_CG_CON0_I2C5,

    PDN_GCC_REG_BIT = (kal_int32)MD2GSYS_CG_CON0_GCC,
    PDN_TXBUF_REG_BIT = (kal_int32)MD2GSYS_CG_CON0_TXBUF,
    PDN_RXBUF_REG_BIT = (kal_int32)MD2GSYS_CG_CON0_RXBUF,
    PDN_IRDBG_REG_BIT = (kal_int32)MD2GSYS_CG_CON0_IRDBG,
    PDN_AHB2DSPIO_REG_BIT = (kal_int32)MD2GSYS_CG_CON0_AHB2DSPIO,

    PDN_DBG_REG_BIT = (kal_int32)MD_PWR_GLOBAL_CON0_DBG,

    PDN_BSIPMIC_REG_BIT = (kal_int32)MODEM_CG_CON0_BSI_PMIC,
    PDN_BPIPMIC_REG_BIT = (kal_int32)MODEM_CG_CON0_BPI_PMIC,
    PDN_PFCDEC_REG_BIT = (kal_int32)MODEM_CG_CON0_PFC_DEC,
    PDN_BYCACC_REG_BIT = (kal_int32)MODEM_CG_CON0_BYC_ACC,
    PDN_ATB_REG_BIT = (kal_int32)MODEM_CG_CON0_ATB,
    PDN_PFCENC_REG_BIT = (kal_int32)MODEM_CG_CON0_PFC_ENC,
    PDN_BSI2G_T_REG_BIT = (kal_int32)MODEM_CG_CON2_BSI_2G_T,
    PDN_BPI2G_T_REG_BIT = (kal_int32)MODEM_CG_CON2_BPI_2G_T,
    PDN_AFC2G_T_REG_BIT = (kal_int32)MODEM_CG_CON2_AFC_2G_T,

    PDN_INFRA_MD1_PMICWRAP_REG_BIT = (kal_int32)AP_INFRA_MD1_CON_PMICWRAP,

    PDN_INFRA_MD2_PMICWRAP_REG_BIT = (kal_int32)AP_INFRA_MD2_CON_PMICWRAP,

    PDN_INFRA_MD1_PMICSPI_REG_BIT = (kal_int32)AP_INFRA_MD1_CON_PMICSPI,

    PDN_INFRA_MD2_PMICSPI_REG_BIT = (kal_int32)AP_INFRA_MD2_CON_PMICSPI,

    PDN_TOPCKG_MD1_PMICSPI_REG_BIT = (kal_int32)AP_TOPCKG_MD1_CG_SET_PMICSPI,

    PDN_TOPCKG_MD2_PMICSPI_REG_BIT = (kal_int32)AP_TOPCKG_MD2_CG_SET_PMICSPI,
    PDN_HIF_COMBIN_REG_BIT = (kal_int32)AP_PERI_CG_CON0_MD_HIF_COMBIN,

    PDN_MAX_REG_BIT
} PDN_REG_BIT;

typedef enum {
    PDN_UART1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG | PDN_OPT_NEVER_OFF,

    PDN_GCU_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_DMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_SIM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_SIM2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_GPT_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_USB_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_TOPSM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_ELM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_TDMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_BSI2G_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BPI2G_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AFC2G_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_BSI3G_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BPI3G_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_WCDMATIMER_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_DIV_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AFC3G_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_OSTIMERARM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_IRDMA_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_APC_PRE_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_FCS_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BFE_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_VAFE_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_HIF_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_ABM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_ALC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_ADOE_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_PF_BUFF_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BOOT_SLV_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_AP_UART1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_UART2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_UART3_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_UART4_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_DMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_USB0_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_USB1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_MSDC2_1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_MSDC2_2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_MSDC3_1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_MSDC3_2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_MSDC3_3_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_NFI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_NLI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_HIF_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM3_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM4_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM5_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM6_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM7_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_PWM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_THERM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_IRDA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_I2C0_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_I2C1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_I2C2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_I2C3_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_I2C4_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AP_I2C5_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_GCC_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_TXBUF_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_RXBUF_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_IRDBG_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
    PDN_AHB2DSPIO_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,

    PDN_DBG_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_BSIPMIC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BPIPMIC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_PFCDEC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BYCACC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_ATB_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_PFCENC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BSI2G_T_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_BPI2G_T_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_AFC2G_T_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_INFRA_MD1_PMICWRAP_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_INFRA_MD2_PMICWRAP_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_INFRA_MD1_PMICSPI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_INFRA_MD2_PMICSPI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_TOPCKG_MD1_PMICSPI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_TOPCKG_MD2_PMICSPI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
    PDN_HIF_COMBIN_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

    PDN_MAX_REG_WIDTH
} PDN_REG_WIDTH;

/*******************************************************************************
 * Define data structures
 *******************************************************************************/

/*******************************************************************************
 * Define macros
 *******************************************************************************/

/*
 * PDN_SET(kal_uint32 dev): power down device
 * @dev: device ID (EX: PDN_UART1)
 */
#define PDN_SET(dev) do {                                                                       \
        if(DUMMY_PDN_SET_REGISTER == (kal_uint32)dev##_SET_REG) {                               \
            register kal_uint32 mask;                                                           \
            mask = SaveAndSetIRQMask();                                                         \
            if (dev##_REG_WIDTH & PDN_OPT_32BIT_REG) {                                          \
                register kal_uint32 reg_val;                                                    \
                reg_val = *(volatile kal_uint32 *)(dev##_CON_REG);                              \
                if(dev##_REG_WIDTH & PDN_OPT_INVERSED_POLARITY) {                               \
                    reg_val &= ~(kal_uint32)(dev##_REG_BIT);                                    \
                } else {                                                                        \
                    reg_val |= (kal_uint32)(dev##_REG_BIT);                                     \
                }                                                                               \
                *(volatile kal_uint32 *)(dev##_CON_REG) = reg_val;                              \
            } else {                                                                            \
                register kal_uint16 reg_val;                                                    \
                reg_val = *(volatile kal_uint16 *)(dev##_CON_REG);                              \
                if(dev##_REG_WIDTH & PDN_OPT_INVERSED_POLARITY) {                               \
                    reg_val &= ~(kal_uint16)(dev##_REG_BIT);                                    \
                } else {                                                                        \
                    reg_val |= (kal_uint16)(dev##_REG_BIT);                                     \
                }                                                                               \
                *(volatile kal_uint16 *)(dev##_CON_REG) = reg_val;                              \
            }                                                                                   \
            RestoreIRQMask(mask);                                                               \
        } else {                                                                                \
            if (dev##_REG_WIDTH & PDN_OPT_32BIT_REG) {                                          \
                *(volatile kal_uint32 *)(dev##_SET_REG) = (kal_uint32)(dev##_REG_BIT);          \
            } else {                                                                            \
                *(volatile kal_uint16 *)(dev##_SET_REG) = (kal_uint16)(dev##_REG_BIT);          \
            }                                                                                   \
        }                                                                                       \
    } while (0)

/*
 * PDN_CLR(kal_uint32 dev): power up device
 * @dev: device ID (EX: PDN_UART1)
 */
#define PDN_CLR(dev) do {                                                                       \
        if(DUMMY_PDN_CLR_REGISTER == (kal_uint32)dev##_CLR_REG) {                               \
            register kal_uint32 mask;                                                           \
            mask = SaveAndSetIRQMask();                                                         \
            if (dev##_REG_WIDTH & PDN_OPT_32BIT_REG) {                                          \
                register kal_uint32 reg_val;                                                    \
                reg_val = *(volatile kal_uint32 *)(dev##_CON_REG);                              \
                if(dev##_REG_WIDTH & PDN_OPT_INVERSED_POLARITY) {                               \
                    reg_val |= (kal_uint32)(dev##_REG_BIT);                                     \
                } else {                                                                        \
                    reg_val &= ~(kal_uint32)(dev##_REG_BIT);                                    \
                }                                                                               \
                *(volatile kal_uint32 *)(dev##_CON_REG) = reg_val;                              \
            } else {                                                                            \
                register kal_uint16 reg_val;                                                    \
                reg_val = *(volatile kal_uint16 *)(dev##_CON_REG);                              \
                if(dev##_REG_WIDTH & PDN_OPT_INVERSED_POLARITY) {                               \
                    reg_val |= (kal_uint16)(dev##_REG_BIT);                                     \
                } else {                                                                        \
                    reg_val &= ~(kal_uint16)(dev##_REG_BIT);                                    \
                }                                                                               \
                *(volatile kal_uint16 *)(dev##_CON_REG) = reg_val;                              \
            }                                                                                   \
            RestoreIRQMask(mask);                                                               \
        } else {                                                                                \
            if (dev##_REG_WIDTH & PDN_OPT_32BIT_REG) {                                          \
                *(volatile kal_uint32 *)(dev##_CLR_REG) = (kal_uint32)(dev##_REG_BIT);          \
            } else {                                                                            \
                *(volatile kal_uint16 *)(dev##_CLR_REG) = (kal_uint16)(dev##_REG_BIT);          \
            }                                                                                   \
        }                                                                                       \
    } while (0)

/*
 * PDN_STS(kal_uint32 dev, type s, type): get device power down status
 * @dev: device ID (EX: PDN_UART1)
 * @s: returned power down status
 * @t: type of s
 */
#define PDN_STS(dev, s, t) do {                                                                 \
        /* mt6589 pdn fixup */                                                                  \
        if (_##dev == _PDN_TOPCKG_MD2_PMICSPI) {                                                \
            (s) = (t)(*(volatile kal_uint32 *)(dev##_CON_REG) & AP_TOPCKG_MD2_CG_CON_PMICSPI);  \
        } else if (_##dev == _PDN_TOPCKG_MD1_PMICSPI) {                                         \
            (s) = (t)(*(volatile kal_uint32 *)(dev##_CON_REG) & AP_TOPCKG_MD1_CG_CON_PMICSPI);  \
        } else {                                                                                \
            /* default PDN_STATUS */                                                            \
            if (dev##_REG_WIDTH & PDN_OPT_32BIT_REG) {                                          \
                (s) = (t)(*(volatile kal_uint32 *)(dev##_CON_REG) & dev##_REG_BIT);             \
            } else {                                                                            \
                (s) = (t)(*(volatile kal_uint16 *)(dev##_CON_REG) & dev##_REG_BIT);             \
            }                                                                                   \
        }                                                                                       \
    } while(0)

#endif /* !__DRVPDN_INLINE_MT6752_H__ */
