/*This file is auto generated by Python script. 2022-08-09 09:54:19.*/



 #ifndef _ALL_TIGER_MEM_H_
 #define _ALL_TIGER_MEM_H_

 typedef uint32 mem_id_t;
 #define GLOBAL_CTRL0m 0
 #define GLOBAL_CTRL1m 1
 #define EXT_CPU_PORT_CTRLm 2
 #define CPU_TAG_TPIDm 3
 #define LOOK_UP_VLAN_SELm 4
 #define INTR_MASKm 5
 #define INTR_STATUSm 6
 #define GLOBAL_MAC_ADDR0m 7
 #define GLOBAL_MAC_ADDR1m 8
 #define EEE_CTRLm 9
 #define SG_PHYm 10
 #define PORT_CTRLm 11
 #define PORT_STATUSm 12
 #define LOOP_DETECT_TOP_CTRLm 13
 #define PON_STRAP_ENm 14
 #define PON_STRAP_VALm 15
 #define PON_STRAPm 16
 #define MDIO_POLLINGm 17
 #define OAM_DYING_GASPm 18
 #define ACL2GPIOm 19
 #define EXTIF0_MODEm 20
 #define EXTIF0_MODE2m 21
 #define EXTIF1_MODEm 22
 #define EXTIF1_MODE2m 23
 #define TPID_PROFILE0m 24
 #define TPID_PROFILE1m 25
 #define PARSER_PORT_CTRLNm 26
 #define LINK_AGG_HASH_CTRLm 27
 #define UDF_CTRLNm 28
 #define PARSER_ERP_OUIm 29
 #define PARSER_ERP_ETHTYPEm 30
 #define PARSER_ERP_UDF_CTRLm 31
 #define PARSER_ERP_UDFNm 32
 #define DOS_TCP_FLAGS0m 33
 #define DOS_TCP_FLAGS1m 34
 #define DOS_TCP_FLAGS2m 35
 #define DOS_TCP_FLAGS3m 36
 #define DOS_TCP_FLAGS4m 37
 #define DOS_TCP_FLAGS5m 38
 #define DOS_CTRLm 39
 #define DOS_LARGE_ICMP_CTRLm 40
 #define OAM_EN_CTRLm 41
 #define WOL_CTRLm 42
 #define DOS_CTRL1m 43
 #define PROTOCOL_BASED_VLANNm 44
 #define PORT_VLAN_CTRLNm 45
 #define PORT_VLAN_CTRL1Nm 46
 #define VLAN_TRANS_UNTAG_VID_MODE_CTRLm 47
 #define VLAN_RANGE_PROFILENm 48
 #define PROTOCOL_BASED_VLAN_DATA_TBLm 49
 #define VLAN_XLATE_ACTION_TBLm 50
 #define VLAN_XLATE_TBLm 51
 #define ACL_BLK_KEEP_CTRLm 52
 #define ACL_PORT_CTRLm 53
 #define ACL_BLK_CMDm 54
 #define RULE_EXT_CTRLm 55
 #define ACL_RULE_BIN0m 56
 #define ACL_RULE_BIN1m 57
 #define ACL_RULE_BIN2m 58
 #define ACL_RULE_BIN3m 59
 #define ACL_RULE_BIN4m 60
 #define ACL_RULE_BIN5m 61
 #define ACL_RULE_BIN6m 62
 #define ACL_RULE_BIN7m 63
 #define ACL_RULE_MASK_BIN0m 64
 #define ACL_RULE_MASK_BIN1m 65
 #define ACL_RULE_MASK_BIN2m 66
 #define ACL_RULE_MASK_BIN3m 67
 #define ACL_RULE_MASK_BIN4m 68
 #define ACL_RULE_MASK_BIN5m 69
 #define ACL_RULE_MASK_BIN6m 70
 #define ACL_RULE_MASK_BIN7m 71
 #define MAC_DA0_RULEm 72
 #define MAC_DA0_RULE_MASKm 73
 #define MAC_DA1_SA1_RULEm 74
 #define MAC_DA1_SA1_RULE_MASKm 75
 #define MAC_SA0_RULEm 76
 #define MAC_SA0_RULE_MASKm 77
 #define IPV4_DA_RULEm 78
 #define IPV4_DA_RULE_MASKm 79
 #define IPV4_SA_RULEm 80
 #define IPV4_SA_RULE_MASKm 81
 #define L4_PORT_RULEm 82
 #define L4_PORT_RULE_MASKm 83
 #define VLAN_RULEm 84
 #define VLAN_RULE_MASKm 85
 #define MISC_RULEm 86
 #define MISC_RULE_MASKm 87
 #define UDF_RULEm 88
 #define UDF_RULE_MASKm 89
 #define IPV6_DA0_RULEm 90
 #define IPV6_DA0_RULE_MASKm 91
 #define IPV6_DA1_RULEm 92
 #define IPV6_DA1_RULE_MASKm 93
 #define IPV6_DA2_RULEm 94
 #define IPV6_DA2_RULE_MASKm 95
 #define IPV6_DA3_RULEm 96
 #define IPV6_DA3_RULE_MASKm 97
 #define IPV6_SA0_RULEm 98
 #define IPV6_SA0_RULE_MASKm 99
 #define IPV6_SA1_RULEm 100
 #define IPV6_SA1_RULE_MASKm 101
 #define IPV6_SA2_RULEm 102
 #define IPV6_SA2_RULE_MASKm 103
 #define IPV6_SA3_RULEm 104
 #define IPV6_SA3_RULE_MASKm 105
 #define VID_PRI_DEI_RULEm 106
 #define VID_PRI_DEI_RULE_MASKm 107
 #define ETHER_TYPE_VALUE_RULEm 108
 #define ETHER_TYPE_VALUE_RULE_MASKm 109
 #define DSCP_TO_INT_PRIO_MAPm 110
 #define PRI_TO_INT_PRIO_MAPm 111
 #define QOS_PORT_CTRLNm 112
 #define QOS_MERGE_PRECEDENCE_CTRLNm 113
 #define HDR_ERR_ACTIONm 114
 #define L2_VLAN_INGRESS_FILTER_ENm 115
 #define L2_ARP_BCAST_PER_PORT_CTRLm 116
 #define L2_ND_PER_PORT_CTRLm 117
 #define L2_LLDP_EEE_PER_PORT_CTRLm 118
 #define L2_LLDP_PER_PORT_CTRLm 119
 #define L2_PORT_ISOLATION_CTRLNm 120
 #define L2_ERP_PER_PORT_CTRLm 121
 #define L2_STP_STATENm 122
 #define L2_SRC_MATCH_CTRLm 123
 #define L2_LEARN_PER_PORT_CTRLNm 124
 #define L2_STATION_MOVE_CTRL0m 125
 #define L2_STATION_MOVE_CTRL1m 126
 #define L2_PORT_LEARN_MAC_CNTNm 127
 #define L2_LEARN_GLOBAL_CTRLm 128
 #define L2_LEARN_MAC_CNTm 129
 #define L2_AGING_CTRLm 130
 #define L2_AGING_PER_PORT_CTRLm 131
 #define L2_FDB_TBL_OP_DATA_0m 132
 #define L2_FDB_TBL_OP_DATA_1m 133
 #define L2_FDB_TBL_OP_DATA_2m 134
 #define L2_FDB_TBL_OPm 135
 #define L2_FDB_TBL_OP_RESULTm 136
 #define L2_IGMP_STATIC_ROUTER_PORT_MASKm 137
 #define L2_IGMP_DYNAMIC_ROUTER_PORT_CTRLm 138
 #define L2_IGMP_DYNAMIC_ROUTER_PORTm 139
 #define L2_IGMP_DYNAMIC_ROUTER_PORT0_TIMERm 140
 #define L2_IGMP_DYNAMIC_ROUTER_PORT1_TIMERm 141
 #define L2_IGMP_GLOBAL_CTRLm 142
 #define L2_IGMP_PER_PORT_CTRLm 143
 #define L2_FDB_TBL_OP_DATA_0_DUMMYm 144
 #define L2_FDB_TBL_OP_DATA_1_DUMMYm 145
 #define L2_FDB_TBL_OP_DATA_2_DUMMYm 146
 #define L2_IGMP_DYNAMIC_ROUTER_PORT_DUMMYm 147
 #define L2_IGMP_DYNAMIC_ROUTER_PORT0_TIMER_DUMMYm 148
 #define L2_IGMP_DYNAMIC_ROUTER_PORT1_TIMER_DUMMYm 149
 #define L2_IGMP_LEARN_CTRLm 150
 #define L2_IGMP_LEARN_GROUP_CNTm 151
 #define L2_UNKNOWN_UCAST_FILTER_MASKm 152
 #define L2_UNKNOWN_MCAST_FILTER_MASKm 153
 #define L2_MCAST_FILTER_MASKm 154
 #define L2_BCAST_FILTER_MASKm 155
 #define L2_PORT_VLAN_TRANSPARENT_CTRLm 156
 #define L2_EGR_VLAN_FILTER_ENm 157
 #define L2_DOT1X_CTRL1m 158
 #define L2_DOT1X_CTRL2m 159
 #define IPMC_LEAKY_CTRLm 160
 #define LINK_AGG_GROUPNm 161
 #define LINK_AGG_MEMBERNm 162
 #define RMA_CTRLNm 163
 #define CPU_COPY_DST_CTRLm 164
 #define ACL_UNMATCH_PERMIT_ENABLE_CTRLm 165
 #define OAM_MUX_ACTm 166
 #define OAM_PAR_ACTm 167
 #define CASCADE_CTRLm 168
 #define LOOP_DETECT_ACT_CTRLm 169
 #define IGMP_ROUTER_PORT_AGING_CTRLm 170
 #define MULTI_VLAN_TBLm 171
 #define L2_LEARN_CLEAR_OPm 172
 #define L2_UC_UNKNOWN_ACT_CTRLm 173
 #define L2_MC_UNKNOWN_ACT_CTRLm 174
 #define L2_LAG_LEARN_LIMIT_CTRLNm 175
 #define L2_LOOP_DETECT_FLAGm 176
 #define L2_LOOP_DETECT_FLAG_DUMMYm 177
 #define L2_LOOP_DETECT_TIMERm 178
 #define L2_ARP_BCAST_PER_PORT_CTRL1m 179
 #define L2_ND_PER_PORT_CTRL1m 180
 #define L2_LLDP_EEE_PER_PORT_CTRL1m 181
 #define L2_LLDP_PER_PORT_CTRL1m 182
 #define L2_ARP_BCAST_ND_PER_PORT_CTRL2m 183
 #define L2_LLDP_EEE_PER_PORT_CTRL2m 184
 #define L2_FDB_HW_FLUSH_CTRLm 185
 #define L2_UNI_QUE_CTRLm 186
 #define L2_VLAN_TBLm 187
 #define L2_FDB_TBL_BIN0m 188
 #define L2_FDB_TBL_BIN1m 189
 #define L2_FDB_TBL_BIN2m 190
 #define L2_FDB_TBL_BIN3m 191
 #define L2_FDB_TBL_BIN4m 192
 #define L2_FDB_TBL_BIN5m 193
 #define L2_FDB_TBL_BIN6m 194
 #define L2_FDB_TBL_BIN7m 195
 #define ACL_ACTION_TBLm 196
 #define PORT_RATE_CTRLNm 197
 #define STORM_CTRL_TIMESLOTm 198
 #define METER_TIMESLOTm 199
 #define PORT_METER_CTRLNm 200
 #define STORM_CTRL_MC_TYPE_CTRLm 201
 #define DROP_EVENT_LOGm 202
 #define STATS_OFFSETm 203
 #define STORM_CTRL_CONFIG_TBLm 204
 #define STORM_CTRL_CNT_TBLm 205
 #define METER_CONFIG_TBLm 206
 #define METER_TOKEN_TBLm 207
 #define FLOW_STATS_TBLm 208
 #define FLOW_STATS_CFG_TBLm 209
 #define CPU_CODE_TO_CPU_PRIO_MAPNm 210
 #define INT_PRIO_TO_UCAST_QID_MAPNm 211
 #define INT_PRIO_TO_MCAST_QID_MAPNm 212
 #define MIRROR_CTRLm 213
 #define MIRROR_QOS_CTRLm 214
 #define FLUSH_CFGm 215
 #define OQ_ENQ_DIS_TBLm 216
 #define EGR_PORT_CTRLNm 217
 #define EGR_PORT_VLAN_CTRLNm 218
 #define EGR_DSCP_REMARKNm 219
 #define EGR_PRIO_REMARKNm 220
 #define EGR_TPID_PROFILEm 221
 #define EGR_VLAN_TRANS_RULE_CTRLNm 222
 #define EGR_VLAN_TRANS_RULE_CTRL1Nm 223
 #define EGR_VLAN_TRANS_DATA_CTRLNm 224
 #define EGR_VLAN_TAG_TRANSPARENT_CTRLm 225
 #define CPU_PKT_BYPASSEDIT_CTRLm 226
 #define IPG_PRE_LEN_CFGm 227
 #define QSCH_SHP_SLOT_TIME_CFGm 228
 #define PSCH_SHP_SLOT_TIME_CFGm 229
 #define QSCH_FLOW_MAP_TBLm 230
 #define QSCH_C_DWRR_CFG_TBLm 231
 #define QSCH_E_DWRR_CFG_TBLm 232
 #define QSCH_SHP_CFG_TBLm 233
 #define QSCH_METER_CFG_TBLm 234
 #define PSCH_SHP_CFG_TBLm 235
 #define PSCH_METER_CFG_TBLm 236
 #define NUM_MEMS 237

 #define MODULE_QM                        0x300000
 #define MODULE_MODULE_MESSAGE_SW_ONLY    1 
 #define MODULE_MODULE_MESSAGE_SHARED     2 
 #define MODULE_MODULE_MESSAGE_HW_ONLY    3 
 #define MODULE_SCH                       0x340000 
 #define MODULE_IPE_L2                    0x180000 
 #define MODULE_IPE_IM                    0x220000 
 #define MODULE_IPE_IV                    0x230000 
 #define MODULE_IPE_ACL                   0x200000 
 #define MODULE_KEY_ACL                   0x0 
 #define MODULE_KEY_L2                    0x0 
 #define MODULE_KEY_VLAN                  0x0 
 #define MODULE_IPE_IPR                   0x210000 
 #define MODULE_PTX                       0x100000 
 #define MODULE_IPE_PTP_IPR               0x2F0000 
 #define MODULE_TX_MAC                    0x320000 

 #define MODULE_SWITCH_CORE_GLOBAL 0x80000
 #define MAX_MODULE                13 

 #endif 
