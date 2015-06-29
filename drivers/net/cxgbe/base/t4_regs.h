/*-
 *   BSD LICENSE
 *
 *   Copyright(c) 2014-2015 Chelsio Communications.
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of Chelsio Communications nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define MYPF_BASE 0x1b000
#define MYPF_REG(reg_addr) (MYPF_BASE + (reg_addr))

#define PF0_BASE 0x1e000
#define PF0_REG(reg_addr) (PF0_BASE + (reg_addr))

#define PF_STRIDE 0x400
#define PF_BASE(idx) (PF0_BASE + (idx) * PF_STRIDE)
#define PF_REG(idx, reg) (PF_BASE(idx) + (reg))

#define MYPORT_BASE 0x1c000
#define MYPORT_REG(reg_addr) (MYPORT_BASE + (reg_addr))

#define PORT0_BASE 0x20000
#define PORT0_REG(reg_addr) (PORT0_BASE + (reg_addr))

#define PORT_STRIDE 0x2000
#define PORT_BASE(idx) (PORT0_BASE + (idx) * PORT_STRIDE)
#define PORT_REG(idx, reg) (PORT_BASE(idx) + (reg))

#define PCIE_MEM_ACCESS_REG(reg_addr, idx) ((reg_addr) + (idx) * 8)
#define NUM_PCIE_MEM_ACCESS_INSTANCES 8

#define PCIE_FW_REG(reg_addr, idx) ((reg_addr) + (idx) * 4)
#define NUM_PCIE_FW_INSTANCES 8

#define T5_MYPORT_BASE 0x2c000
#define T5_MYPORT_REG(reg_addr) (T5_MYPORT_BASE + (reg_addr))

#define T5_PORT0_BASE 0x30000
#define T5_PORT0_REG(reg_addr) (T5_PORT0_BASE + (reg_addr))

#define T5_PORT_STRIDE 0x4000
#define T5_PORT_BASE(idx) (T5_PORT0_BASE + (idx) * T5_PORT_STRIDE)
#define T5_PORT_REG(idx, reg) (T5_PORT_BASE(idx) + (reg))

#define MPS_T5_CLS_SRAM_L(idx) (A_MPS_T5_CLS_SRAM_L + (idx) * 8)
#define NUM_MPS_T5_CLS_SRAM_L_INSTANCES 512

#define MPS_T5_CLS_SRAM_H(idx) (A_MPS_T5_CLS_SRAM_H + (idx) * 8)
#define NUM_MPS_T5_CLS_SRAM_H_INSTANCES 512

/* registers for module SGE */
#define SGE_BASE_ADDR 0x1000

#define A_SGE_PF_KDOORBELL 0x0

#define S_QID    15
#define M_QID    0x1ffffU
#define V_QID(x) ((x) << S_QID)
#define G_QID(x) (((x) >> S_QID) & M_QID)

#define S_DBPRIO    14
#define V_DBPRIO(x) ((x) << S_DBPRIO)
#define F_DBPRIO    V_DBPRIO(1U)

#define S_PIDX    0
#define M_PIDX    0x3fffU
#define V_PIDX(x) ((x) << S_PIDX)
#define G_PIDX(x) (((x) >> S_PIDX) & M_PIDX)

#define S_DBTYPE    13
#define V_DBTYPE(x) ((x) << S_DBTYPE)
#define F_DBTYPE    V_DBTYPE(1U)

#define S_PIDX_T5    0
#define M_PIDX_T5    0x1fffU
#define V_PIDX_T5(x) ((x) << S_PIDX_T5)
#define G_PIDX_T5(x) (((x) >> S_PIDX_T5) & M_PIDX_T5)

#define A_SGE_PF_GTS 0x4

#define S_INGRESSQID    16
#define M_INGRESSQID    0xffffU
#define V_INGRESSQID(x) ((x) << S_INGRESSQID)
#define G_INGRESSQID(x) (((x) >> S_INGRESSQID) & M_INGRESSQID)

#define S_SEINTARM    12
#define V_SEINTARM(x) ((x) << S_SEINTARM)
#define F_SEINTARM    V_SEINTARM(1U)

#define S_CIDXINC    0
#define M_CIDXINC    0xfffU
#define V_CIDXINC(x) ((x) << S_CIDXINC)
#define G_CIDXINC(x) (((x) >> S_CIDXINC) & M_CIDXINC)

#define A_SGE_CONTROL 0x1008

#define S_RXPKTCPLMODE    18
#define V_RXPKTCPLMODE(x) ((x) << S_RXPKTCPLMODE)
#define F_RXPKTCPLMODE    V_RXPKTCPLMODE(1U)

#define S_EGRSTATUSPAGESIZE    17
#define V_EGRSTATUSPAGESIZE(x) ((x) << S_EGRSTATUSPAGESIZE)
#define F_EGRSTATUSPAGESIZE    V_EGRSTATUSPAGESIZE(1U)

#define S_PKTSHIFT    10
#define M_PKTSHIFT    0x7U
#define V_PKTSHIFT(x) ((x) << S_PKTSHIFT)
#define G_PKTSHIFT(x) (((x) >> S_PKTSHIFT) & M_PKTSHIFT)

#define S_INGPADBOUNDARY    4
#define M_INGPADBOUNDARY    0x7U
#define V_INGPADBOUNDARY(x) ((x) << S_INGPADBOUNDARY)
#define G_INGPADBOUNDARY(x) (((x) >> S_INGPADBOUNDARY) & M_INGPADBOUNDARY)

#define A_SGE_HOST_PAGE_SIZE 0x100c

#define S_HOSTPAGESIZEPF7    28
#define M_HOSTPAGESIZEPF7    0xfU
#define V_HOSTPAGESIZEPF7(x) ((x) << S_HOSTPAGESIZEPF7)
#define G_HOSTPAGESIZEPF7(x) (((x) >> S_HOSTPAGESIZEPF7) & M_HOSTPAGESIZEPF7)

#define S_HOSTPAGESIZEPF6    24
#define M_HOSTPAGESIZEPF6    0xfU
#define V_HOSTPAGESIZEPF6(x) ((x) << S_HOSTPAGESIZEPF6)
#define G_HOSTPAGESIZEPF6(x) (((x) >> S_HOSTPAGESIZEPF6) & M_HOSTPAGESIZEPF6)

#define S_HOSTPAGESIZEPF5    20
#define M_HOSTPAGESIZEPF5    0xfU
#define V_HOSTPAGESIZEPF5(x) ((x) << S_HOSTPAGESIZEPF5)
#define G_HOSTPAGESIZEPF5(x) (((x) >> S_HOSTPAGESIZEPF5) & M_HOSTPAGESIZEPF5)

#define S_HOSTPAGESIZEPF4    16
#define M_HOSTPAGESIZEPF4    0xfU
#define V_HOSTPAGESIZEPF4(x) ((x) << S_HOSTPAGESIZEPF4)
#define G_HOSTPAGESIZEPF4(x) (((x) >> S_HOSTPAGESIZEPF4) & M_HOSTPAGESIZEPF4)

#define S_HOSTPAGESIZEPF3    12
#define M_HOSTPAGESIZEPF3    0xfU
#define V_HOSTPAGESIZEPF3(x) ((x) << S_HOSTPAGESIZEPF3)
#define G_HOSTPAGESIZEPF3(x) (((x) >> S_HOSTPAGESIZEPF3) & M_HOSTPAGESIZEPF3)

#define S_HOSTPAGESIZEPF2    8
#define M_HOSTPAGESIZEPF2    0xfU
#define V_HOSTPAGESIZEPF2(x) ((x) << S_HOSTPAGESIZEPF2)
#define G_HOSTPAGESIZEPF2(x) (((x) >> S_HOSTPAGESIZEPF2) & M_HOSTPAGESIZEPF2)

#define S_HOSTPAGESIZEPF1    4
#define M_HOSTPAGESIZEPF1    0xfU
#define V_HOSTPAGESIZEPF1(x) ((x) << S_HOSTPAGESIZEPF1)
#define G_HOSTPAGESIZEPF1(x) (((x) >> S_HOSTPAGESIZEPF1) & M_HOSTPAGESIZEPF1)

#define S_HOSTPAGESIZEPF0    0
#define M_HOSTPAGESIZEPF0    0xfU
#define V_HOSTPAGESIZEPF0(x) ((x) << S_HOSTPAGESIZEPF0)
#define G_HOSTPAGESIZEPF0(x) (((x) >> S_HOSTPAGESIZEPF0) & M_HOSTPAGESIZEPF0)

#define A_SGE_EGRESS_QUEUES_PER_PAGE_PF 0x1010

#define S_QUEUESPERPAGEPF1    4
#define M_QUEUESPERPAGEPF1    0xfU
#define V_QUEUESPERPAGEPF1(x) ((x) << S_QUEUESPERPAGEPF1)
#define G_QUEUESPERPAGEPF1(x) (((x) >> S_QUEUESPERPAGEPF1) & M_QUEUESPERPAGEPF1)

#define S_QUEUESPERPAGEPF0    0
#define M_QUEUESPERPAGEPF0    0xfU
#define V_QUEUESPERPAGEPF0(x) ((x) << S_QUEUESPERPAGEPF0)
#define G_QUEUESPERPAGEPF0(x) (((x) >> S_QUEUESPERPAGEPF0) & M_QUEUESPERPAGEPF0)

#define S_ERR_CPL_EXCEED_IQE_SIZE    22
#define V_ERR_CPL_EXCEED_IQE_SIZE(x) ((x) << S_ERR_CPL_EXCEED_IQE_SIZE)
#define F_ERR_CPL_EXCEED_IQE_SIZE    V_ERR_CPL_EXCEED_IQE_SIZE(1U)

#define S_ERR_INVALID_CIDX_INC    21
#define V_ERR_INVALID_CIDX_INC(x) ((x) << S_ERR_INVALID_CIDX_INC)
#define F_ERR_INVALID_CIDX_INC    V_ERR_INVALID_CIDX_INC(1U)

#define S_ERR_CPL_OPCODE_0    19
#define V_ERR_CPL_OPCODE_0(x) ((x) << S_ERR_CPL_OPCODE_0)
#define F_ERR_CPL_OPCODE_0    V_ERR_CPL_OPCODE_0(1U)

#define S_ERR_DROPPED_DB    18
#define V_ERR_DROPPED_DB(x) ((x) << S_ERR_DROPPED_DB)
#define F_ERR_DROPPED_DB    V_ERR_DROPPED_DB(1U)

#define S_ERR_DATA_CPL_ON_HIGH_QID1    17
#define V_ERR_DATA_CPL_ON_HIGH_QID1(x) ((x) << S_ERR_DATA_CPL_ON_HIGH_QID1)
#define F_ERR_DATA_CPL_ON_HIGH_QID1    V_ERR_DATA_CPL_ON_HIGH_QID1(1U)

#define S_ERR_DATA_CPL_ON_HIGH_QID0    16
#define V_ERR_DATA_CPL_ON_HIGH_QID0(x) ((x) << S_ERR_DATA_CPL_ON_HIGH_QID0)
#define F_ERR_DATA_CPL_ON_HIGH_QID0    V_ERR_DATA_CPL_ON_HIGH_QID0(1U)

#define S_ERR_BAD_DB_PIDX3    15
#define V_ERR_BAD_DB_PIDX3(x) ((x) << S_ERR_BAD_DB_PIDX3)
#define F_ERR_BAD_DB_PIDX3    V_ERR_BAD_DB_PIDX3(1U)

#define S_ERR_BAD_DB_PIDX2    14
#define V_ERR_BAD_DB_PIDX2(x) ((x) << S_ERR_BAD_DB_PIDX2)
#define F_ERR_BAD_DB_PIDX2    V_ERR_BAD_DB_PIDX2(1U)

#define S_ERR_BAD_DB_PIDX1    13
#define V_ERR_BAD_DB_PIDX1(x) ((x) << S_ERR_BAD_DB_PIDX1)
#define F_ERR_BAD_DB_PIDX1    V_ERR_BAD_DB_PIDX1(1U)

#define S_ERR_BAD_DB_PIDX0    12
#define V_ERR_BAD_DB_PIDX0(x) ((x) << S_ERR_BAD_DB_PIDX0)
#define F_ERR_BAD_DB_PIDX0    V_ERR_BAD_DB_PIDX0(1U)

#define S_ERR_ING_PCIE_CHAN    11
#define V_ERR_ING_PCIE_CHAN(x) ((x) << S_ERR_ING_PCIE_CHAN)
#define F_ERR_ING_PCIE_CHAN    V_ERR_ING_PCIE_CHAN(1U)

#define S_ERR_ING_CTXT_PRIO    10
#define V_ERR_ING_CTXT_PRIO(x) ((x) << S_ERR_ING_CTXT_PRIO)
#define F_ERR_ING_CTXT_PRIO    V_ERR_ING_CTXT_PRIO(1U)

#define S_ERR_EGR_CTXT_PRIO    9
#define V_ERR_EGR_CTXT_PRIO(x) ((x) << S_ERR_EGR_CTXT_PRIO)
#define F_ERR_EGR_CTXT_PRIO    V_ERR_EGR_CTXT_PRIO(1U)

#define S_DBFIFO_HP_INT    8
#define V_DBFIFO_HP_INT(x) ((x) << S_DBFIFO_HP_INT)
#define F_DBFIFO_HP_INT    V_DBFIFO_HP_INT(1U)

#define S_DBFIFO_LP_INT    7
#define V_DBFIFO_LP_INT(x) ((x) << S_DBFIFO_LP_INT)
#define F_DBFIFO_LP_INT    V_DBFIFO_LP_INT(1U)

#define S_INGRESS_SIZE_ERR    5
#define V_INGRESS_SIZE_ERR(x) ((x) << S_INGRESS_SIZE_ERR)
#define F_INGRESS_SIZE_ERR    V_INGRESS_SIZE_ERR(1U)

#define S_EGRESS_SIZE_ERR    4
#define V_EGRESS_SIZE_ERR(x) ((x) << S_EGRESS_SIZE_ERR)
#define F_EGRESS_SIZE_ERR    V_EGRESS_SIZE_ERR(1U)

#define A_SGE_INT_ENABLE3 0x1040

#define A_SGE_FL_BUFFER_SIZE0 0x1044
#define A_SGE_FL_BUFFER_SIZE1 0x1048
#define A_SGE_FL_BUFFER_SIZE2 0x104c
#define A_SGE_FL_BUFFER_SIZE3 0x1050

#define A_SGE_CONM_CTRL 0x1094

#define S_EGRTHRESHOLD    8
#define M_EGRTHRESHOLD    0x3fU
#define V_EGRTHRESHOLD(x) ((x) << S_EGRTHRESHOLD)
#define G_EGRTHRESHOLD(x) (((x) >> S_EGRTHRESHOLD) & M_EGRTHRESHOLD)

#define S_EGRTHRESHOLDPACKING    14
#define M_EGRTHRESHOLDPACKING    0x3fU
#define V_EGRTHRESHOLDPACKING(x) ((x) << S_EGRTHRESHOLDPACKING)
#define G_EGRTHRESHOLDPACKING(x) (((x) >> S_EGRTHRESHOLDPACKING) & \
				  M_EGRTHRESHOLDPACKING)

#define S_INGTHRESHOLD    2
#define M_INGTHRESHOLD    0x3fU
#define V_INGTHRESHOLD(x) ((x) << S_INGTHRESHOLD)
#define G_INGTHRESHOLD(x) (((x) >> S_INGTHRESHOLD) & M_INGTHRESHOLD)

#define A_SGE_INGRESS_RX_THRESHOLD 0x10a0

#define S_THRESHOLD_0    24
#define M_THRESHOLD_0    0x3fU
#define V_THRESHOLD_0(x) ((x) << S_THRESHOLD_0)
#define G_THRESHOLD_0(x) (((x) >> S_THRESHOLD_0) & M_THRESHOLD_0)

#define S_THRESHOLD_1    16
#define M_THRESHOLD_1    0x3fU
#define V_THRESHOLD_1(x) ((x) << S_THRESHOLD_1)
#define G_THRESHOLD_1(x) (((x) >> S_THRESHOLD_1) & M_THRESHOLD_1)

#define S_THRESHOLD_2    8
#define M_THRESHOLD_2    0x3fU
#define V_THRESHOLD_2(x) ((x) << S_THRESHOLD_2)
#define G_THRESHOLD_2(x) (((x) >> S_THRESHOLD_2) & M_THRESHOLD_2)

#define S_THRESHOLD_3    0
#define M_THRESHOLD_3    0x3fU
#define V_THRESHOLD_3(x) ((x) << S_THRESHOLD_3)
#define G_THRESHOLD_3(x) (((x) >> S_THRESHOLD_3) & M_THRESHOLD_3)

#define A_SGE_TIMER_VALUE_0_AND_1 0x10b8

#define S_TIMERVALUE0    16
#define M_TIMERVALUE0    0xffffU
#define V_TIMERVALUE0(x) ((x) << S_TIMERVALUE0)
#define G_TIMERVALUE0(x) (((x) >> S_TIMERVALUE0) & M_TIMERVALUE0)

#define S_TIMERVALUE1    0
#define M_TIMERVALUE1    0xffffU
#define V_TIMERVALUE1(x) ((x) << S_TIMERVALUE1)
#define G_TIMERVALUE1(x) (((x) >> S_TIMERVALUE1) & M_TIMERVALUE1)

#define A_SGE_TIMER_VALUE_2_AND_3 0x10bc

#define S_TIMERVALUE2    16
#define M_TIMERVALUE2    0xffffU
#define V_TIMERVALUE2(x) ((x) << S_TIMERVALUE2)
#define G_TIMERVALUE2(x) (((x) >> S_TIMERVALUE2) & M_TIMERVALUE2)

#define S_TIMERVALUE3    0
#define M_TIMERVALUE3    0xffffU
#define V_TIMERVALUE3(x) ((x) << S_TIMERVALUE3)
#define G_TIMERVALUE3(x) (((x) >> S_TIMERVALUE3) & M_TIMERVALUE3)

#define A_SGE_TIMER_VALUE_4_AND_5 0x10c0

#define S_TIMERVALUE4    16
#define M_TIMERVALUE4    0xffffU
#define V_TIMERVALUE4(x) ((x) << S_TIMERVALUE4)
#define G_TIMERVALUE4(x) (((x) >> S_TIMERVALUE4) & M_TIMERVALUE4)

#define S_TIMERVALUE5    0
#define M_TIMERVALUE5    0xffffU
#define V_TIMERVALUE5(x) ((x) << S_TIMERVALUE5)
#define G_TIMERVALUE5(x) (((x) >> S_TIMERVALUE5) & M_TIMERVALUE5)

#define A_SGE_DEBUG_INDEX 0x10cc
#define A_SGE_DEBUG_DATA_HIGH 0x10d0
#define A_SGE_DEBUG_DATA_LOW 0x10d4
#define A_SGE_STAT_CFG 0x10ec

#define S_STATMODE    2
#define M_STATMODE    0x3U
#define V_STATMODE(x) ((x) << S_STATMODE)
#define G_STATMODE(x) (((x) >> S_STATMODE) & M_STATMODE)

#define S_STATSOURCE_T5    9
#define M_STATSOURCE_T5    0xfU
#define V_STATSOURCE_T5(x) ((x) << S_STATSOURCE_T5)
#define G_STATSOURCE_T5(x) (((x) >> S_STATSOURCE_T5) & M_STATSOURCE_T5)

#define A_SGE_INGRESS_QUEUES_PER_PAGE_PF 0x10f4

#define A_SGE_CONTROL2 0x1124

#define S_INGPACKBOUNDARY    16
#define M_INGPACKBOUNDARY    0x7U
#define V_INGPACKBOUNDARY(x) ((x) << S_INGPACKBOUNDARY)
#define G_INGPACKBOUNDARY(x) (((x) >> S_INGPACKBOUNDARY) & M_INGPACKBOUNDARY)

#define S_BUSY    31
#define V_BUSY(x) ((x) << S_BUSY)
#define F_BUSY    V_BUSY(1U)

#define A_SGE_DEBUG_DATA_HIGH_INDEX_10 0x12a8
#define A_SGE_DEBUG_DATA_LOW_INDEX_2 0x12c8
#define A_SGE_DEBUG_DATA_LOW_INDEX_3 0x12cc

/* registers for module PCIE */
#define PCIE_BASE_ADDR 0x3000

#define A_PCIE_MEM_ACCESS_BASE_WIN 0x3068

#define S_PCIEOFST    10
#define M_PCIEOFST    0x3fffffU
#define V_PCIEOFST(x) ((x) << S_PCIEOFST)
#define G_PCIEOFST(x) (((x) >> S_PCIEOFST) & M_PCIEOFST)

#define S_BIR    8
#define M_BIR    0x3U
#define V_BIR(x) ((x) << S_BIR)
#define G_BIR(x) (((x) >> S_BIR) & M_BIR)

#define S_WINDOW    0
#define M_WINDOW    0xffU
#define V_WINDOW(x) ((x) << S_WINDOW)
#define G_WINDOW(x) (((x) >> S_WINDOW) & M_WINDOW)

#define A_PCIE_MEM_ACCESS_OFFSET 0x306c

#define S_PFNUM    0
#define M_PFNUM    0x7U
#define V_PFNUM(x) ((x) << S_PFNUM)
#define G_PFNUM(x) (((x) >> S_PFNUM) & M_PFNUM)

#define A_PCIE_FW 0x30b8
#define A_PCIE_FW_PF 0x30bc

/* registers for module CIM */
#define CIM_BASE_ADDR 0x7b00

#define A_CIM_PF_MAILBOX_DATA 0x240
#define A_CIM_PF_MAILBOX_CTRL 0x280

#define S_MBMSGVALID    3
#define V_MBMSGVALID(x) ((x) << S_MBMSGVALID)
#define F_MBMSGVALID    V_MBMSGVALID(1U)

#define S_MBOWNER    0
#define M_MBOWNER    0x3U
#define V_MBOWNER(x) ((x) << S_MBOWNER)
#define G_MBOWNER(x) (((x) >> S_MBOWNER) & M_MBOWNER)

#define A_CIM_PF_MAILBOX_CTRL_SHADOW_COPY 0x290
#define A_CIM_BOOT_CFG 0x7b00

#define S_UPCRST    0
#define V_UPCRST(x) ((x) << S_UPCRST)
#define F_UPCRST    V_UPCRST(1U)

/* registers for module TP */
#define TP_BASE_ADDR 0x7d00

#define A_TP_TIMER_RESOLUTION 0x7d90

#define S_TIMERRESOLUTION    16
#define M_TIMERRESOLUTION    0xffU
#define V_TIMERRESOLUTION(x) ((x) << S_TIMERRESOLUTION)
#define G_TIMERRESOLUTION(x) (((x) >> S_TIMERRESOLUTION) & M_TIMERRESOLUTION)

#define S_DELAYEDACKRESOLUTION    0
#define M_DELAYEDACKRESOLUTION    0xffU
#define V_DELAYEDACKRESOLUTION(x) ((x) << S_DELAYEDACKRESOLUTION)
#define G_DELAYEDACKRESOLUTION(x) (((x) >> S_DELAYEDACKRESOLUTION) & \
				   M_DELAYEDACKRESOLUTION)

#define A_TP_CCTRL_TABLE 0x7ddc

#define A_TP_MTU_TABLE 0x7de4

#define S_MTUINDEX    24
#define M_MTUINDEX    0xffU
#define V_MTUINDEX(x) ((x) << S_MTUINDEX)
#define G_MTUINDEX(x) (((x) >> S_MTUINDEX) & M_MTUINDEX)

#define S_MTUWIDTH    16
#define M_MTUWIDTH    0xfU
#define V_MTUWIDTH(x) ((x) << S_MTUWIDTH)
#define G_MTUWIDTH(x) (((x) >> S_MTUWIDTH) & M_MTUWIDTH)

#define S_MTUVALUE    0
#define M_MTUVALUE    0x3fffU
#define V_MTUVALUE(x) ((x) << S_MTUVALUE)
#define G_MTUVALUE(x) (((x) >> S_MTUVALUE) & M_MTUVALUE)

#define A_TP_PIO_ADDR 0x7e40
#define A_TP_PIO_DATA 0x7e44

#define A_TP_VLAN_PRI_MAP 0x140

#define S_FRAGMENTATION    9
#define V_FRAGMENTATION(x) ((x) << S_FRAGMENTATION)
#define F_FRAGMENTATION    V_FRAGMENTATION(1U)

#define S_MPSHITTYPE    8
#define V_MPSHITTYPE(x) ((x) << S_MPSHITTYPE)
#define F_MPSHITTYPE    V_MPSHITTYPE(1U)

#define S_MACMATCH    7
#define V_MACMATCH(x) ((x) << S_MACMATCH)
#define F_MACMATCH    V_MACMATCH(1U)

#define S_ETHERTYPE    6
#define V_ETHERTYPE(x) ((x) << S_ETHERTYPE)
#define F_ETHERTYPE    V_ETHERTYPE(1U)

#define S_PROTOCOL    5
#define V_PROTOCOL(x) ((x) << S_PROTOCOL)
#define F_PROTOCOL    V_PROTOCOL(1U)

#define S_TOS    4
#define V_TOS(x) ((x) << S_TOS)
#define F_TOS    V_TOS(1U)

#define S_VLAN    3
#define V_VLAN(x) ((x) << S_VLAN)
#define F_VLAN    V_VLAN(1U)

#define S_VNIC_ID    2
#define V_VNIC_ID(x) ((x) << S_VNIC_ID)
#define F_VNIC_ID    V_VNIC_ID(1U)

#define S_PORT    1
#define V_PORT(x) ((x) << S_PORT)
#define F_PORT    V_PORT(1U)

#define S_FCOE    0
#define V_FCOE(x) ((x) << S_FCOE)
#define F_FCOE    V_FCOE(1U)

#define A_TP_INGRESS_CONFIG 0x141

#define S_VNIC    11
#define V_VNIC(x) ((x) << S_VNIC)
#define F_VNIC    V_VNIC(1U)

#define S_CSUM_HAS_PSEUDO_HDR    10
#define V_CSUM_HAS_PSEUDO_HDR(x) ((x) << S_CSUM_HAS_PSEUDO_HDR)
#define F_CSUM_HAS_PSEUDO_HDR    V_CSUM_HAS_PSEUDO_HDR(1U)

/* registers for module MPS */
#define MPS_BASE_ADDR 0x9000

#define S_REPLICATE    11
#define V_REPLICATE(x) ((x) << S_REPLICATE)
#define F_REPLICATE    V_REPLICATE(1U)

#define S_PF    8
#define M_PF    0x7U
#define V_PF(x) ((x) << S_PF)
#define G_PF(x) (((x) >> S_PF) & M_PF)

#define S_VF_VALID    7
#define V_VF_VALID(x) ((x) << S_VF_VALID)
#define F_VF_VALID    V_VF_VALID(1U)

#define S_VF    0
#define M_VF    0x7fU
#define V_VF(x) ((x) << S_VF)
#define G_VF(x) (((x) >> S_VF) & M_VF)

#define A_MPS_PORT_STAT_TX_PORT_BYTES_L 0x400
#define A_MPS_PORT_STAT_TX_PORT_BYTES_H 0x404
#define A_MPS_PORT_STAT_TX_PORT_FRAMES_L 0x408
#define A_MPS_PORT_STAT_TX_PORT_FRAMES_H 0x40c
#define A_MPS_PORT_STAT_TX_PORT_BCAST_L 0x410
#define A_MPS_PORT_STAT_TX_PORT_BCAST_H 0x414
#define A_MPS_PORT_STAT_TX_PORT_MCAST_L 0x418
#define A_MPS_PORT_STAT_TX_PORT_MCAST_H 0x41c
#define A_MPS_PORT_STAT_TX_PORT_UCAST_L 0x420
#define A_MPS_PORT_STAT_TX_PORT_UCAST_H 0x424
#define A_MPS_PORT_STAT_TX_PORT_ERROR_L 0x428
#define A_MPS_PORT_STAT_TX_PORT_ERROR_H 0x42c
#define A_MPS_PORT_STAT_TX_PORT_64B_L 0x430
#define A_MPS_PORT_STAT_TX_PORT_64B_H 0x434
#define A_MPS_PORT_STAT_TX_PORT_65B_127B_L 0x438
#define A_MPS_PORT_STAT_TX_PORT_65B_127B_H 0x43c
#define A_MPS_PORT_STAT_TX_PORT_128B_255B_L 0x440
#define A_MPS_PORT_STAT_TX_PORT_128B_255B_H 0x444
#define A_MPS_PORT_STAT_TX_PORT_256B_511B_L 0x448
#define A_MPS_PORT_STAT_TX_PORT_256B_511B_H 0x44c
#define A_MPS_PORT_STAT_TX_PORT_512B_1023B_L 0x450
#define A_MPS_PORT_STAT_TX_PORT_512B_1023B_H 0x454
#define A_MPS_PORT_STAT_TX_PORT_1024B_1518B_L 0x458
#define A_MPS_PORT_STAT_TX_PORT_1024B_1518B_H 0x45c
#define A_MPS_PORT_STAT_TX_PORT_1519B_MAX_L 0x460
#define A_MPS_PORT_STAT_TX_PORT_1519B_MAX_H 0x464
#define A_MPS_PORT_STAT_TX_PORT_DROP_L 0x468
#define A_MPS_PORT_STAT_TX_PORT_DROP_H 0x46c
#define A_MPS_PORT_STAT_TX_PORT_PAUSE_L 0x470
#define A_MPS_PORT_STAT_TX_PORT_PAUSE_H 0x474
#define A_MPS_PORT_STAT_TX_PORT_PPP0_L 0x478
#define A_MPS_PORT_STAT_TX_PORT_PPP0_H 0x47c
#define A_MPS_PORT_STAT_TX_PORT_PPP1_L 0x480
#define A_MPS_PORT_STAT_TX_PORT_PPP1_H 0x484
#define A_MPS_PORT_STAT_TX_PORT_PPP2_L 0x488
#define A_MPS_PORT_STAT_TX_PORT_PPP2_H 0x48c
#define A_MPS_PORT_STAT_TX_PORT_PPP3_L 0x490
#define A_MPS_PORT_STAT_TX_PORT_PPP3_H 0x494
#define A_MPS_PORT_STAT_TX_PORT_PPP4_L 0x498
#define A_MPS_PORT_STAT_TX_PORT_PPP4_H 0x49c
#define A_MPS_PORT_STAT_TX_PORT_PPP5_L 0x4a0
#define A_MPS_PORT_STAT_TX_PORT_PPP5_H 0x4a4
#define A_MPS_PORT_STAT_TX_PORT_PPP6_L 0x4a8
#define A_MPS_PORT_STAT_TX_PORT_PPP6_H 0x4ac
#define A_MPS_PORT_STAT_TX_PORT_PPP7_L 0x4b0
#define A_MPS_PORT_STAT_TX_PORT_PPP7_H 0x4b4
#define A_MPS_PORT_STAT_LB_PORT_BYTES_L 0x4c0
#define A_MPS_PORT_STAT_LB_PORT_BYTES_H 0x4c4
#define A_MPS_PORT_STAT_LB_PORT_FRAMES_L 0x4c8
#define A_MPS_PORT_STAT_LB_PORT_FRAMES_H 0x4cc
#define A_MPS_PORT_STAT_LB_PORT_BCAST_L 0x4d0
#define A_MPS_PORT_STAT_LB_PORT_BCAST_H 0x4d4
#define A_MPS_PORT_STAT_LB_PORT_MCAST_L 0x4d8
#define A_MPS_PORT_STAT_LB_PORT_MCAST_H 0x4dc
#define A_MPS_PORT_STAT_LB_PORT_UCAST_L 0x4e0
#define A_MPS_PORT_STAT_LB_PORT_UCAST_H 0x4e4
#define A_MPS_PORT_STAT_LB_PORT_ERROR_L 0x4e8
#define A_MPS_PORT_STAT_LB_PORT_ERROR_H 0x4ec
#define A_MPS_PORT_STAT_LB_PORT_64B_L 0x4f0
#define A_MPS_PORT_STAT_LB_PORT_64B_H 0x4f4
#define A_MPS_PORT_STAT_LB_PORT_65B_127B_L 0x4f8
#define A_MPS_PORT_STAT_LB_PORT_65B_127B_H 0x4fc
#define A_MPS_PORT_STAT_LB_PORT_128B_255B_L 0x500
#define A_MPS_PORT_STAT_LB_PORT_128B_255B_H 0x504
#define A_MPS_PORT_STAT_LB_PORT_256B_511B_L 0x508
#define A_MPS_PORT_STAT_LB_PORT_256B_511B_H 0x50c
#define A_MPS_PORT_STAT_LB_PORT_512B_1023B_L 0x510
#define A_MPS_PORT_STAT_LB_PORT_512B_1023B_H 0x514
#define A_MPS_PORT_STAT_LB_PORT_1024B_1518B_L 0x518
#define A_MPS_PORT_STAT_LB_PORT_1024B_1518B_H 0x51c
#define A_MPS_PORT_STAT_LB_PORT_1519B_MAX_L 0x520
#define A_MPS_PORT_STAT_LB_PORT_1519B_MAX_H 0x524
#define A_MPS_PORT_STAT_LB_PORT_DROP_FRAMES 0x528
#define A_MPS_PORT_STAT_LB_PORT_DROP_FRAMES_L 0x528
#define A_MPS_PORT_STAT_LB_PORT_DROP_FRAMES_H 0x52c
#define A_MPS_PORT_STAT_RX_PORT_BYTES_L 0x540
#define A_MPS_PORT_STAT_RX_PORT_BYTES_H 0x544
#define A_MPS_PORT_STAT_RX_PORT_FRAMES_L 0x548
#define A_MPS_PORT_STAT_RX_PORT_FRAMES_H 0x54c
#define A_MPS_PORT_STAT_RX_PORT_BCAST_L 0x550
#define A_MPS_PORT_STAT_RX_PORT_BCAST_H 0x554
#define A_MPS_PORT_STAT_RX_PORT_MCAST_L 0x558
#define A_MPS_PORT_STAT_RX_PORT_MCAST_H 0x55c
#define A_MPS_PORT_STAT_RX_PORT_UCAST_L 0x560
#define A_MPS_PORT_STAT_RX_PORT_UCAST_H 0x564
#define A_MPS_PORT_STAT_RX_PORT_MTU_ERROR_L 0x568
#define A_MPS_PORT_STAT_RX_PORT_MTU_ERROR_H 0x56c
#define A_MPS_PORT_STAT_RX_PORT_MTU_CRC_ERROR_L 0x570
#define A_MPS_PORT_STAT_RX_PORT_MTU_CRC_ERROR_H 0x574
#define A_MPS_PORT_STAT_RX_PORT_CRC_ERROR_L 0x578
#define A_MPS_PORT_STAT_RX_PORT_CRC_ERROR_H 0x57c
#define A_MPS_PORT_STAT_RX_PORT_LEN_ERROR_L 0x580
#define A_MPS_PORT_STAT_RX_PORT_LEN_ERROR_H 0x584
#define A_MPS_PORT_STAT_RX_PORT_SYM_ERROR_L 0x588
#define A_MPS_PORT_STAT_RX_PORT_SYM_ERROR_H 0x58c
#define A_MPS_PORT_STAT_RX_PORT_64B_L 0x590
#define A_MPS_PORT_STAT_RX_PORT_64B_H 0x594
#define A_MPS_PORT_STAT_RX_PORT_65B_127B_L 0x598
#define A_MPS_PORT_STAT_RX_PORT_65B_127B_H 0x59c
#define A_MPS_PORT_STAT_RX_PORT_128B_255B_L 0x5a0
#define A_MPS_PORT_STAT_RX_PORT_128B_255B_H 0x5a4
#define A_MPS_PORT_STAT_RX_PORT_256B_511B_L 0x5a8
#define A_MPS_PORT_STAT_RX_PORT_256B_511B_H 0x5ac
#define A_MPS_PORT_STAT_RX_PORT_512B_1023B_L 0x5b0
#define A_MPS_PORT_STAT_RX_PORT_512B_1023B_H 0x5b4
#define A_MPS_PORT_STAT_RX_PORT_1024B_1518B_L 0x5b8
#define A_MPS_PORT_STAT_RX_PORT_1024B_1518B_H 0x5bc
#define A_MPS_PORT_STAT_RX_PORT_1519B_MAX_L 0x5c0
#define A_MPS_PORT_STAT_RX_PORT_1519B_MAX_H 0x5c4
#define A_MPS_PORT_STAT_RX_PORT_PAUSE_L 0x5c8
#define A_MPS_PORT_STAT_RX_PORT_PAUSE_H 0x5cc
#define A_MPS_PORT_STAT_RX_PORT_PPP0_L 0x5d0
#define A_MPS_PORT_STAT_RX_PORT_PPP0_H 0x5d4
#define A_MPS_PORT_STAT_RX_PORT_PPP1_L 0x5d8
#define A_MPS_PORT_STAT_RX_PORT_PPP1_H 0x5dc
#define A_MPS_PORT_STAT_RX_PORT_PPP2_L 0x5e0
#define A_MPS_PORT_STAT_RX_PORT_PPP2_H 0x5e4
#define A_MPS_PORT_STAT_RX_PORT_PPP3_L 0x5e8
#define A_MPS_PORT_STAT_RX_PORT_PPP3_H 0x5ec
#define A_MPS_PORT_STAT_RX_PORT_PPP4_L 0x5f0
#define A_MPS_PORT_STAT_RX_PORT_PPP4_H 0x5f4
#define A_MPS_PORT_STAT_RX_PORT_PPP5_L 0x5f8
#define A_MPS_PORT_STAT_RX_PORT_PPP5_H 0x5fc
#define A_MPS_PORT_STAT_RX_PORT_PPP6_L 0x600
#define A_MPS_PORT_STAT_RX_PORT_PPP6_H 0x604
#define A_MPS_PORT_STAT_RX_PORT_PPP7_L 0x608
#define A_MPS_PORT_STAT_RX_PORT_PPP7_H 0x60c
#define A_MPS_PORT_STAT_RX_PORT_LESS_64B_L 0x610
#define A_MPS_PORT_STAT_RX_PORT_LESS_64B_H 0x614
#define A_MPS_CMN_CTL 0x9000

#define S_NUMPORTS    0
#define M_NUMPORTS    0x3U
#define V_NUMPORTS(x) ((x) << S_NUMPORTS)
#define G_NUMPORTS(x) (((x) >> S_NUMPORTS) & M_NUMPORTS)

#define A_MPS_STAT_RX_BG_0_MAC_DROP_FRAME_L 0x9640
#define A_MPS_STAT_RX_BG_0_MAC_DROP_FRAME_H 0x9644
#define A_MPS_STAT_RX_BG_1_MAC_DROP_FRAME_L 0x9648
#define A_MPS_STAT_RX_BG_1_MAC_DROP_FRAME_H 0x964c
#define A_MPS_STAT_RX_BG_2_MAC_DROP_FRAME_L 0x9650
#define A_MPS_STAT_RX_BG_2_MAC_DROP_FRAME_H 0x9654
#define A_MPS_STAT_RX_BG_3_MAC_DROP_FRAME_L 0x9658
#define A_MPS_STAT_RX_BG_3_MAC_DROP_FRAME_H 0x965c
#define A_MPS_STAT_RX_BG_0_LB_DROP_FRAME_L 0x9660
#define A_MPS_STAT_RX_BG_0_LB_DROP_FRAME_H 0x9664
#define A_MPS_STAT_RX_BG_1_LB_DROP_FRAME_L 0x9668
#define A_MPS_STAT_RX_BG_1_LB_DROP_FRAME_H 0x966c
#define A_MPS_STAT_RX_BG_2_LB_DROP_FRAME_L 0x9670
#define A_MPS_STAT_RX_BG_2_LB_DROP_FRAME_H 0x9674
#define A_MPS_STAT_RX_BG_3_LB_DROP_FRAME_L 0x9678
#define A_MPS_STAT_RX_BG_3_LB_DROP_FRAME_H 0x967c
#define A_MPS_STAT_RX_BG_0_MAC_TRUNC_FRAME_L 0x9680
#define A_MPS_STAT_RX_BG_0_MAC_TRUNC_FRAME_H 0x9684
#define A_MPS_STAT_RX_BG_1_MAC_TRUNC_FRAME_L 0x9688
#define A_MPS_STAT_RX_BG_1_MAC_TRUNC_FRAME_H 0x968c
#define A_MPS_STAT_RX_BG_2_MAC_TRUNC_FRAME_L 0x9690
#define A_MPS_STAT_RX_BG_2_MAC_TRUNC_FRAME_H 0x9694
#define A_MPS_STAT_RX_BG_3_MAC_TRUNC_FRAME_L 0x9698
#define A_MPS_STAT_RX_BG_3_MAC_TRUNC_FRAME_H 0x969c
#define A_MPS_STAT_RX_BG_0_LB_TRUNC_FRAME_L 0x96a0
#define A_MPS_STAT_RX_BG_0_LB_TRUNC_FRAME_H 0x96a4
#define A_MPS_STAT_RX_BG_1_LB_TRUNC_FRAME_L 0x96a8
#define A_MPS_STAT_RX_BG_1_LB_TRUNC_FRAME_H 0x96ac
#define A_MPS_STAT_RX_BG_2_LB_TRUNC_FRAME_L 0x96b0
#define A_MPS_STAT_RX_BG_2_LB_TRUNC_FRAME_H 0x96b4
#define A_MPS_STAT_RX_BG_3_LB_TRUNC_FRAME_L 0x96b8
#define A_MPS_STAT_RX_BG_3_LB_TRUNC_FRAME_H 0x96bc

/* registers for module ULP_RX */
#define ULP_RX_BASE_ADDR 0x19150

#define S_HPZ0    0
#define M_HPZ0    0xfU
#define V_HPZ0(x) ((x) << S_HPZ0)
#define G_HPZ0(x) (((x) >> S_HPZ0) & M_HPZ0)

#define A_ULP_RX_TDDP_PSZ 0x19178

/* registers for module SF */
#define SF_BASE_ADDR 0x193f8

#define A_SF_DATA 0x193f8
#define A_SF_OP 0x193fc

#define S_SF_LOCK    4
#define V_SF_LOCK(x) ((x) << S_SF_LOCK)
#define F_SF_LOCK    V_SF_LOCK(1U)

#define S_CONT    3
#define V_CONT(x) ((x) << S_CONT)
#define F_CONT    V_CONT(1U)

#define S_BYTECNT    1
#define M_BYTECNT    0x3U
#define V_BYTECNT(x) ((x) << S_BYTECNT)
#define G_BYTECNT(x) (((x) >> S_BYTECNT) & M_BYTECNT)

#define S_OP    0
#define V_OP(x) ((x) << S_OP)
#define F_OP    V_OP(1U)

/* registers for module PL */
#define PL_BASE_ADDR 0x19400

#define S_SOURCEPF    8
#define M_SOURCEPF    0x7U
#define V_SOURCEPF(x) ((x) << S_SOURCEPF)
#define G_SOURCEPF(x) (((x) >> S_SOURCEPF) & M_SOURCEPF)

#define A_PL_PF_INT_ENABLE 0x3c4

#define S_PFSW    3
#define V_PFSW(x) ((x) << S_PFSW)
#define F_PFSW    V_PFSW(1U)

#define S_PFCIM    1
#define V_PFCIM(x) ((x) << S_PFCIM)
#define F_PFCIM    V_PFCIM(1U)

#define A_PL_WHOAMI 0x19400

#define A_PL_RST 0x19428

#define A_PL_INT_MAP0 0x19414

#define S_PIORST    1
#define V_PIORST(x) ((x) << S_PIORST)
#define F_PIORST    V_PIORST(1U)

#define S_PIORSTMODE    0
#define V_PIORSTMODE(x) ((x) << S_PIORSTMODE)
#define F_PIORSTMODE    V_PIORSTMODE(1U)

#define A_PL_REV 0x1943c

#define S_REV    0
#define M_REV    0xfU
#define V_REV(x) ((x) << S_REV)
#define G_REV(x) (((x) >> S_REV) & M_REV)
