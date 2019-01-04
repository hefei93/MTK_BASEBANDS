/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    cmux_sap.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is intends for SAP of multiplexer.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "module_msg_range.h"

/*CMUX*/
#ifndef CMUX_MSGID_H
#define CMUX_MSGID_H

MODULE_MSG_BEGIN( CMUX_MSG_CODE_BEGIN )
MSG_ID_CMUX_STARTUP_REQ = CMUX_MSG_CODE_BEGIN,
MSG_ID_CMUX_CLOSE_DOWN_REQ,
MSG_ID_CMUX_CLOSE_DOWN_IND,
//MSG_ID_CMUX_TIMEOUT_IND,/*CMUX->AP*/
MSG_ID_CMUX_DLC_CONNECT_IND,/*CMUX->AP*/
//MSG_ID_CMUX_DLC_DISCONNECT_IND,/*CMUX->AP*/

MSG_ID_CMUX_DLC_DATA_READY_REQ,
MSG_ID_CMUX_DLC_READY_TO_RECEIVE_REQ,

MSG_ID_CMUX_READY_TO_SEND_IND,
MSG_ID_CMUX_UART_DATA_IND,
MSG_ID_CMUX_UART_DATA_REQ,
MSG_ID_CMUX_UART_CLOSE_DOWN_REQ,
MSG_ID_CMUX_UART_CLOSE_DOWN_CNF,

/* CMUX UT INTERFACE */
MSG_ID_CMUX_UT_UART_DATA_IND,
MSG_ID_CMUX_UT_UART_DATA_REQ,

/* For WinMo Gemini VT only */
MSG_ID_CMUX_VP_SET_BUFF_CONFIG_REQ,
MSG_ID_CMUX_VP_SET_BUFF_CONFIG_CNF,
MSG_ID_CMUX_VP_RESET_BUFF_CONFIG_REQ,
MSG_ID_CMUX_VP_RESET_BUFF_CONFIG_CNF,

/* FLC2 INTERFACE */
MSG_ID_CMUX_FLC_DATA_RESUME_IND,
MSG_ID_CMUX_FLC_DATA_SUSPEND_IND,
/* STACK_TIMER_SAP */
MODULE_MSG_END( MSG_ID_CMUX_CODE_TAIL )

#endif //CMUX_MSGID_H
