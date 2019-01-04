#ifndef __IDC_SUART_H__
#define __IDC_SUART_H__

#include "reg_base.h"

#if defined(MT6290)
#define	BASE_ADDR_PERISYS_IDC_SUART			0xB6F27000
#elif defined(MT6595) || defined(MT6752) || defined(MT6735)
#define	BASE_ADDR_PERISYS_IDC_SUART			IDC_SUART_BASE
#endif

#define REG_PERISYS_IDC_SUART_RBR_THR_DLL_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x00)
#define REG_PERISYS_IDC_SUART_IER_DLM_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x04)
#define REG_PERISYS_IDC_SUART_IIR_FCR_EFR_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x08)
#define REG_PERISYS_IDC_SUART_LCR_ADDR			(BASE_ADDR_PERISYS_IDC_SUART+0x0C)
#define REG_PERISYS_IDC_SUART_MCR_XON1_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x10)
#define REG_PERISYS_IDC_SUART_LSR_XON2_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x14)
#define REG_PERISYS_IDC_SUART_MSR_XOFF1_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x18)
#define REG_PERISYS_IDC_SUART_SCR_XOFF2_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x1C)
#define REG_PERISYS_IDC_SUART_AUTOBAUD_EN_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x20)
#define REG_PERISYS_IDC_SUART_RATE_STEP_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x24)
#define REG_PERISYS_IDC_SUART_STEP_COUNT_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x28)
#define REG_PERISYS_IDC_SUART_SAMPLE_COUNT_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x2C)
#define REG_PERISYS_IDC_SUART_AUTOBAUD_DATA_ADDR	(BASE_ADDR_PERISYS_IDC_SUART+0x30)
#define REG_PERISYS_IDC_SUART_RATE_FIX_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x34)
#define REG_PERISYS_IDC_SUART_AUTOBAUD_RATE_ADDR	(BASE_ADDR_PERISYS_IDC_SUART+0x38)
#define REG_PERISYS_IDC_SUART_GUARD_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x3C)
#define REG_PERISYS_IDC_SUART_ESC_CHAR_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x40)
#define REG_PERISYS_IDC_SUART_ESC_EN_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x44)
#define REG_PERISYS_IDC_SUART_SLEEP_EN_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x48)
#define REG_PERISYS_IDC_SUART_RXDMA_EN_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x4C)
#define REG_PERISYS_IDC_SUART_RXTRIG_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x50)
#define REG_PERISYS_IDC_SUART_RXTIMEOUT_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x54)
#define REG_PERISYS_IDC_SUART_RXDMA_CTRL_ADDR		(BASE_ADDR_PERISYS_IDC_SUART+0x58)
#define REG_PERISYS_IDC_SUART_DUMMY			(BASE_ADDR_PERISYS_IDC_SUART+0x5c)
#define REG_PERISYS_IDC_SUART_START_PRI			(BASE_ADDR_PERISYS_IDC_SUART+0x60)
#define REG_PERISYS_IDC_SUART_START_PRI_BITEN		(BASE_ADDR_PERISYS_IDC_SUART+0x64)
#define REG_PERISYS_IDC_SUART_START_PAT			(BASE_ADDR_PERISYS_IDC_SUART+0x68)
#define REG_PERISYS_IDC_SUART_START_PAT_BITEN		(BASE_ADDR_PERISYS_IDC_SUART+0x6C)
#define REG_PERISYS_IDC_SUART_FINISH_PRI		(BASE_ADDR_PERISYS_IDC_SUART+0x70)
#define REG_PERISYS_IDC_SUART_FINISH_PRI_BITEN		(BASE_ADDR_PERISYS_IDC_SUART+0x74)
#define REG_PERISYS_IDC_SUART_FINISH_PAT		(BASE_ADDR_PERISYS_IDC_SUART+0x78)
#define REG_PERISYS_IDC_SUART_FINISH_PAT_BITEN		(BASE_ADDR_PERISYS_IDC_SUART+0x7C)

#endif
