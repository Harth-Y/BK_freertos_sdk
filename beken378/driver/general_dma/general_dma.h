#ifndef __GENER_DMA_H__
#define __GENER_DMA_H__

#if CFG_GENERAL_DMA

//#define GENER_DMA_DEBUG

#include "uart_pub.h"
#ifdef GENER_DMA_DEBUG
#define GENER_DMA_PRT                   os_printf
#define GENER_DMA_WPRT                  os_printf
#else
#define GENER_DMA_PRT                   null_prf
#define GENER_DMA_WPRT                  null_prf
#endif

#define GENER_DMA_BASE                      (0x00809000)

// DMA 0
#define GENER_DMA0_REG0_CONF                (GENER_DMA_BASE + 0x00*4)
#define GDMA_X_DMA_EN                     (1 << 0)
#define GDMA_X_FIN_INTEN                  (1 << 1)
#define GDMA_X_HFIN_INTEN                 (1 << 2)
#if (CFG_SOC_NAME != SOC_BK7231)
#define GDMA_X_REPEAT_MODE                (1 << 3)
#endif // (CFG_SOC_NAME != SOC_BK7231)
#define GDMA_X_SRCDATA_WIDTH_POSI         (4)
#define GDMA_X_SRCDATA_WIDTH_MASK         (0x3)
#define GDMA_X_DSTDATA_WIDTH_POSI         (6)
#define GDMA_X_DSTDATA_WIDTH_MASK         (0x3)
#define GDMA_DATA_WIDTH_8BIT              (0x0)
#define GDMA_DATA_WIDTH_16BIT             (0x1)
#define GDMA_DATA_WIDTH_32BIT             (0x2)
#define GDMA_X_SRCADDR_INC                (1 << 8)
#define GDMA_X_DSTADDR_INC                (1 << 9)
#define GDMA_X_SRCADDR_LOOP               (1 << 10)
#define GDMA_X_DSTADDR_LOOP               (1 << 11)
#define GDMA_X_CHNL_PRIO_POSI             (12)
#define GDMA_X_CHNL_PRIO_MASK             (0x3)
#define GDMA_X_TRANS_LEN_POSI             (16)
#define GDMA_X_TRANS_LEN_MASK             (0xffffU)

#define GENER_DMA0_REG1_DST_START_ADDR      (GENER_DMA_BASE + 0x01*4)

#define GENER_DMA0_REG2_SRC_START_ADDR      (GENER_DMA_BASE + 0x02*4)

#define GENER_DMA0_REG3_DSTLOOP_END_ADDR    (GENER_DMA_BASE + 0x03*4)

#define GENER_DMA0_REG4_DSTLOOP_START_ADDR  (GENER_DMA_BASE + 0x04*4)

#define GENER_DMA0_REG5_SRCLOOP_END_ADDR    (GENER_DMA_BASE + 0x05*4)

#define GENER_DMA0_REG6_SRCLOOP_START_ADDR  (GENER_DMA_BASE + 0x06*4)

#if (CFG_SOC_NAME == SOC_BK7231)
#define GENER_DMA0_REG7_REMAIN_LEN          (GENER_DMA_BASE + 0x07*4)
#define GDMA_REMAIN_LEN_MASK            (0x1ffff)
#else
#define GENER_DMA0_REG7_MUX_REQS            (GENER_DMA_BASE + 0x07*4)
#define GDMA_X_SRC_REQ_POSI               (0)
#define GDMA_X_SRC_REQ_MASK               (0xfU)
#define GDMA_X_DST_REQ_POSI               (4)
#define GDMA_X_DST_REQ_MASK               (0xfU)
#if (CFG_SOC_NAME == SOC_BK7221U)
#define GDMA_X_SRC_RD_INTVAL_POSI         (12)
#define GDMA_X_SRC_RD_INTVAL_MASK         (0xfU)
#define GDMA_X_DST_WR_INTVAL_POSI         (16)
#define GDMA_X_DST_WR_INTVAL_MASK         (0xfU)
#endif // (CFG_SOC_NAME == SOC_BK7221U)
#define GDMA_X_DTCM_WR_WAIT_WORD          (1 << 8)
#endif // (CFG_SOC_NAME == SOC_BK7231)

// DMA1
#define GENER_DMA1_REG8_CONF                (GENER_DMA_BASE + 0x08*4)

#define GENER_DMA1_REG9_DST_START_ADDR      (GENER_DMA_BASE + 0x09*4)

#define GENER_DMA1_REGA_SRC_START_ADDR      (GENER_DMA_BASE + 0x0A*4)

#define GENER_DMA1_REGB_DSTLOOP_END_ADDR    (GENER_DMA_BASE + 0x0B*4)

#define GENER_DMA1_REGC_DSTLOOP_START_ADDR  (GENER_DMA_BASE + 0x0C*4)

#define GENER_DMA1_REGD_SRCLOOP_END_ADDR    (GENER_DMA_BASE + 0x0D*4)

#define GENER_DMA1_REGE_SRCLOOP_START_ADDR  (GENER_DMA_BASE + 0x0E*4)

#if (CFG_SOC_NAME == SOC_BK7231)
#define GENER_DMA1_REGF_REMAIN_LEN          (GENER_DMA_BASE + 0x0F*4)
#else
#define GENER_DMA1_REGF_MUX_REQS            (GENER_DMA_BASE + 0x0F*4)
#endif // (CFG_SOC_NAME == SOC_BK7231)

// DMA2
#define GENER_DMA2_REG10_CONF               (GENER_DMA_BASE + 0x10*4)

#define GENER_DMA2_REG11_DST_START_ADDR     (GENER_DMA_BASE + 0x11*4)

#define GENER_DMA2_REG12_SRC_START_ADDR     (GENER_DMA_BASE + 0x12*4)

#define GENER_DMA2_REG13_DSTLOOP_END_ADDR   (GENER_DMA_BASE + 0x13*4)

#define GENER_DMA2_REG14_DSTLOOP_START_ADDR (GENER_DMA_BASE + 0x14*4)

#define GENER_DMA2_REG15_SRCLOOP_END_ADDR   (GENER_DMA_BASE + 0x15*4)

#define GENER_DMA2_REG16_SRCLOOP_START_ADDR (GENER_DMA_BASE + 0x16*4)

#if (CFG_SOC_NAME == SOC_BK7231)
#define GENER_DMA2_REG17_REMAIN_LEN         (GENER_DMA_BASE + 0x17*4)
#else
#define GENER_DMA2_REG17_MUX_REQS           (GENER_DMA_BASE + 0x17*4)
#endif // (CFG_SOC_NAME == SOC_BK7231)

// DMA3
#define GENER_DMA3_REG18_CONF               (GENER_DMA_BASE + 0x18*4)

#define GENER_DMA3_REG19_DST_START_ADDR     (GENER_DMA_BASE + 0x19*4)

#define GENER_DMA3_REG1A_SRC_START_ADDR     (GENER_DMA_BASE + 0x1A*4)

#define GENER_DMA3_REG1B_DSTLOOP_END_ADDR   (GENER_DMA_BASE + 0x1B*4)

#define GENER_DMA3_REG1C_DSTLOOP_START_ADDR (GENER_DMA_BASE + 0x1C*4)

#define GENER_DMA3_REG1D_SRCLOOP_END_ADDR   (GENER_DMA_BASE + 0x1D*4)

#define GENER_DMA3_REG1E_SRCLOOP_START_ADDR (GENER_DMA_BASE + 0x1E*4)

#if (CFG_SOC_NAME == SOC_BK7231)
#define GENER_DMA3_REG1F_REMAIN_LEN         (GENER_DMA_BASE + 0x1F*4)
#else
#define GENER_DMA3_REG1F_MUX_REQS           (GENER_DMA_BASE + 0x1F*4)
#endif // (CFG_SOC_NAME == SOC_BK7231)

#if (CFG_SOC_NAME == SOC_BK7231)
#define GENER_DMA_REG20_DMA_INT_STATUS      (GENER_DMA_BASE + 0x20*4)
#define GENER_DMA_FIN_INT_STATUS_POSI       (0)
#define GENER_DMA_FIN_INT_STATUS_MASK       (0xf)
#define GENER_DMA_HFIN_INT_STATUS_POSI      (8)
#define GENER_DMA_HFIN_INT_STATUS_MASK      (0xf)
#else
// DMA4
#define GENER_DMA4_REG20_CONF               (GENER_DMA_BASE + 0x20*4)

#define GENER_DMA4_REG21_DST_START_ADDR     (GENER_DMA_BASE + 0x21*4)

#define GENER_DMA4_REG22_SRC_START_ADDR     (GENER_DMA_BASE + 0x22*4)

#define GENER_DMA4_REG23_DSTLOOP_END_ADDR   (GENER_DMA_BASE + 0x23*4)

#define GENER_DMA4_REG24_DSTLOOP_START_ADDR (GENER_DMA_BASE + 0x24*4)

#define GENER_DMA4_REG25_SRCLOOP_END_ADDR   (GENER_DMA_BASE + 0x25*4)

#define GENER_DMA4_REG26_SRCLOOP_START_ADDR (GENER_DMA_BASE + 0x26*4)

#define GENER_DMA4_REG27_MUX_REQS           (GENER_DMA_BASE + 0x27*4)

// DMA5
#define GENER_DMA5_REG28_CONF               (GENER_DMA_BASE + 0x28*4)

#define GENER_DMA5_REG29_DST_START_ADDR     (GENER_DMA_BASE + 0x29*4)

#define GENER_DMA5_REG2A_SRC_START_ADDR     (GENER_DMA_BASE + 0x2A*4)

#define GENER_DMA5_REG2B_DSTLOOP_END_ADDR   (GENER_DMA_BASE + 0x2B*4)

#define GENER_DMA5_REG2C_DSTLOOP_START_ADDR (GENER_DMA_BASE + 0x2C*4)

#define GENER_DMA5_REG2D_SRCLOOP_END_ADDR   (GENER_DMA_BASE + 0x2D*4)

#define GENER_DMA5_REG2E_SRCLOOP_START_ADDR (GENER_DMA_BASE + 0x2E*4)

#define GENER_DMA5_REG2F_MUX_REQS           (GENER_DMA_BASE + 0x2F*4)

#define GENER_DMA0_REG30_INT_CNTS           (GENER_DMA_BASE + 0x30*4)
#define GDMA_X_REMAIN_LEN_POSI            (0)
#define GDMA_X_REMAIN_LEN_MASK            (0x1ffff)
#define GDMA_X_FIN_CNT_POSI               (24)
#define GDMA_X_FIN_CNT_MASK               (0xf)
#define GDMA_X_HFIN_CNT_POSI              (28)
#define GDMA_X_HFIN_CNT_MASK              (0xf)

#define GENER_DMA1_REG31_INT_CNTS           (GENER_DMA_BASE + 0x31*4)

#define GENER_DMA2_REG32_INT_CNTS           (GENER_DMA_BASE + 0x32*4)

#define GENER_DMA3_REG32_INT_CNTS           (GENER_DMA_BASE + 0x33*4)

#define GENER_DMA4_REG34_INT_CNTS           (GENER_DMA_BASE + 0x34*4)

#define GENER_DMA5_REG35_INT_CNTS           (GENER_DMA_BASE + 0x35*4)

#define GENER_DMA_REG37_PRIO_MODE           (GENER_DMA_BASE + 0x37*4)
#define GDMA_PRIO_FIXED                   (1 << 0)  // 0: round-robin

#define GENER_DMA_REG38_DMA_INT_STATUS      (GENER_DMA_BASE + 0x38*4)
#define GENER_DMA_FIN_INT_STATUS_POSI       (0)
#define GENER_DMA_FIN_INT_STATUS_MASK       (0x3f)
#define GENER_DMA_HFIN_INT_STATUS_POSI      (8)
#define GENER_DMA_HFIN_INT_STATUS_MASK      (0x3f)

#if (CFG_SOC_NAME == SOC_BK7221U)
#define GENER_DMA0_REG40_SRC_PAUSE_ADDR     (GENER_DMA_BASE + 0x40*4)

#define GENER_DMA1_REG41_SRC_PAUSE_ADDR     (GENER_DMA_BASE + 0x41*4)

#define GENER_DMA2_REG42_SRC_PAUSE_ADDR     (GENER_DMA_BASE + 0x42*4)

#define GENER_DMA3_REG43_SRC_PAUSE_ADDR     (GENER_DMA_BASE + 0x43*4)

#define GENER_DMA4_REG44_SRC_PAUSE_ADDR     (GENER_DMA_BASE + 0x44*4)

#define GENER_DMA5_REG45_SRC_PAUSE_ADDR     (GENER_DMA_BASE + 0x45*4)


#define GENER_DMA0_REG48_DST_PAUSE_ADDR     (GENER_DMA_BASE + 0x48*4)

#define GENER_DMA1_REG49_DST_PAUSE_ADDR     (GENER_DMA_BASE + 0x49*4)

#define GENER_DMA2_REG4A_DST_PAUSE_ADDR     (GENER_DMA_BASE + 0x4A*4)

#define GENER_DMA3_REG4B_DST_PAUSE_ADDR     (GENER_DMA_BASE + 0x4B*4)

#define GENER_DMA4_REG4C_DST_PAUSE_ADDR     (GENER_DMA_BASE + 0x4C*4)

#define GENER_DMA5_REG4D_DST_PAUSE_ADDR     (GENER_DMA_BASE + 0x4D*4)


#define GENER_DMA0_REG50_SRC_RD_ADDR        (GENER_DMA_BASE + 0x50*4)

#define GENER_DMA1_REG51_SRC_RD_ADDR        (GENER_DMA_BASE + 0x51*4)

#define GENER_DMA2_REG52_SRC_RD_ADDR        (GENER_DMA_BASE + 0x52*4)

#define GENER_DMA3_REG53_SRC_RD_ADDR        (GENER_DMA_BASE + 0x53*4)

#define GENER_DMA4_REG54_SRC_RD_ADDR        (GENER_DMA_BASE + 0x54*4)

#define GENER_DMA5_REG55_SRC_RD_ADDR        (GENER_DMA_BASE + 0x55*4)


#define GENER_DMA0_REG58_DST_WR_ADDR        (GENER_DMA_BASE + 0x58*4)

#define GENER_DMA1_REG59_DST_WR_ADDR        (GENER_DMA_BASE + 0x59*4)

#define GENER_DMA2_REG5A_DST_WR_ADDR        (GENER_DMA_BASE + 0x5A*4)

#define GENER_DMA3_REG5B_DST_WR_ADDR        (GENER_DMA_BASE + 0x5B*4)

#define GENER_DMA4_REG5C_DST_WR_ADDR        (GENER_DMA_BASE + 0x5C*4)

#define GENER_DMA5_REG5D_DST_WR_ADDR        (GENER_DMA_BASE + 0x5D*4)
#endif // (CFG_SOC_NAME == SOC_BK7221U)

#endif // (CFG_SOC_NAME == SOC_BK7231)

UINT32 gdma_ctrl(UINT32 cmd, void *param);

#endif // CFG_GENERAL_DMA

#endif // __GENER_DMA_H__