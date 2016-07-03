/******************************************************************************/
/*  Copyright (C), 2007-2013, Hisilicon Technologies Co., Ltd. */
/******************************************************************************/
/* File name     : hi_IPF.h */
/* Version       : 2.0 */
/* Created       : 2013-01-31*/
/* Last Modified : */
/* Description   :  The C union definition file for the module IPF*/
/* Function List : */
/* History       : */
/* 1 Date        : */
/* Modification  : Create file */
/******************************************************************************/

#ifndef __HI_IPF_H__
#define __HI_IPF_H__

/*
 * Project: hi
 * Module : IPF
 */



/********************************************************************************/
/*    IPF �Ĵ���ƫ�ƶ��壨��Ŀ��_ģ����_�Ĵ�����_OFFSET)        */
/********************************************************************************/
#define    HI_IPF_SRST_OFFSET                                (0x0) /* IPF��λ���ƼĴ��� */
#define    HI_IPF_SRST_STATE_OFFSET                          (0x4) /* IPF��λ״̬�Ĵ��� */
#define    HI_IPF_CH_EN_OFFSET                               (0x8) /* IPF ͨ��ʹ�����üĴ��� */
#define    HI_IPF_EN_STATE_OFFSET                            (0xC) /* IPF ͨ��ʹ��״̬�Ĵ��� */
#define    HI_IPF_GATE_OFFSET                                (0x10) /* IPFʱ���ſ����üĴ��� */
#define    HI_IPF_CTRL_OFFSET                                (0x14) /* IPFȫ�ֿ������üĴ��� */
#define    HI_IPF_DMA_CTRL0_OFFSET                           (0x18) /* IPF DMA���ƼĴ���0 */
#define    HI_IPF_DMA_CTRL1_OFFSET                           (0x1C) /* IPF DMA���ƼĴ���1 */
#define    HI_IPF_VERSION_OFFSET		             		 (0x20) /* IPF �汾�Ĵ���  */
#define    HI_IPF_INT0_OFFSET                                (0x30) /* �ж��ϱ��Ĵ���0 */
#define    HI_IPF_INT1_OFFSET                                (0x34) /* �ж��ϱ��Ĵ���1 */
#define    HI_IPF_INT_MASK0_OFFSET                           (0x38) /* �ж����μĴ���0 */
#define    HI_IPF_INT_MASK1_OFFSET                           (0x3C) /* �ж����μĴ���1 */
#define    HI_IPF_INT_STATE_OFFSET                           (0x40) /* �ж�״̬�Ĵ��� */
#define    HI_IPF_TIME_OUT_OFFSET                            (0x44) /* ��ʱ���üĴ��� */
#define    HI_IPF_PKT_LEN_OFFSET                             (0x48) /* �������üĴ��� */
#define    HI_IPF_FILTER_ZERO_INDEX_OFFSET                   (0x70) /* IPF��������ʼ�������üĴ��� */
#define    HI_IPF_EF_BADDR_OFFSET                            (0x74) /* ��չ����������ַ���üĴ��� */
#define    HI_BFLT_INDEX_OFFSET                              (0x78) /* �������˱��������� */
#define    HI_FLT_CHAIN_LOOP_OFFSET                          (0x7C) /* �������������澯 */
#define    HI_FLT_LOCAL_ADDR0_OFFSET                         (0x90) /* ������local address���üĴ��� */
#define    HI_FLT_LOCAL_ADDR1_OFFSET                         (0x94) /* ������local address���üĴ��� */
#define    HI_FLT_LOCAL_ADDR2_OFFSET                         (0x98) /* ������local address���üĴ��� */
#define    HI_FLT_LOCAL_ADDR3_OFFSET                         (0x9C) /* ������local address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR0_OFFSET                        (0xA0) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR1_OFFSET                        (0xA4) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR2_OFFSET                        (0xA8) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR3_OFFSET                        (0xAC) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR0_MASK_OFFSET                   (0xB0) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR1_MASK_OFFSET                   (0xB4) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR2_MASK_OFFSET                   (0xB8) /* ������remote address���üĴ��� */
#define    HI_FLT_REMOTE_ADDR3_MASK_OFFSET                   (0xBC) /* ������remote address���üĴ��� */
#define    HI_FLT_LOCAL_PORT_OFFSET                          (0xC0) /* ���˱�LOCAL PORT�������üĴ��� */
#define    HI_FLT_REMOTE_PORT_OFFSET                         (0xC4) /* ���˱�REMOTE PORT�������üĴ��� */
#define    HI_FLT_TRAFFIC_CLASS_OFFSET                       (0xC8) /* ���˱�ҵ��ȼ������üĴ��� */
#define    HI_FLT_LADD_MASK_OFFSET                           (0xCC) /* ������local address mask�����üĴ��� */
#define    HI_FLT_NEXT_HEADER_OFFSET                         (0xD0) /* ������Э�����������üĴ��� */
#define    HI_FLT_FLOW_LABEL_OFFSET                          (0xD4) /* ����������ǩ�����üĴ��� */
#define    HI_FLT_ICMP_OFFSET                                (0xD8) /* ������ICMP���üĴ��� */
#define    HI_FLT_CHAIN_OFFSET                               (0xDC) /* ���������������üĴ��� */
#define    HI_FLT_SPI_OFFSET                                 (0xE0) /* ������SPI���üĴ��� */
#define    HI_FLT_RULE_CTRL_OFFSET                           (0xE4) /* ����������������üĴ��� */
#define    HI_IPF_CH0_CTRL_OFFSET                            (0x100) /* ����ͨ�����ƼĴ��� */
#define    HI_IPF_CH0_STATE_OFFSET                           (0x104) /* ����ͨ��״̬�Ĵ��� */
#define    HI_IPF_CH0_BDQ_BADDR_OFFSET                       (0x108) /* ����ͨ��BDQ��ʼ��ַ */
#define    HI_IPF_CH0_BDQ_SIZE_OFFSET                        (0x10C) /* ����ͨ��BDQ��� */
#define    HI_IPF_CH0_BDQ_WPTR_OFFSET                        (0x110) /* ����ͨ��BDQдָ�� */
#define    HI_IPF_CH0_BDQ_RPTR_OFFSET                        (0x114) /* ����ͨ��BDQ��ָ�� */
#define    HI_IPF_CH0_BDQ_WADDR_OFFSET                       (0x118) /* ����ͨ��BDQд��ַ */
#define    HI_IPF_CH0_BDQ_RADDR_OFFSET                       (0x11C) /* ����ͨ��BDQ����ַ */
#define    HI_IPF_CH0_RDQ_BADDR_OFFSET                       (0x120) /* ����ͨ��RDQ��ʼ��ַ */
#define    HI_IPF_CH0_RDQ_SIZE_OFFSET                        (0x124) /* ����ͨ��RDQ��� */
#define    HI_IPF_CH0_RDQ_WPTR_OFFSET                        (0x128) /* ����ͨ��RDQдָ�� */
#define    HI_IPF_CH0_RDQ_RPTR_OFFSET                        (0x12C) /* ����ͨ��RDQ��ָ�� */
#define    HI_IPF_CH0_RDQ_WADDR_OFFSET                       (0x130) /* ����ͨ��RDQд��ַ */
#define    HI_IPF_CH0_RDQ_RADDR_OFFSET                       (0x134) /* ����ͨ��RDQ����ַ */
#define    HI_IPF_CH0_DQ_DEPTH_OFFSET                        (0x138) /* ����ͨ���������ָʾ�Ĵ��� */
#define    HI_IPF_CH1_CTRL_OFFSET                            (0x150) /* ����ͨ�����ƼĴ��� */
#define    HI_IPF_CH1_STATE_OFFSET                           (0x154) /* ����ͨ��״̬�Ĵ��� */
#define    HI_IPF_CH1_BDQ_BADDR_OFFSET                       (0x158) /* ����ͨ��BDQ��ʼ��ַ */
#define    HI_IPF_CH1_BDQ_SIZE_OFFSET                        (0x15C) /* ����ͨ��BDQ��� */
#define    HI_IPF_CH1_BDQ_WPTR_OFFSET                        (0x160) /* ����ͨ��BDQдָ�� */
#define    HI_IPF_CH1_BDQ_RPTR_OFFSET                        (0x164) /* ����ͨ��BDQ��ָ�� */
#define    HI_IPF_CH1_BDQ_WADDR_OFFSET                       (0x168) /* ����ͨ��BDQд��ַ */
#define    HI_IPF_CH1_BDQ_RADDR_OFFSET                       (0x16C) /* ����ͨ��BDQ����ַ */
#define    HI_IPF_CH1_RDQ_BADDR_OFFSET                       (0x170) /* ����ͨ��RDQ��ʼ��ַ */
#define    HI_IPF_CH1_RDQ_SIZE_OFFSET                        (0x174) /* ����ͨ��RDQ��� */
#define    HI_IPF_CH1_RDQ_WPTR_OFFSET                        (0x178) /* ����ͨ��RDQдָ�� */
#define    HI_IPF_CH1_RDQ_RPTR_OFFSET                        (0x17C) /* ����ͨ��RDQ��ָ�� */
#define    HI_IPF_CH1_RDQ_WADDR_OFFSET                       (0x180) /* ����ͨ��RDQд��ַ */
#define    HI_IPF_CH1_RDQ_RADDR_OFFSET                       (0x184) /* ����ͨ��RDQ����ַ */
#define    HI_IPF_CH1_DQ_DEPTH_OFFSET                        (0x188) /* ����ͨ���������ָʾ�Ĵ��� */
#define    HI_IPF_CH0_ADQ_CTRL_OFFSET                        (0x204) /* ����ͨ��ADQ���ƼĴ��� */
#define    HI_IPF_CH0_ADQ0_BASE_OFFSET                       (0x210) /* ����ͨ��ADQ0��ַ�Ĵ��� */
#define    HI_IPF_CH0_ADQ0_STAT_OFFSET                       (0x214) /* ����ͨ��ADQ0״̬�Ĵ��� */
#define    HI_IPF_CH0_ADQ0_WPTR_OFFSET                       (0x218) /* ����ͨ��ADQ0дָ��Ĵ��� */
#define    HI_IPF_CH0_ADQ0_RPTR_OFFSET                       (0x21C) /* ����ͨ��ADQ0��ָ��Ĵ��� */
#define    HI_IPF_CH0_ADQ1_BASE_OFFSET                       (0x220) /* ����ͨ��ADQ1��ַ�Ĵ��� */
#define    HI_IPF_CH0_ADQ1_STAT_OFFSET                       (0x224) /* ����ͨ��ADQ1״̬�Ĵ��� */
#define    HI_IPF_CH0_ADQ1_WPTR_OFFSET                       (0x228) /* ����ͨ��ADQ1дָ��Ĵ��� */
#define    HI_IPF_CH0_ADQ1_RPTR_OFFSET                       (0x22C) /* ����ͨ��ADQ1��ָ��Ĵ��� */
#define    HI_IPF_CH1_ADQ_CTRL_OFFSET                        (0x284) /* ����ͨ��ADQ���ƼĴ��� */
#define    HI_IPF_CH1_ADQ0_BASE_OFFSET                       (0x290) /* ����ͨ��ADQ0��ַ�Ĵ��� */
#define    HI_IPF_CH1_ADQ0_STAT_OFFSET                       (0x294) /* ����ͨ��ADQ0״̬�Ĵ��� */
#define    HI_IPF_CH1_ADQ0_WPTR_OFFSET                       (0x298) /* ����ͨ��ADQ0дָ��Ĵ��� */
#define    HI_IPF_CH1_ADQ0_RPTR_OFFSET                       (0x29C) /* ����ͨ��ADQ0��ָ��Ĵ��� */
#define    HI_IPF_CH1_ADQ1_BASE_OFFSET                       (0x2A0) /* ����ͨ��ADQ1��ַ�Ĵ��� */
#define    HI_IPF_CH1_ADQ1_STAT_OFFSET                       (0x2A4) /* ����ͨ��ADQ1״̬�Ĵ��� */
#define    HI_IPF_CH1_ADQ1_WPTR_OFFSET                       (0x2A8) /* ����ͨ��ADQ1дָ��Ĵ��� */
#define    HI_IPF_CH1_ADQ1_RPTR_OFFSET                       (0x2AC) /* ����ͨ��ADQ1��ָ��Ĵ��� */
#define    HI_IPF_CH0_WDATA_FAMA_ATTR_OFFSET				 (0x2B0) /* ����ͨ��д����FAMA���ԼĴ���*/
#define    HI_IPF_CH0_RDATA_FAMA_ATTR_OFFSET				 (0x2B4) /* ����ͨ��������FAMA���ԼĴ���*/
#define    HI_IPF_CH0_RD_FAMA_ATTR_OFFSET				 	 (0x2B8) /* ����ͨ��RD������FAMA���ԼĴ���*/
#define    HI_IPF_CH0_BD_FAMA_ATTR_OFFSET				 	 (0x2BC) /* ����ͨ��BD������FAMA���ԼĴ���*/
#define    HI_IPF_CH0_AD_FAMA_ATTR_OFFSET				 	 (0x2C0) /* ����ͨ��AD������FAMA���ԼĴ���*/
#define    HI_IPF_CH0_CD_FAMA_ATTR_OFFSET				 	 (0x2C4) /* ����ͨ��CD������FAMA���ԼĴ���*/
#define    HI_IPF_CH1_WDATA_FAMA_ATTR_OFFSET				 (0x2C8) /* ����ͨ��д����FAMA���ԼĴ���*/
#define    HI_IPF_CH1_RDATA_FAMA_ATTR_OFFSET				 (0x2CC) /* ����ͨ��������FAMA���ԼĴ���*/
#define    HI_IPF_CH1_RD_FAMA_ATTR_OFFSET				 	 (0x2D0) /* ����ͨ��RD������FAMA���ԼĴ���*/
#define    HI_IPF_CH1_BD_FAMA_ATTR_OFFSET				 	 (0x2D4) /* ����ͨ��BD������FAMA���ԼĴ���*/
#define    HI_IPF_CH1_AD_FAMA_ATTR_OFFSET				 	 (0x2D8) /* ����ͨ��AD������FAMA���ԼĴ���*/
#define    HI_IPF_CH1_CD_FAMA_ATTR_OFFSET				 	 (0x2DC) /* ����ͨ��CD������FAMA���ԼĴ���*/
#define    HI_IPF_EF_FAMA_ATTR_OFFSET				 	 	 (0x2E0) /* �ⲿ������FAMA���ԼĴ���*/
#define    HI_IPF_CH1_DIRECT_RDATA_FAMA_ATTR_OFFSET			 (0x2E4) /* ����ֱͨͨ��������FAMA���ԼĴ���*/
#define    HI_IPF_MST_REGION0_START_OFFSET                   (0x300) /* MST�˿����޵���ʼ��ַ�Ĵ���0 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION0_END_OFFSET                   	 (0x304) /* MST�˿����޵Ľ�����ַ�Ĵ���0 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION1_START_OFFSET                   (0x308) /* MST�˿����޵���ʼ��ַ�Ĵ���1 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION1_END_OFFSET                   	 (0x30c) /* MST�˿����޵Ľ�����ַ�Ĵ���1 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION2_START_OFFSET                   (0x310) /* MST�˿����޵���ʼ��ַ�Ĵ���2 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION2_END_OFFSET                   	 (0x314) /* MST�˿����޵Ľ�����ַ�Ĵ���2 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION3_START_OFFSET                   (0x318) /* MST�˿����޵���ʼ��ַ�Ĵ���3 (����Ϊ��ȫ) */
#define    HI_IPF_MST_REGION3_END_OFFSET                   	 (0x31c) /* MST�˿����޵Ľ�����ַ�Ĵ���3 (����Ϊ��ȫ) */
#define    HI_IPF_MST_DEFAULT_OFFSET                   		 (0x320) /* MST�˿ڵ�ַ���޺󣬷�����Ĭ�Ϸ��ʵ�ַ*/
#define    HI_IPF_MST_SECCTRL_OFFSET                   	 	 (0x324) /* ��ַ���ܿ��ؼĴ��� (����Ϊ��ȫ)*/
#define    HI_IPF_REG_END_OFFSET                   	 	 	 (HI_IPF_MST_SECCTRL_OFFSET + 4) /* ������ַ�������µļĴ��������ֵ��Ҫ�޸�*/

#ifndef __ASSEMBLY__
/********************************************************************************/
/*    IPF �Ĵ������壨��Ŀ��_ģ����_�Ĵ�����_T)        */
/********************************************************************************/
typedef union
{
    struct
    {
        unsigned int    ipf_srst                   : 1; /* [0..0] ȫ������λ�Ĵ�����0������λ��1����λ���ߵ�ƽ��Ч��ֻ��λ�߼�����λ���üĴ���.��λ���ܲ���������Ч���ɸ�λ״̬�Ĵ���ָʾ��λ�Ƿ�ɹ�����λ�ɹ���д0�������λ�� */
        unsigned int    reserved                   : 31; /* [31..1] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_SRST_T;    /* IPF��λ���ƼĴ��� */

typedef union
{
    struct
    {
        unsigned int    ipf_srst_state             : 1; /* [0..0] ��λ״ָ̬ʾ�Ĵ�����0��δ���ڸ�λ״̬��1�����ڸ�λ״̬����ʾ��λ�ɹ������߼����ڸ�λ״̬�����ɽ����λ�� */
        unsigned int    reserved                   : 31; /* [31..1] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_SRST_STATE_T;    /* IPF��λ״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_en                      : 1; /* [0..0] ULͨ��ʹ�����üĴ���.0:ͨ���ر�1:ͨ��ʹ��д1ʹ��ͨ����������Ч.д0�ر�ͨ��,����ʱͨ��busy�����������رգ�ֱ��ͨ��idle����ܹر�. */
        unsigned int    dl_en                      : 1; /* [1..1] DLͨ��ʹ�����üĴ���.0:ͨ���ر�1:ͨ��ʹ��д1ʹ��ͨ����������Ч.д0�ر�ͨ��,����ʱͨ��busy�����������رգ�ֱ��ͨ��idle����ܹر�. */
        unsigned int    reserved                   : 30; /* [31..2] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH_EN_T;    /* IPF ͨ��ʹ�����üĴ��� */

typedef union
{
    struct
    {
        unsigned int    ul_en_state                : 1; /* [0..0] ULͨ��ʹ��״̬�Ĵ���.0:ͨ���ѹر�1:ͨ���� */
        unsigned int    dl_en_state                : 1; /* [1..1] DLͨ��ʹ��״̬�Ĵ���.0:ͨ���ѹر�1:ͨ���� */
        unsigned int    reserved                   : 30; /* [31..2] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_EN_STATE_T;    /* IPF ͨ��ʹ��״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ipf_sysclk_sel0            : 1; /* [0..0] ipfģ��ϵͳʱ���ſ�ʹ�ܡ�0:ʱ�ӳ���1:�Զ��ſ�  */
        unsigned int    ipf_sysclk_sel1            : 1; /* [1..1] ipfģ��ϵͳʱ���ſ�ʹ�ܡ�0:ʱ�ӳ���1:�Զ��ſ�  */
        unsigned int    ipf_busclk_sel             : 1; /* [2..2] ipfģ������ʱ���ſ�ʹ�ܡ�0:ʱ�ӳ���1:�Զ��ſ� */
        unsigned int    reserved_1                 : 5; /* [7..3] ������ */
        unsigned int    ipf_ram0clk_sel            : 1; /* [8..8] ipfģ�鵥��RAMʱ���ſ�ʹ�ܡ�0:ʱ�ӳ���1:�Զ��ſ� */
        unsigned int    ipf_ram1clk_sel            : 1; /* [9..9] ipfģ��˫��RAMʱ���ſ�ʹ�ܡ�0:ʱ�ӳ���1:�Զ��ſ� */
        unsigned int    reserved_0                 : 22; /* [31..10] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_GATE_T;    /* IPFʱ���ſ����üĴ��� */

typedef union
{
    struct
    {
        unsigned int    filter_seq                 : 1; /* [0..0] ����������˳��ָʾ�Ĵ���.0:����������˳������1:������������������ */
        unsigned int    flt_addr_reverse           : 1; /* [1..1] 0����ʾ�������еĵ�ַ�Ĵ������������1����ʾ�������еĵ�ַ�Ĵ�����С������ */
        unsigned int    sp_cfg                     : 1; /* [2..2] 0:SPģʽ��DL���ȼ���1;SPģʽ��UL���ȼ��� */
        unsigned int    sp_wrr_sel                 : 1; /* [3..3] 0:WRRģʽ����1;SPģʽ���� */
        unsigned int    max_burst_len              : 2; /* [5..4] BURST��󳤶����üĴ���2'b00:BURST162'b01:BURST82'b10,2'b11:BURST4 */
        unsigned int    ipv6_nh_sel                : 1; /* [6..6] IPV6 ����ƥ��NextNeaderѡ������ź�0:�������ϲ㱨�Ķ�Ӧ��NextHeader��ʶ���NextHeader(ע��AH��ESP����ʱNextHeader��Ӧ��ʱѡ��֮���NextHeader)1:����ͷ�е�NextNeader */
        unsigned int    ah_esp_sel                 : 1; /* [7..7] ���AH��ESPͬʱ�����Ҿ�����Ϊ����ƥ��,SPIѡ������ź�0:ѡ��ESP��Ӧ��SPI����ƥ��1:ѡ��AH��Ӧ��SPI����ƥ�� */
        unsigned int    ah_disable                 : 1; /* [8..8] AH SPI�Ƿ����ƥ������ź�0:����ƥ��1:������ƥ�� */
        unsigned int    esp_disable                : 1; /* [9..9] ESP SPI�Ƿ����ƥ������ź�0:����ƥ��1:������ƥ�� */
        unsigned int    mfc_en                     : 1; /* [10..10] ��ͨ�����������ʹ��0��ÿ��ͨ��ֻ��֧��һ����������������ͷ������̬���ã�1��ÿ��ͨ�����֧��8����������������ͷ������BD��̬���ã� */
        unsigned int    mm_en                      : 1; /* [11..11] ��ͨ����̬ģʽʹ��0��ÿ��ͨ��ģʽ��ͨ�����ƼĴ�����̬���ã�1��ÿ��ͨ��ģʽ��BD��mode��־��̬���ã� */
        unsigned int    add_rep                    : 1; /* [12..12] ����ͨ��AD�ϱ�ѡ��0����ʾRD�ϱ�Ŀ�ĵ�ַʹ��AD�ĵڶ����֣�1����ʾRD�ϱ�Ŀ�ĵ�ַʹ��AD�ĵ�һ���֣� */
		unsigned int    schedule_strategy          : 1; /* [13..13] ������ͨ�����Ȳ���ѡ��0����ʾ������ͨ������BDQ�Ƿ�Ϊ�ս��е��ȣ�1����ʾ������ͨ������ADQ��BDQ�Ƿ�Ϊ�գ�RDQ�Ƿ�Ϊ�����е��ȡ� */
        unsigned int    cd_from_bd_en              : 1; /* [14..14] ������ͨ��CDʹ����Դѡ��0����ʾCDʹ�ܿ���λ���ԼĴ�����1����ʾCDʹ�ܿ���λ����BD�� */
        unsigned int    reserved                   : 17; /* [31..15] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CTRL_T;    /* IPFȫ�ֿ������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    ipf_wr_ch0_id              : 4; /* [3..0] AXIдͨ��0 ID */
        unsigned int    ipf_wr_ch1_id              : 4; /* [7..4] AXIдͨ��1 ID */
        unsigned int    ipf_rd_ch0_id              : 4; /* [11..8] AXI��ͨ��0 ID */
        unsigned int    ipf_rd_ch1_id              : 4; /* [15..12] AXI��ͨ��1 ID */
        unsigned int    ipf_wr_ch0_pri             : 3; /* [18..16] AXIдͨ��0���ȼ� */
        unsigned int    reserved_3                 : 1; /* [19..19] ���� */
        unsigned int    ipf_wr_ch1_pri             : 3; /* [22..20] AXIдͨ��1���ȼ� */
        unsigned int    reserved_2                 : 1; /* [23..23] ���� */
        unsigned int    ipf_rd_ch0_pri             : 3; /* [26..24] AXI��ͨ��0���ȼ� */
        unsigned int    reserved_1                 : 1; /* [27..27] ���� */
        unsigned int    ipf_rd_ch1_pri             : 3; /* [30..28] AXI��ͨ��1���ȼ� */
        unsigned int    reserved_0                 : 1; /* [31..31] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_DMA_CTRL0_T;    /* IPF DMA���ƼĴ���0 */

typedef union
{
    struct
    {
        unsigned int    outstanding_w              : 1; /* [0..0] дͨ��outstandingʹ�ܡ�0��AXI masterû��дoutstanding������1��AXI master��дoutstanding������outstanding���Ϊ4�� */
        unsigned int    outstanding_r              : 1; /* [1..1] ��ͨ��outstandingʹ�ܡ�0��AXI masterû�ж�outstanding������1��AXI master�ж�outstanding������outstanding���Ϊ4�� */
        unsigned int    reserved                   : 30; /* [31..2] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_DMA_CTRL1_T;    /* IPF DMA���ƼĴ���1 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_int0                : 1; /* [0..0] ���н���ϱ��ж�0 */
        unsigned int    ul_timeout_int0            : 1; /* [1..1] ���н���ϱ���ʱ�ж�0 */
        unsigned int    ul_disable_end_int0        : 1; /* [2..2] ����ͨ���ر�����ж�0 */
        unsigned int    ul_idle_cfg_bd_int0        : 1; /* [3..3] ����ͨ��IDLE�ڼ���������BDָʾ�ж�0 */
        unsigned int    ul_trail_cfg_bd_int0       : 1; /* [4..4] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж�0 */
        unsigned int    ul_noidle_clrptr_int0      : 1; /* [5..5] ���з�IDLE̬��ָ��ָʾ�ж�0 */
        unsigned int    ul_rdq_downoverflow_int0   : 1; /* [6..6] ����RDQ�����ж�0 */
        unsigned int    ul_bdq_upoverflow_int0     : 1; /* [7..7] ����BDQ�����ж�0 */
        unsigned int    ul_rdq_full_int0           : 1; /* [8..8] ����RDQ���ж�0 */
        unsigned int    ul_bdq_epty_int0           : 1; /* [9..9] ����BDQ���ж�0 */
        unsigned int    ul_adq0_epty_int0          : 1; /* [10..10] ����ADQ0���ж�0 */
        unsigned int    ul_adq1_epty_int0          : 1; /* [11..11] ����ADQ1���ж�0 */
        unsigned int    reserved_1                 : 4; /* [15..12] ���� */
        unsigned int    dl_rpt_int0                : 1; /* [16..16] ���н���ϱ��ж�0 */
        unsigned int    dl_timeout_int0            : 1; /* [17..17] ���н���ϱ���ʱ�ж�0 */
        unsigned int    dl_disable_end_int0        : 1; /* [18..18] ����ͨ���ر�����ж�0 */
        unsigned int    dl_idle_cfg_bd_int0        : 1; /* [19..19] ����ͨ��IDLE�ڼ���������BDָʾ�ж�0 */
        unsigned int    dl_trail_cfg_bd_int0       : 1; /* [20..20] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж�0 */
        unsigned int    dl_noidle_clrptr_int0      : 1; /* [21..21] ���з�IDLE̬��ָ��ָʾ�ж�0 */
        unsigned int    dl_rdq_downoverflow_int0   : 1; /* [22..22] ����RDQ�����ж�0 */
        unsigned int    dl_bdq_upoverflow_int0     : 1; /* [23..23] ����BDQ�����ж�0 */
        unsigned int    dl_rdq_full_int0           : 1; /* [24..24] ����RDQ���ж�0 */
        unsigned int    dl_bdq_epty_int0           : 1; /* [25..25] ����BDQ���ж�0 */
        unsigned int    dl_adq0_epty_int0          : 1; /* [26..26] ����ADQ0���ж�0 */
        unsigned int    dl_adq1_epty_int0          : 1; /* [27..27] ����ADQ1���ж�0 */
        unsigned int    reserved_0                 : 4; /* [31..28] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_INT0_T;    /* �ж��ϱ��Ĵ���0 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_int1                : 1; /* [0..0] ���н���ϱ��ж�1 */
        unsigned int    ul_timeout_int1            : 1; /* [1..1] ���н���ϱ���ʱ�ж�1 */
        unsigned int    ul_disable_end_int1        : 1; /* [2..2] ����ͨ���ر�����ж�1 */
        unsigned int    ul_idle_cfg_bd_int1        : 1; /* [3..3] ����ͨ��IDLE�ڼ���������BDָʾ�ж�1 */
        unsigned int    ul_trail_cfg_bd_int1       : 1; /* [4..4] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж�1 */
        unsigned int    ul_noidle_clrptr_int1      : 1; /* [5..5] ���з�IDLE̬��ָ��ָʾ�ж�1 */
        unsigned int    ul_rdq_downoverflow_int1   : 1; /* [6..6] ����RDQ�����ж�1 */
        unsigned int    ul_bdq_upoverflow_int1     : 1; /* [7..7] ����BDQ�����ж�1 */
        unsigned int    ul_rdq_full_int1           : 1; /* [8..8] ����RDQ���ж�1 */
        unsigned int    ul_bdq_epty_int1           : 1; /* [9..9] ����BDQ���ж�1 */
        unsigned int    ul_adq0_epty_int1          : 1; /* [10..10] ����ADQ0���ж�1 */
        unsigned int    ul_adq1_epty_int1          : 1; /* [11..11] ����ADQ1���ж�1 */
        unsigned int    reserved_1                 : 4; /* [15..12] ���� */
        unsigned int    dl_rpt_int1                : 1; /* [16..16] ���н���ϱ��ж�1 */
        unsigned int    dl_timeout_int1            : 1; /* [17..17] ���н���ϱ���ʱ�ж�1 */
        unsigned int    dl_disable_end_int1        : 1; /* [18..18] ����ͨ���ر�����ж�1 */
        unsigned int    dl_idle_cfg_bd_int1        : 1; /* [19..19] ����ͨ��IDLE�ڼ���������BDָʾ�ж�1 */
        unsigned int    dl_trail_cfg_bd_int1       : 1; /* [20..20] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж�1 */
        unsigned int    dl_noidle_clrptr_int1      : 1; /* [21..21] ���з�IDLE̬��ָ��ָʾ�ж�1 */
        unsigned int    dl_rdq_downoverflow_int1   : 1; /* [22..22] ����RDQ�����ж�1 */
        unsigned int    dl_bdq_upoverflow_int1     : 1; /* [23..23] ����BDQ�����ж�1 */
        unsigned int    dl_rdq_full_int1           : 1; /* [24..24] ����RDQ���ж�1 */
        unsigned int    dl_bdq_epty_int1           : 1; /* [25..25] ����BDQ���ж�1 */
        unsigned int    dl_adq0_epty_int1          : 1; /* [26..26] ����ADQ0���ж�1 */
        unsigned int    dl_adq1_epty_int1          : 1; /* [27..27] ����ADQ1���ж�1 */
        unsigned int    reserved_0                 : 4; /* [31..28] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_INT1_T;    /* �ж��ϱ��Ĵ���1 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_mask0               : 1; /* [0..0] ���н���ϱ��ж����μĴ���0 */
        unsigned int    ul_timeout_mask0           : 1; /* [1..1] ���н���ϱ���ʱ�ж����μĴ���0 */
        unsigned int    ul_disable_end_mask0       : 1; /* [2..2] ����ͨ���ر�����ж����μĴ���0 */
        unsigned int    ul_idle_cfg_bd_mask0       : 1; /* [3..3] ����ͨ��IDLE�ڼ���������BDָʾ�ж����μĴ���0 */
        unsigned int    ul_trail_cfg_bd_mask0      : 1; /* [4..4] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж����μĴ���0 */
        unsigned int    ul_noidle_clrptr_mask0     : 1; /* [5..5] ���з�IDLE̬��ָ��ָʾ�ж����μĴ���0 */
        unsigned int    ul_rdq_downoverflow_mask0  : 1; /* [6..6] ����RDQ�����ж����μĴ���0 */
        unsigned int    ul_bdq_upoverflow_mask0    : 1; /* [7..7] ����BDQ�����ж����μĴ���0 */
        unsigned int    ul_rdq_full_mask0          : 1; /* [8..8] ����RDQ���ж����μĴ���0 */
        unsigned int    ul_bdq_epty_mask0          : 1; /* [9..9] ����BDQ���ж����μĴ���0 */
        unsigned int    ul_adq0_epty_mask0         : 1; /* [10..10] ����ADQ0���ж����μĴ���0 */
        unsigned int    ul_adq1_epty_mask0         : 1; /* [11..11] ����ADQ1���ж����μĴ���0 */
        unsigned int    reserved_1                 : 4; /* [15..12] ���� */
        unsigned int    dl_rpt_mask0               : 1; /* [16..16] ���н���ϱ��ж����μĴ���0 */
        unsigned int    dl_timeout_mask0           : 1; /* [17..17] ���н���ϱ���ʱ�ж����μĴ���0 */
        unsigned int    dl_disable_end_mask0       : 1; /* [18..18] ����ͨ���ر�����ж����μĴ���0 */
        unsigned int    dl_idle_cfg_bd_mask0       : 1; /* [19..19] ����ͨ��IDLE�ڼ���������BDָʾ�ж����μĴ���0 */
        unsigned int    dl_trail_cfg_bd_mask0      : 1; /* [20..20] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж����μĴ���0 */
        unsigned int    dl_noidle_clrptr_mask0     : 1; /* [21..21] ���з�IDLE̬��ָ��ָʾ�ж����μĴ���0 */
        unsigned int    dl_rdq_downoverflow_mask0  : 1; /* [22..22] ����RDQ�����ж����μĴ���0 */
        unsigned int    dl_bdq_upoverflow_mask0    : 1; /* [23..23] ����BDQ�����ж����μĴ���0 */
        unsigned int    dl_rdq_full_mask0          : 1; /* [24..24] ����RDQ���ж����μĴ���0 */
        unsigned int    dl_bdq_epty_mask0          : 1; /* [25..25] ����BDQ���ж����μĴ���0 */
        unsigned int    dl_adq0_epty_mask0         : 1; /* [26..26] ����ADQ0���ж����μĴ���0 */
        unsigned int    dl_adq1_epty_mask0         : 1; /* [27..27] ����ADQ1���ж����μĴ���0��0 */
        unsigned int    reserved_0                 : 4; /* [31..28] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_INT_MASK0_T;    /* �ж����μĴ���0 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_mask1               : 1; /* [0..0] ���н���ϱ��ж����μĴ���1 */
        unsigned int    ul_timeout_mask1           : 1; /* [1..1] ���н���ϱ���ʱ�ж����μĴ���1 */
        unsigned int    ul_disable_end_mask1       : 1; /* [2..2] ����ͨ���ر�����ж����μĴ���1 */
        unsigned int    ul_idle_cfg_bd_mask1       : 1; /* [3..3] ����ͨ��IDLE�ڼ���������BDָʾ�ж����μĴ���1 */
        unsigned int    ul_trail_cfg_bd_mask1      : 1; /* [4..4] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж����μĴ���1 */
        unsigned int    ul_noidle_clrptr_mask1     : 1; /* [5..5] ���з�IDLE̬��ָ��ָʾ�ж����μĴ���1 */
        unsigned int    ul_rdq_downoverflow_mask1  : 1; /* [6..6] ����RDQ�����ж����μĴ���1 */
        unsigned int    ul_bdq_upoverflow_mask1    : 1; /* [7..7] ����BDQ�����ж����μĴ���1 */
        unsigned int    ul_rdq_full_mask1          : 1; /* [8..8] ����RDQ���ж����μĴ���1 */
        unsigned int    ul_bdq_epty_mask1          : 1; /* [9..9] ����BDQ���ж����μĴ���1 */
        unsigned int    ul_adq0_epty_mask1         : 1; /* [10..10] ����ADQ0���ж����μĴ���1 */
        unsigned int    ul_adq1_epty_mask1         : 1; /* [11..11] ����ADQ1���ж����μĴ���1 */
        unsigned int    reserved_1                 : 4; /* [15..12] ���� */
        unsigned int    dl_rpt_mask1               : 1; /* [16..16] ���н���ϱ��ж����μĴ���1 */
        unsigned int    dl_timeout_mask1           : 1; /* [17..17] ���н���ϱ���ʱ�ж����μĴ���1 */
        unsigned int    dl_disable_end_mask1       : 1; /* [18..18] ����ͨ���ر�����ж����μĴ���1 */
        unsigned int    dl_idle_cfg_bd_mask1       : 1; /* [19..19] ����ͨ��IDLE�ڼ���������BDָʾ�ж����μĴ���1 */
        unsigned int    dl_trail_cfg_bd_mask1      : 1; /* [20..20] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ�ж����μĴ���1 */
        unsigned int    dl_noidle_clrptr_mask1     : 1; /* [21..21] ���з�IDLE̬��ָ��ָʾ�ж����μĴ���1 */
        unsigned int    dl_rdq_downoverflow_mask1  : 1; /* [22..22] ����RDQ�����ж����μĴ���1 */
        unsigned int    dl_bdq_upoverflow_mask1    : 1; /* [23..23] ����BDQ�����ж����μĴ���1 */
        unsigned int    dl_rdq_full_mask1          : 1; /* [24..24] ����RDQ���ж����μĴ���1 */
        unsigned int    dl_bdq_epty_mask1          : 1; /* [25..25] ����BDQ���ж����μĴ���1 */
        unsigned int    dl_adq0_epty_mask1         : 1; /* [26..26] ����ADQ0���ж����μĴ���1 */
        unsigned int    dl_adq1_epty_mask1         : 1; /* [27..27] ����ADQ1���ж����μĴ���1 */
        unsigned int    reserved_0                 : 4; /* [31..28] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_INT_MASK1_T;    /* �ж����μĴ���1 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt                     : 1; /* [0..0] ���н���ϱ�ָʾ */
        unsigned int    ul_timeout                 : 1; /* [1..1] ���н���ϱ���ʱָʾ */
        unsigned int    ul_disable_end             : 1; /* [2..2] ����ͨ���ر����ָʾ */
        unsigned int    ul_idle_cfg_bd             : 1; /* [3..3] ����ͨ��IDLE�ڼ���������BDָʾ */
        unsigned int    ul_trail_cfg_bd            : 1; /* [4..4] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ */
        unsigned int    ul_noidle_clrptr           : 1; /* [5..5] ���з�IDLE̬��ָ��ָʾ */
        unsigned int    ul_rdq_downoverflow        : 1; /* [6..6] ����RDQ����ָʾ */
        unsigned int    ul_bdq_upoverflow          : 1; /* [7..7] ����BDQ����ָʾ */
        unsigned int    ul_rdq_full                : 1; /* [8..8] ����RDQ��ָʾ */
        unsigned int    ul_bdq_epty                : 1; /* [9..9] ����ͨ��BDQ��ָʾ */
        unsigned int    ul_adq0_epty               : 1; /* [10..10] ����ͨ��ADQ0��ָʾ */
        unsigned int    ul_adq1_epty               : 1; /* [11..11] ����ͨ��ADQ1��ָʾ */
        unsigned int    reserved_1                 : 4; /* [15..12] ���� */
        unsigned int    dl_rpt                     : 1; /* [16..16] ���н���ϱ�ָʾ */
        unsigned int    dl_timeout                 : 1; /* [17..17] ���н���ϱ���ʱָʾ */
        unsigned int    dl_disable_end             : 1; /* [18..18] ����ͨ���ر����ָʾ */
        unsigned int    dl_idle_cfg_bd             : 1; /* [19..19] ����ͨ��IDLE�ڼ���������BDָʾ */
        unsigned int    dl_trail_cfg_bd            : 1; /* [20..20] ����ͨ���رյ�BDû�д������ڼ�������������BDָʾ */
        unsigned int    dl_noidle_clrptr           : 1; /* [21..21] ���з�IDLE̬��ָ��ָʾ */
        unsigned int    dl_rdq_downoverflow        : 1; /* [22..22] ����RDQ����ָʾ */
        unsigned int    dl_bdq_upoverflow          : 1; /* [23..23] ����BDQ����ָʾ */
        unsigned int    dl_rdq_full                : 1; /* [24..24] ����RDQ��ָʾ */
        unsigned int    dl_bdq_epty                : 1; /* [25..25] ����ͨ��BDQ��ָʾ */
        unsigned int    dl_adq0_epty               : 1; /* [26..26] ����ͨ��ADQ0��ָʾ */
        unsigned int    dl_adq1_epty               : 1; /* [27..27] ����ͨ��ADQ1��ָʾ */
        unsigned int    reserved_0                 : 4; /* [31..28] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_INT_STATE_T;    /* �ж�״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    time_out_cfg               : 16; /* [15..0] ��ʱ���ã��������RD�����ʱ���ϱ��жϣ�����Ϊ256��ʱ�����ڡ�������ͨ��ͬʱ��Ч�� */
        unsigned int    time_out_valid             : 1; /* [16..16] ��ʱ�ж�ʹ�� */
        unsigned int    reserved                   : 15; /* [31..17] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_TIME_OUT_T;    /* ��ʱ���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    min_pkt_len                : 14; /* [13..0] ��С�������üĴ�����Ĭ��ֵΪ40�ֽڣ�0x28�� */
        unsigned int    reserved_1                 : 2; /* [15..14] ������ */
        unsigned int    max_pkt_len                : 14; /* [29..16] ���������üĴ�����Ĭ��ֵΪ1500�ֽڣ�0x5DC�� */
        unsigned int    reserved_0                 : 2; /* [31..30] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_PKT_LEN_T;    /* �������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    ul_filter_zero_index       : 9; /* [8..0] ul������������ʼ������ul������������ʼ��ַ���÷�ΧΪ0��63����չ��������ַ��Χ��64~510���������Ϊ511��ʾ����ͨ���޹�������Ĭ��ֵΪ511��0x1FF������mfc_en����λ��Чʱ���������Ч�� */
        unsigned int    reserved_1                 : 7; /* [15..9] ������ */
        unsigned int    dl_filter_zero_index       : 9; /* [24..16] dl������������ʼ������dl������������ʼ��ַ���÷�ΧΪ0��63,��չ��������ַ��Χ��64~510���������Ϊ511��ʾ����ͨ���޹�������Ĭ��ֵΪ511��0x1FF������mfc_en����λ��Чʱ���������Ч�� */
        unsigned int    reserved_0                 : 7; /* [31..25] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_FILTER_ZERO_INDEX_T;    /* IPF��������ʼ�������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    ef_baddr                   : 32; /* [31..0] ��չ��������ʼ��ַ��8�ֽڶ��� */
    } bits;
    unsigned int    u32;
}HI_IPF_EF_BADDR_T;    /* ��չ����������ַ���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    bf_index                   : 8; /* [7..0] �������˱���д��ַ����ΧΪ0��63�� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_BFLT_INDEX_T;    /* �������˱��������� */

typedef union
{
    struct
    {
        unsigned int    flt_chain_loop             : 1; /* [0..0] ��ʾ�����������γɻ��쳣�澯 */
        unsigned int    reserved                   : 31; /* [31..1]  */
    } bits;
    unsigned int    u32;
}HI_FLT_CHAIN_LOOP_T;    /* �������������澯 */

typedef union
{
    struct
    {
        unsigned int    flt_laddr0                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾLOCAL ADDRESS {[103:96],[111:104],[119:112],[127:120]}��IPV4��ʾLOCAL ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾLOCAL ADDRESS [127:96]��IPV4��ʾLOCAL ADDRESS [31:0] */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR0_T;    /* ������local address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_laddr1                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾLOCAL ADDRESS {[71:64],[79:72],[87:80],[95:88]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾLOCAL ADDRESS[95:64]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR1_T;    /* ������local address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_laddr2                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾLOCAL ADDRESS {[39:32],[47:40],[55:48],[63:56]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾLOCAL ADDRESS[63:32]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR2_T;    /* ������local address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_laddr3                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾLOCAL ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾLOCAL ADDRESS[31:0]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR3_T;    /* ������local address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr0                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS {[103:96],[111:104],[119:112],[127:120]}��IPV4��ʾREMOTE ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS[127:96]��IPV4��ʾREMOTE ADDRESS[31:0] */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR0_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr1                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS {[71:64],[79:72],[87:80],[95:88]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS[95:64]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR1_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr2                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS {[39:32],[47:40],[55:48],[63:56]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS[63:32]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR2_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr3                 : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS[31:0]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR3_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr0_mask            : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS_MASK {[103:96],[111:104],[119:112],[127:120]}IPV4��ʾREMOTE ADDRESS_MASK {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS_MASK[127:96]IPV4��ʾREMOTE ADDRESS_MASK[31:0] */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR0_MASK_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr1_mask            : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS_MASK {[71:64],[79:72],[87:80],[95:88]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS_MASK[95:64]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR1_MASK_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr2_mask            : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS_MASK {[39:32],[47:40],[55:48],[63:56]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS_MASK[63:32]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR2_MASK_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_raddr3_mask            : 32; /* [31..0] flt_addr_reverse����0ʱ�����ֽڴ�����У�IPV6��ʾREMOTE ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse����1ʱ�����ֽ�С�����У�IPV6��ʾREMOTE ADDRESS[31:0]IPV4���� */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR3_MASK_T;    /* ������remote address���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_local_port_low         : 16; /* [15..0] ���˱�LOCAL PORT�����ޣ��ֽ�С������ */
        unsigned int    flt_local_port_high        : 16; /* [31..16] ���˱�LOCAL PORT�����ޣ��ֽ�С������ */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_PORT_T;    /* ���˱�LOCAL PORT�������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_remote_port_low        : 16; /* [15..0] ���˱�REMOTE PORT�����ޣ��ֽ�С������ */
        unsigned int    flt_remote_port_high       : 16; /* [31..16] ���˱�REMOTE PORT�����ޣ��ֽ�С������ */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_PORT_T;    /* ���˱�REMOTE PORT�������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_traffic_class          : 8; /* [7..0] ������ҵ��ȼ�������ֵIPV4Ϊtype of service��IPV6Ϊtraffic class�� */
        unsigned int    flt_traffic_class_mask     : 8; /* [15..8] ������ҵ��ȼ�����������ֵ */
        unsigned int    reserved                   : 16; /* [31..16] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_TRAFFIC_CLASS_T;    /* ���˱�ҵ��ȼ������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_local_addr_mask        : 7; /* [6..0] ������local address����������ֵ��IPV4��������ʾ32λ��ַ����ӵ�λ����λ0�ĸ���������flt_local_addr_mask=7'b0��ʾ�������0xffffffff��flt_local_addr_mask=7'h4��ʾ�������0xfffffff0��flt_local_addr_mask=7'h8��ʾ�������0xffffff00��IPV6��������ʾ128λ��ַ����ӵ�λ����λ0�ĸ����� */
        unsigned int    reserved                   : 25; /* [31..7] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_LADD_MASK_T;    /* ������local address mask�����üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_next_header            : 8; /* [7..0] ������Э������������ֵIPV4Ϊprotocol��IPV6Ϊnext header�� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_NEXT_HEADER_T;    /* ������Э�����������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_fow_lable              : 20; /* [19..0] ���˱�����ǩ���üĴ������ֽ�С������ */
        unsigned int    reserved                   : 12; /* [31..20] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_FLOW_LABEL_T;    /* ����������ǩ�����üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_type                   : 8; /* [7..0] ������type������ֵ */
        unsigned int    reserved_1                 : 8; /* [15..8] ������ */
        unsigned int    flt_code                   : 8; /* [23..16] ������code������ֵ */
        unsigned int    reserved_0                 : 8; /* [31..24] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_ICMP_T;    /* ������ICMP���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_next_index             : 9; /* [8..0] ��һ����������Ӧ��index */
        unsigned int    reserved_1                 : 7; /* [15..9] ������ */
        unsigned int    flt_pri                    : 9; /* [24..16] ���������ȼ���flt_pri��ֵԽС���ȼ�Խ�� */
        unsigned int    reserved_0                 : 7; /* [31..25] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_CHAIN_T;    /* ���������������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_spi                    : 32; /* [31..0] ������SPI������ֵ���ֽ�С������ */
    } bits;
    unsigned int    u32;
}HI_FLT_SPI_T;    /* ������SPI���üĴ��� */

typedef union
{
    struct
    {
        unsigned int    flt_en                     : 1; /* [0..0] ������ʹ�� */
        unsigned int    flt_type                   : 1; /* [1..1] ����������0��IPV41��IPV6 */
        unsigned int    reserved_2                 : 2; /* [3..2] ������ */
        unsigned int    flt_spi_en                 : 1; /* [4..4] ������SPI��ʹ�� */
        unsigned int    flt_code_en                : 1; /* [5..5] ������ICMP CODE��ʹ�� */
        unsigned int    flt_type_en                : 1; /* [6..6] ������ICMP TYPE��ʹ�� */
        unsigned int    flt_fl_en                  : 1; /* [7..7] ������IPV6 FLOW LABLE��ʹ�ܡ�IPV4��������λ���� */
        unsigned int    flt_nh_en                  : 1; /* [8..8] ������NEXT HEADER��ʹ��IPV4Ϊprotocol��ʹ��IPV6Ϊnext header��ʹ�� */
        unsigned int    flt_tos_en                 : 1; /* [9..9] ������TRAFFIC CLASS��ʹ��IPV4Ϊtype of service��ʹ��IPV6Ϊtraffic class��ʹ�� */
        unsigned int    flt_rport_en               : 1; /* [10..10] ������remote port��ʹ�� */
        unsigned int    flt_lport_en               : 1; /* [11..11] ������local port��ʹ�� */
        unsigned int    flt_raddr_en               : 1; /* [12..12] ������remote address��ʹ�� */
        unsigned int    flt_laddr_en               : 1; /* [13..13] ������local address��ʹ�� */
        unsigned int    reserved_1                 : 2; /* [15..14] ������ */
        unsigned int    flt_bear_id                : 6; /* [21..16] ��������Ӧ�ĳ��غ� */
        unsigned int    reserved_0                 : 10; /* [31..22] ������ */
    } bits;
    unsigned int    u32;
}HI_FLT_RULE_CTRL_T;    /* ����������������üĴ��� */

typedef union
{
    struct
    {
        unsigned int    ul_mod                     : 2; /* [1..0] ģʽ���ƼĴ���00����������01��ֻ����10 or 11��ֻ������mm_en����λ��Чʱ���������Ч�� */
        unsigned int    ul_endian                  : 1; /* [2..2] �������ݴ�С��ָʾ0��big endian1��little endian */
        unsigned int    ul_data_chain              : 1; /* [3..3] �����Ƿ�Ϊ���� */
        unsigned int    ul_bdq_clr                 : 1; /* [4..4] ���ж�����������ź�,��������Ϊ1��BD,��дָ������.�˼Ĵ����߼����� */
        unsigned int    ul_rdq_clr                 : 1; /* [5..5] ���ж�����������ź�,��������Ϊ1��RD��дָ������.�˼Ĵ����߼����� */
        unsigned int    Reserved                   : 10; /* [15..6] ���� */
        unsigned int    ul_wrr_value               : 16; /* [31..16] WRRֵ����λ�ֽڡ��������������ΪWRR����ģʽ�������üĴ�������Ϊ���з����Ȩ�ء���������������ul_wrr_value�ں����Ӧ���С���������û������������������е����С� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_CTRL_T;    /* ����ͨ�����ƼĴ��� */

typedef union
{
    struct
    {
        unsigned int    ul_busy                    : 1; /* [0..0] ����busy״ָ̬ʾ�Ĵ��� */
        unsigned int    ul_rdq_full                : 1; /* [1..1] ����RDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    ul_rdq_empty               : 1; /* [2..2] ����RDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    ul_bdq_full                : 1; /* [3..3] ����BDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    ul_bdq_empty               : 1; /* [4..4] ����BDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    reserved_1                 : 3; /* [7..5] ���� */
        unsigned int    ul_rdq_rptr_invalid        : 1; /* [8..8] ����RDQ��ָ����Ч����ʾ�������õ�RDQ��ָ�����RDQ SIZE */
        unsigned int    ul_bdq_wptr_invalid        : 1; /* [9..9] ����BDQдָ����Ч����ʾ�������õ�BDQдָ�����BDQ SIZE */
        unsigned int    reserved_0                 : 22; /* [31..10] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_STATE_T;    /* ����ͨ��״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_baddr               : 32; /* [31..0] ����ͨ��BDQ��ʼ��ַ,8�ֽڶ��� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_BADDR_T;    /* ����ͨ��BDQ��ʼ��ַ */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_size                : 8; /* [7..0] ����ͨ��BDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_SIZE_T;    /* ����ͨ��BDQ��� */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_wptr                : 8; /* [7..0] ����ͨ��BDQдָ�룬���ܴ�������BDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_WPTR_T;    /* ����ͨ��BDQдָ�� */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_rptr                : 8; /* [7..0] ����ͨ��BDQ��ָ�� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_RPTR_T;    /* ����ͨ��BDQ��ָ�� */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_waddr               : 32; /* [31..0] ����ͨ��BDQд��ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_WADDR_T;    /* ����ͨ��BDQд��ַ */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_raddr               : 32; /* [31..0] ����ͨ��BDQ����ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_RADDR_T;    /* ����ͨ��BDQ����ַ */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_baddr               : 32; /* [31..0] ����ͨ��RDQ��ʼ��ַ,8�ֽڶ��� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_BADDR_T;    /* ����ͨ��RDQ��ʼ��ַ */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_size                : 8; /* [7..0] ����ͨ��RDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_SIZE_T;    /* ����ͨ��RDQ��� */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_wptr                : 8; /* [7..0] ����ͨ��RDQдָ�� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_WPTR_T;    /* ����ͨ��RDQдָ�� */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_rptr                : 8; /* [7..0] ����ͨ��RDQ��ָ�룬���ܴ�������RDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_RPTR_T;    /* ����ͨ��RDQ��ָ�� */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_waddr               : 32; /* [31..0] ����ͨ��RDQд��ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_WADDR_T;    /* ����ͨ��RDQд��ַ */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_raddr               : 32; /* [31..0] ����ͨ��RDQ����ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_RADDR_T;    /* ����ͨ��RDQ����ַ */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_depth               : 9; /* [8..0] ����BDQ��ǰ��ȼĴ���,��ʾBDQ��BD�ĸ���.����0��ʾ��,����(ul_bdq_size+1)��ʾ�� */
        unsigned int    reserved_1                 : 7; /* [15..9] ����. */
        unsigned int    ul_rdq_depth               : 9; /* [24..16] ����RDQ��ǰ��ȼĴ���,��ʾRDQ��RD�ĸ���.����0��ʾ��,����(ul_rdq_size+1)��ʾ�� */
        unsigned int    reserved_0                 : 7; /* [31..25] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_DQ_DEPTH_T;    /* ����ͨ���������ָʾ�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_mod                     : 2; /* [1..0] ģʽ���ƼĴ���00����������01��ֻ����10 or 11��ֻ��������mm_en����λ��Чʱ���������Ч�� */
        unsigned int    dl_endian                  : 1; /* [2..2] �������ݴ�С��ָʾ0��big endian1��little endian */
        unsigned int    dl_data_chain              : 1; /* [3..3] �����Ƿ�Ϊ���� */
        unsigned int    dl_bdq_clr                 : 1; /* [4..4] ���ж�����������ź�,��������Ϊ1��BD��дָ������.�˼Ĵ����߼����� */
        unsigned int    dl_rdq_clr                 : 1; /* [5..5] ���ж�����������ź�,��������Ϊ1��RD��дָ������.�˼Ĵ����߼����� */
        unsigned int    Reserved                   : 10; /* [15..6] ���� */
        unsigned int    dl_wrr_value               : 16; /* [31..16] WRRֵ����λ�ֽڡ��������������ΪWRR����ģʽ�������üĴ�������Ϊ���з����Ȩ�ء���������������dl_wrr_value�ں����Ӧ���С���������û������������������е����С� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_CTRL_T;    /* ����ͨ�����ƼĴ��� */

typedef union
{
    struct
    {
        unsigned int    dl_busy                    : 1; /* [0..0] ����busy״ָ̬ʾ�Ĵ��� */
        unsigned int    dl_rdq_full                : 1; /* [1..1] ����RDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    dl_rdq_empty               : 1; /* [2..2] ����RDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    dl_bdq_full                : 1; /* [3..3] ����BDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    dl_bdq_empty               : 1; /* [4..4] ����BDQ��״ָ̬ʾ�Ĵ��� */
        unsigned int    reserved_1                 : 3; /* [7..5] ���� */
        unsigned int    dl_rdq_rptr_invalid        : 1; /* [8..8] ����RDQ��ָ����Ч����ʾ�������õ�RDQ��ָ�����RDQ SIZE */
        unsigned int    dl_bdq_wptr_invalid        : 1; /* [9..9] ����BDQдָ����Ч����ʾ�������õ�BDQдָ�����BDQ SIZE */
        unsigned int    reserved_0                 : 22; /* [31..10] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_STATE_T;    /* ����ͨ��״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_baddr               : 32; /* [31..0] ����ͨ��BDQ��ʼ��ַ,8�ֽڶ��� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_BADDR_T;    /* ����ͨ��BDQ��ʼ��ַ */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_size                : 8; /* [7..0] ����ͨ��BDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_SIZE_T;    /* ����ͨ��BDQ��� */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_wptr                : 8; /* [7..0] ����ͨ��BDQдָ�룬���ܴ�������BDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_WPTR_T;    /* ����ͨ��BDQдָ�� */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_rptr                : 8; /* [7..0] ����ͨ��BDQ��ָ�� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_RPTR_T;    /* ����ͨ��BDQ��ָ�� */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_waddr               : 32; /* [31..0] ����ͨ��BDQд��ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_WADDR_T;    /* ����ͨ��BDQд��ַ */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_raddr               : 32; /* [31..0] ����ͨ��BDQ����ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_RADDR_T;    /* ����ͨ��BDQ����ַ */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_baddr               : 32; /* [31..0] ����ͨ��RDQ��ʼ��ַ,8�ֽڶ��� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_BADDR_T;    /* ����ͨ��RDQ��ʼ��ַ */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_size                : 8; /* [7..0] ����ͨ��RDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_SIZE_T;    /* ����ͨ��RDQ��� */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_wptr                : 8; /* [7..0] ����ͨ��RDQдָ�� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_WPTR_T;    /* ����ͨ��RDQдָ�� */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_rptr                : 8; /* [7..0] ����ͨ��RDQ��ָ�룬���ܴ�������RDQ��� */
        unsigned int    reserved                   : 24; /* [31..8] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_RPTR_T;    /* ����ͨ��RDQ��ָ�� */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_waddr               : 32; /* [31..0] ����ͨ��RDQд��ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_WADDR_T;    /* ����ͨ��RDQд��ַ */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_raddr               : 32; /* [31..0] ����ͨ��RDQ����ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_RADDR_T;    /* ����ͨ��RDQ����ַ */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_depth               : 9; /* [8..0] ����BDQ��ǰ��ȼĴ���,��ʾBDQ��BD�ĸ���.����0��ʾ��,����(dl_bdq_size+1)��ʾ�� */
        unsigned int    reserved_1                 : 7; /* [15..9] ����. */
        unsigned int    dl_rdq_depth               : 9; /* [24..16] ����RDQ��ǰ��ȼĴ���,��ʾRDQ��RD�ĸ���.����0��ʾ��,����(dl_rdq_size+1)��ʾ�� */
        unsigned int    reserved_0                 : 7; /* [31..25] ������ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_DQ_DEPTH_T;    /* ����ͨ���������ָʾ�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq_en                  : 2; /* [1..0] ����ͨ��ADQ0ʹ�ܡ�00����ʾ����ͨ����ʹ��ADQ��01����ʾ����ͨ��ʹ��ADQ0��1x����ʾ����ͨ��ʹ��ADQ0��ADQ1�� */
        unsigned int    ul_adq0_size_sel           : 2; /* [3..2] ����ADQ0��С(ul_adq0_size)ѡ��Ĵ�����00����ʾADQ0�Ĵ�СΪ32��01����ʾADQ0�Ĵ�СΪ64��10����ʾADQ0�Ĵ�СΪ128��11����ʾADQ0�Ĵ�СΪ256�� */
        unsigned int    ul_adq1_size_sel           : 2; /* [5..4] ����ADQ1��С(ul_adq1_size)ѡ��Ĵ�����00����ʾADQ1�Ĵ�СΪ32��01����ʾADQ1�Ĵ�СΪ64��10����ʾADQ1�Ĵ�СΪ128��11����ʾADQ1�Ĵ�СΪ256�� */
        unsigned int    reserved                   : 10; /* [15..6] ���� */
        unsigned int    ul_adq_plen_th             : 16; /* [31..16] ����ͨ�����ݰ�����ֵ��������ͨ������adq������ʱ�������ǰ���ݰ���С����ֵ��ʹ��adq0��AD������ʹ��adq1��AD */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ_CTRL_T;    /* ����ͨ��ADQ���ƼĴ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_base               : 32; /* [31..0] ����ͨ��Ŀ�ĵ�ַ���������л�ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_BASE_T;    /* ����ͨ��ADQ0��ַ�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_empty              : 1; /* [0..0] ����ADQ0��״ָ̬ʾ�Ĵ��� */
        unsigned int    reserved_1                 : 1; /* [1..1] ����. */
        unsigned int    ul_adq0_buf_epty           : 1; /* [2..2] ����ͨ���ڲ�AD Buffer0�ձ�־���ñ�־����1��ʾ�ڲ�AD Buffer0������0��AD�� */
        unsigned int    ul_adq0_buf_full           : 1; /* [3..3] ����ͨ���ڲ�AD Buffer0����־���ñ�־����1��ʾ�ڲ�AD Buffer0������2��AD�� */
        unsigned int    ul_adq0_rptr_invalid       : 1; /* [4..4] ����ADQ0��ָ����Ч����ʾ�������õ�ADQ0��ָ�����ADQ0 SIZE */
        unsigned int    ul_adq0_wptr_invalid       : 1; /* [5..5] ����ADQ0дָ����Ч����ʾ�������õ�ADQ0дָ�����ADQ0 SIZE */
        unsigned int    reserved_0                 : 26; /* [31..6] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_STAT_T;    /* ����ͨ��ADQ0״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_wptr               : 8; /* [7..0] ����ͨ��ADQ0дָ�룬��������ʱдָ����Ҫ����ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_WPTR_T;    /* ����ͨ��ADQ0дָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_rptr               : 8; /* [7..0] ����ͨ��ADQ0��ָ�룬��������ʱ��ָ����Ӳ��ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_RPTR_T;    /* ����ͨ��ADQ0��ָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_base               : 32; /* [31..0] ����ͨ��Ŀ�ĵ�ַ���������л�ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_BASE_T;    /* ����ͨ��ADQ1��ַ�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_empty              : 1; /* [0..0] ����ADQ1��״ָ̬ʾ�Ĵ��� */
        unsigned int    reserved_1                 : 1; /* [1..1] ����. */
        unsigned int    ul_adq1_buf_epty           : 1; /* [2..2] ����ͨ���ڲ�AD Buffer1�ձ�־���ñ�־����1��ʾ�ڲ�AD Buffer1������0��AD�� */
        unsigned int    ul_adq1_buf_full           : 1; /* [3..3] ����ͨ���ڲ�AD Buffer1����־���ñ�־����1��ʾ�ڲ�AD Buffer1������2��AD�� */
        unsigned int    ul_adq1_rptr_invalid       : 1; /* [4..4] ����ADQ1��ָ����Ч����ʾ�������õ�ADQ1��ָ�����ADQ1 SIZE */
        unsigned int    ul_adq1_wptr_invalid       : 1; /* [5..5] ����ADQ1дָ����Ч����ʾ�������õ�ADQ1дָ�����ADQ1 SIZE */
        unsigned int    reserved_0                 : 26; /* [31..6] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_STAT_T;    /* ����ͨ��ADQ1״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_wptr               : 8; /* [7..0] ����ͨ��ADQ1дָ�룬��������ʱдָ����Ҫ����ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_WPTR_T;    /* ����ͨ��ADQ1дָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_rptr               : 8; /* [7..0] ����ͨ��ADQ1��ָ�룬��������ʱ��ָ����Ӳ��ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_RPTR_T;    /* ����ͨ��ADQ1��ָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq_en                  : 2; /* [1..0] ����ͨ��ADQ0ʹ�ܡ�00����ʾ����ͨ����ʹ��ADQ��01����ʾ����ͨ��ʹ��ADQ0��1x����ʾ����ͨ��ʹ��ADQ0��ADQ1�� */
        unsigned int    dl_adq0_size_sel           : 2; /* [3..2] ����ADQ0��С(dl_adq0_size)ѡ��Ĵ�����00����ʾADQ0�Ĵ�СΪ32��01����ʾADQ0�Ĵ�СΪ64��10����ʾADQ0�Ĵ�СΪ128��11����ʾADQ0�Ĵ�СΪ256�� */
        unsigned int    dl_adq1_size_sel           : 2; /* [5..4] ����ADQ1��С(dl_adq1_size)ѡ��Ĵ�����00����ʾADQ1�Ĵ�СΪ32��01����ʾADQ1�Ĵ�СΪ64��10����ʾADQ1�Ĵ�СΪ128��11����ʾADQ1�Ĵ�СΪ256�� */
        unsigned int    reserved                   : 10; /* [15..6] ���� */
        unsigned int    dl_adq_plen_th             : 16; /* [31..16] ����ͨ�����ݰ�����ֵ��������ͨ������adq������ʱ�������ǰ���ݰ���С����ֵ��ʹ��adq0��AD������ʹ��adq1��AD */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ_CTRL_T;    /* ����ͨ��ADQ���ƼĴ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_base               : 32; /* [31..0] ����ͨ��Ŀ�ĵ�ַ���������л�ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_BASE_T;    /* ����ͨ��ADQ0��ַ�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_empty              : 1; /* [0..0] ����ADQ0��״ָ̬ʾ�Ĵ��� */
        unsigned int    reserved_1                 : 1; /* [1..1] ����. */
        unsigned int    dl_adq0_buf_epty           : 1; /* [2..2] ����ͨ���ڲ�AD Buffer0�ձ�־���ñ�־����1��ʾ�ڲ�AD Buffer0������0��AD�� */
        unsigned int    dl_adq0_buf_full           : 1; /* [3..3] ����ͨ���ڲ�AD Buffer0����־���ñ�־����1��ʾ�ڲ�AD Buffer0������2��AD�� */
        unsigned int    dl_adq0_rptr_invalid       : 1; /* [4..4] ����ADQ0��ָ����Ч����ʾ�������õ�ADQ0��ָ�����dl_adq0_size */
        unsigned int    dl_adq0_wptr_invalid       : 1; /* [5..5] ����ADQ0дָ����Ч����ʾ�������õ�ADQ0дָ�����dl_adq0_size */
        unsigned int    reserved_0                 : 26; /* [31..6] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_STAT_T;    /* ����ͨ��ADQ0״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_wptr               : 8; /* [7..0] ����ͨ��ADQ0дָ�룬��������ʱдָ����Ҫ����ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_WPTR_T;    /* ����ͨ��ADQ0дָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_rptr               : 8; /* [7..0] ����ͨ��ADQ0��ָ�룬��������ʱ��ָ����Ӳ��ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_RPTR_T;    /* ����ͨ��ADQ0��ָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_base               : 32; /* [31..0] ����ͨ��Ŀ�ĵ�ַ���������л�ַ */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_BASE_T;    /* ����ͨ��ADQ1��ַ�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_empty              : 1; /* [0..0] ����ADQ1��״ָ̬ʾ�Ĵ��� */
        unsigned int    reserved_1                 : 1; /* [1..1] ����. */
        unsigned int    dl_adq1_buf_epty           : 1; /* [2..2] ����ͨ���ڲ�AD Buffer1�ձ�־���ñ�־����1��ʾ�ڲ�AD Buffer1������0��AD�� */
        unsigned int    dl_adq1_buf_full           : 1; /* [3..3] ����ͨ���ڲ�AD Buffer1����־���ñ�־����1��ʾ�ڲ�AD Buffer1������2��AD�� */
        unsigned int    dl_adq1_rptr_invalid       : 1; /* [4..4] ����ADQ1��ָ����Ч����ʾ�������õ�ADQ1��ָ�����dl_adq1_size */
        unsigned int    dl_adq1_wptr_invalid       : 1; /* [5..5] ����ADQ1дָ����Ч����ʾ�������õ�ADQ1дָ�����dl_adq1_size */
        unsigned int    reserved_0                 : 26; /* [31..6] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_STAT_T;    /* ����ͨ��ADQ1״̬�Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_wptr               : 8; /* [7..0] ����ͨ��ADQ1дָ�룬��������ʱдָ����Ҫ����ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_WPTR_T;    /* ����ͨ��ADQ1дָ��Ĵ��� */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_rptr               : 8; /* [7..0] ����ͨ��ADQ1��ָ�룬��������ʱ��ָ����Ӳ��ά���� */
        unsigned int    reserved                   : 24; /* [31..8] ���� */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_RPTR_T;    /* ����ͨ��ADQ1��ָ��Ĵ��� */

#endif
#endif // __HI_IPF_H__
