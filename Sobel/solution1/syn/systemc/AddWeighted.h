// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4_AR70530_AR70530
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AddWeighted_HH_
#define _AddWeighted_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "image_filter_daddrcU.h"
#include "image_filter_dmulsc4.h"
#include "image_filter_sitotde.h"

namespace ap_rtl {

struct AddWeighted : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<8> > src1_data_stream_V_dout;
    sc_in< sc_logic > src1_data_stream_V_empty_n;
    sc_out< sc_logic > src1_data_stream_V_read;
    sc_in< sc_lv<8> > src2_data_stream_V_dout;
    sc_in< sc_logic > src2_data_stream_V_empty_n;
    sc_out< sc_logic > src2_data_stream_V_read;
    sc_out< sc_lv<8> > dst_data_stream_V_din;
    sc_in< sc_logic > dst_data_stream_V_full_n;
    sc_out< sc_logic > dst_data_stream_V_write;
    sc_signal< sc_lv<64> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const1;


    // Module declarations
    AddWeighted(sc_module_name name);
    SC_HAS_PROCESS(AddWeighted);

    ~AddWeighted();

    sc_trace_file* mVcdFile;

    image_filter_daddrcU<1,5,64,64,64>* image_filter_daddrcU_U74;
    image_filter_daddrcU<1,5,64,64,64>* image_filter_daddrcU_U75;
    image_filter_dmulsc4<1,6,64,64,64>* image_filter_dmulsc4_U76;
    image_filter_dmulsc4<1,6,64,64,64>* image_filter_dmulsc4_U77;
    image_filter_sitotde<1,6,32,64>* image_filter_sitotde_U78;
    image_filter_sitotde<1,6,32,64>* image_filter_sitotde_U79;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > src1_data_stream_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_i_reg_949;
    sc_signal< sc_logic > src2_data_stream_V_blk_n;
    sc_signal< sc_logic > dst_data_stream_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter27;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter26_exitcond_i_reg_949;
    sc_signal< sc_lv<11> > t_V_4_reg_190;
    sc_signal< sc_lv<1> > exitcond4_i_fu_226_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > i_V_fu_232_p2;
    sc_signal< sc_lv<10> > i_V_reg_944;
    sc_signal< sc_lv<1> > exitcond_i_fu_238_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter22;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter27;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter4_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter5_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter6_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter7_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter8_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter9_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter10_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter11_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter12_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter13_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter14_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter15_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter16_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter17_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter18_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter19_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter20_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter21_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter22_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter23_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter24_exitcond_i_reg_949;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_exitcond_i_reg_949;
    sc_signal< sc_lv<11> > j_V_fu_244_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<8> > tmp_106_reg_958;
    sc_signal< sc_lv<8> > tmp_107_reg_963;
    sc_signal< sc_lv<64> > grp_fu_220_p1;
    sc_signal< sc_lv<64> > tmp_39_i_reg_978;
    sc_signal< sc_lv<64> > grp_fu_223_p1;
    sc_signal< sc_lv<64> > tmp_41_i_reg_983;
    sc_signal< sc_lv<64> > grp_fu_210_p2;
    sc_signal< sc_lv<64> > t1_reg_988;
    sc_signal< sc_lv<64> > grp_fu_215_p2;
    sc_signal< sc_lv<64> > t2_reg_993;
    sc_signal< sc_lv<64> > grp_fu_201_p2;
    sc_signal< sc_lv<64> > tmp_42_i_reg_998;
    sc_signal< sc_lv<64> > grp_fu_205_p2;
    sc_signal< sc_lv<64> > sum_reg_1003;
    sc_signal< sc_lv<1> > tmp_i_i_i_fu_275_p2;
    sc_signal< sc_lv<1> > tmp_i_i_i_reg_1008;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_tmp_i_i_i_reg_1008;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter26_tmp_i_i_i_reg_1008;
    sc_signal< sc_lv<1> > tmp_i_i_i_106_fu_281_p2;
    sc_signal< sc_lv<1> > tmp_i_i_i_106_reg_1014;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_tmp_i_i_i_106_reg_1014;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter26_tmp_i_i_i_106_reg_1014;
    sc_signal< sc_lv<1> > isneg_reg_1020;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_isneg_reg_1020;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter26_isneg_reg_1020;
    sc_signal< sc_lv<54> > p_Result_s_fu_311_p1;
    sc_signal< sc_lv<54> > p_Result_s_reg_1030;
    sc_signal< sc_lv<54> > man_V_1_fu_315_p2;
    sc_signal< sc_lv<54> > man_V_1_reg_1035;
    sc_signal< sc_lv<1> > tmp_2_i_fu_321_p2;
    sc_signal< sc_lv<1> > tmp_2_i_reg_1040;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_tmp_2_i_reg_1040;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter26_tmp_2_i_reg_1040;
    sc_signal< sc_lv<12> > F2_fu_327_p2;
    sc_signal< sc_lv<12> > F2_reg_1046;
    sc_signal< sc_lv<1> > tmp_4_i_fu_333_p2;
    sc_signal< sc_lv<1> > tmp_4_i_reg_1054;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_tmp_4_i_reg_1054;
    sc_signal< sc_lv<12> > F2_2_fu_345_p3;
    sc_signal< sc_lv<12> > F2_2_reg_1060;
    sc_signal< sc_lv<12> > ap_reg_pp0_iter25_F2_2_reg_1060;
    sc_signal< sc_lv<1> > tmp_6_i3_fu_353_p2;
    sc_signal< sc_lv<1> > tmp_6_i3_reg_1067;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_tmp_6_i3_reg_1067;
    sc_signal< sc_lv<1> > icmp_fu_369_p2;
    sc_signal< sc_lv<1> > icmp_reg_1074;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_icmp_reg_1074;
    sc_signal< sc_lv<8> > tmp_96_fu_383_p1;
    sc_signal< sc_lv<8> > tmp_96_reg_1080;
    sc_signal< sc_lv<1> > tmp_100_fu_450_p3;
    sc_signal< sc_lv<1> > tmp_100_reg_1086;
    sc_signal< sc_lv<8> > p_Val2_13_fu_462_p2;
    sc_signal< sc_lv<8> > p_Val2_13_reg_1091;
    sc_signal< sc_lv<1> > sel_tmp2_i_fu_473_p2;
    sc_signal< sc_lv<1> > sel_tmp2_i_reg_1098;
    sc_signal< sc_lv<1> > sel_tmp3_i_fu_478_p2;
    sc_signal< sc_lv<1> > sel_tmp3_i_reg_1103;
    sc_signal< sc_lv<1> > tmp_18_i_fu_502_p2;
    sc_signal< sc_lv<1> > tmp_18_i_reg_1109;
    sc_signal< sc_lv<1> > rev_fu_516_p2;
    sc_signal< sc_lv<1> > rev_reg_1115;
    sc_signal< sc_lv<1> > Range1_all_ones_1_fu_542_p2;
    sc_signal< sc_lv<1> > Range1_all_ones_1_reg_1122;
    sc_signal< sc_lv<1> > tmp_105_reg_1129;
    sc_signal< sc_lv<1> > tmp_23_i_fu_556_p2;
    sc_signal< sc_lv<1> > tmp_23_i_reg_1134;
    sc_signal< sc_lv<54> > tmp_24_i_fu_562_p1;
    sc_signal< sc_lv<54> > tmp_24_i_reg_1140;
    sc_signal< sc_lv<54> > Range2_V_1_fu_566_p2;
    sc_signal< sc_lv<54> > Range2_V_1_reg_1145;
    sc_signal< sc_lv<1> > Range1_all_zeros_1_fu_578_p2;
    sc_signal< sc_lv<1> > Range1_all_zeros_1_reg_1151;
    sc_signal< sc_lv<1> > sel_tmp34_i_fu_596_p2;
    sc_signal< sc_lv<1> > sel_tmp34_i_reg_1156;
    sc_signal< sc_lv<8> > p_Val2_14_fu_667_p3;
    sc_signal< sc_lv<8> > p_Val2_14_reg_1162;
    sc_signal< sc_lv<1> > deleted_zeros_fu_790_p3;
    sc_signal< sc_lv<1> > deleted_zeros_reg_1168;
    sc_signal< sc_lv<1> > sel_tmp41_i_fu_810_p2;
    sc_signal< sc_lv<1> > sel_tmp41_i_reg_1173;
    sc_signal< sc_lv<1> > underflow_fu_830_p3;
    sc_signal< sc_lv<1> > underflow_reg_1178;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter21;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter22;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter23;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter24;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter25;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter26;
    sc_signal< sc_lv<10> > t_V_reg_179;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > grp_fu_220_p0;
    sc_signal< sc_lv<32> > grp_fu_223_p0;
    sc_signal< sc_lv<64> > p_Val2_11_fu_258_p1;
    sc_signal< sc_lv<11> > loc_V_fu_261_p4;
    sc_signal< sc_lv<52> > loc_V_1_fu_271_p1;
    sc_signal< sc_lv<53> > tmp_1_i_fu_303_p3;
    sc_signal< sc_lv<63> > tmp_fu_287_p1;
    sc_signal< sc_lv<12> > tmp_8_i1_fu_299_p1;
    sc_signal< sc_lv<12> > tmp_5_i2_fu_339_p2;
    sc_signal< sc_lv<9> > tmp_97_fu_359_p4;
    sc_signal< sc_lv<54> > p_Val2_s_fu_375_p3;
    sc_signal< sc_lv<32> > F2_2_cast_i_fu_380_p1;
    sc_signal< sc_lv<54> > tmp_10_i_fu_392_p1;
    sc_signal< sc_lv<54> > tmp_11_i_fu_396_p2;
    sc_signal< sc_lv<1> > tmp_i5_fu_387_p2;
    sc_signal< sc_lv<8> > tmp_98_fu_402_p1;
    sc_signal< sc_lv<8> > p_Val2_0_i_i6_i_fu_406_p3;
    sc_signal< sc_lv<12> > tmp_15_i_fu_426_p2;
    sc_signal< sc_lv<32> > tmp_20_cast_i_fu_431_p1;
    sc_signal< sc_lv<1> > tmp_14_i_fu_421_p2;
    sc_signal< sc_lv<1> > tmp_99_fu_435_p3;
    sc_signal< sc_lv<8> > p_Val2_12_fu_413_p3;
    sc_signal< sc_lv<1> > qb_fu_443_p3;
    sc_signal< sc_lv<8> > tmp_16_i_fu_458_p1;
    sc_signal< sc_lv<1> > sel_tmp1_i_fu_468_p2;
    sc_signal< sc_lv<12> > pos1_fu_484_p2;
    sc_signal< sc_lv<12> > pos2_fu_493_p2;
    sc_signal< sc_lv<1> > tmp_103_fu_508_p3;
    sc_signal< sc_lv<32> > pos1_cast_i_fu_489_p1;
    sc_signal< sc_lv<54> > tmp_20_i_fu_522_p1;
    sc_signal< sc_lv<54> > tmp_21_i_fu_526_p2;
    sc_signal< sc_lv<1> > lD_fu_532_p1;
    sc_signal< sc_lv<1> > tmp7_fu_536_p2;
    sc_signal< sc_lv<32> > pos2_cast_i_fu_498_p1;
    sc_signal< sc_lv<1> > tmp_23_i_not_fu_584_p2;
    sc_signal< sc_lv<1> > tmp_27_i_fu_572_p2;
    sc_signal< sc_lv<1> > sel_tmp33_i_fu_590_p2;
    sc_signal< sc_lv<8> > tmp_95_fu_602_p1;
    sc_signal< sc_lv<1> > tmp_101_fu_610_p3;
    sc_signal< sc_lv<8> > sel_tmp_i_fu_623_p3;
    sc_signal< sc_lv<1> > sel_tmp7_i_fu_635_p2;
    sc_signal< sc_lv<1> > sel_tmp8_i_fu_640_p2;
    sc_signal< sc_lv<8> > sel_tmp4_i_fu_629_p3;
    sc_signal< sc_lv<1> > sel_tmp12_demorgan_i_fu_652_p2;
    sc_signal< sc_lv<1> > sel_tmp12_i_fu_656_p2;
    sc_signal< sc_lv<1> > sel_tmp13_i_fu_662_p2;
    sc_signal< sc_lv<8> > tmp_13_i_fu_605_p2;
    sc_signal< sc_lv<8> > sel_tmp9_i_fu_645_p3;
    sc_signal< sc_lv<1> > tmp_9_not_i_fu_675_p2;
    sc_signal< sc_lv<1> > not_sel_tmp28_i_fu_680_p2;
    sc_signal< sc_lv<1> > tmp_17_i_fu_617_p2;
    sc_signal< sc_lv<1> > tmp6_fu_686_p2;
    sc_signal< sc_lv<1> > rev4_fu_705_p2;
    sc_signal< sc_lv<54> > r_V_fu_715_p2;
    sc_signal< sc_lv<1> > or_cond115_i_i_fu_710_p2;
    sc_signal< sc_lv<1> > Range2_all_ones_fu_720_p2;
    sc_signal< sc_lv<1> > Range2_all_ones_1_i_s_fu_725_p3;
    sc_signal< sc_lv<1> > tmp_25_i_fu_742_p2;
    sc_signal< sc_lv<1> > Range1_all_zeros_fu_747_p2;
    sc_signal< sc_lv<1> > or_cond117_i_i_fu_733_p2;
    sc_signal< sc_lv<1> > Range1_all_ones_fu_737_p2;
    sc_signal< sc_lv<1> > sel_tmp35_i_fu_762_p3;
    sc_signal< sc_lv<1> > p_119_i_i_fu_758_p2;
    sc_signal< sc_lv<1> > p_122_i_i_fu_752_p2;
    sc_signal< sc_lv<1> > sel_tmp39_i_fu_775_p3;
    sc_signal< sc_lv<1> > carry_1_i_i_fu_692_p2;
    sc_signal< sc_lv<1> > Range1_all_ones_2_i_s_fu_767_p3;
    sc_signal< sc_lv<1> > Range1_all_zeros_2_i_fu_782_p3;
    sc_signal< sc_lv<1> > Range1_all_ones_2_i_fu_798_p2;
    sc_signal< sc_lv<1> > newsignbit_fu_697_p3;
    sc_signal< sc_lv<1> > tmp8_fu_815_p2;
    sc_signal< sc_lv<1> > sel_tmp47_i_fu_826_p2;
    sc_signal< sc_lv<1> > tmp_28_i_fu_804_p2;
    sc_signal< sc_lv<1> > sel_tmp46_i_fu_821_p2;
    sc_signal< sc_lv<1> > tmp9_fu_842_p2;
    sc_signal< sc_lv<1> > p_121_demorgan_i_i_fu_846_p2;
    sc_signal< sc_lv<1> > underflow_not_i_fu_851_p2;
    sc_signal< sc_lv<1> > p_121_demorgan_i_not_s_fu_862_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_not_i_fu_856_p2;
    sc_signal< sc_lv<1> > sel_tmp50_i_demorgan_fu_881_p2;
    sc_signal< sc_lv<1> > sel_tmp50_i_fu_885_p2;
    sc_signal< sc_lv<1> > sel_tmp51_i_fu_891_p2;
    sc_signal< sc_lv<1> > tmp_demorgan_i_fu_838_p2;
    sc_signal< sc_lv<1> > tmp_s_fu_896_p2;
    sc_signal< sc_lv<1> > tmp_40_fu_902_p2;
    sc_signal< sc_lv<1> > sel_tmp55_demorgan_i_fu_914_p2;
    sc_signal< sc_lv<1> > brmerge_i_fu_868_p2;
    sc_signal< sc_lv<1> > sel_tmp55_i_fu_919_p2;
    sc_signal< sc_lv<1> > sel_tmp56_i_fu_925_p2;
    sc_signal< sc_lv<8> > p_Val2_12_0_i_mux_i_fu_874_p3;
    sc_signal< sc_lv<8> > sel_tmp52_i_fu_907_p3;
    sc_signal< sc_logic > grp_fu_201_ce;
    sc_signal< sc_logic > grp_fu_205_ce;
    sc_signal< sc_logic > grp_fu_210_ce;
    sc_signal< sc_logic > grp_fu_215_ce;
    sc_signal< sc_logic > grp_fu_220_ce;
    sc_signal< sc_logic > grp_fu_223_ce;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state31;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_3FE0000000000000;
    static const sc_lv<10> ap_const_lv10_2D0;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<11> ap_const_lv11_500;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<52> ap_const_lv52_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<54> ap_const_lv54_0;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<12> ap_const_lv12_433;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<11> ap_const_lv11_433;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<12> ap_const_lv12_36;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<12> ap_const_lv12_FFF;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<12> ap_const_lv12_8;
    static const sc_lv<12> ap_const_lv12_9;
    static const sc_lv<54> ap_const_lv54_3FFFFFFFFFFFFF;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_F2_2_cast_i_fu_380_p1();
    void thread_F2_2_fu_345_p3();
    void thread_F2_fu_327_p2();
    void thread_Range1_all_ones_1_fu_542_p2();
    void thread_Range1_all_ones_2_i_fu_798_p2();
    void thread_Range1_all_ones_2_i_s_fu_767_p3();
    void thread_Range1_all_ones_fu_737_p2();
    void thread_Range1_all_zeros_1_fu_578_p2();
    void thread_Range1_all_zeros_2_i_fu_782_p3();
    void thread_Range1_all_zeros_fu_747_p2();
    void thread_Range2_V_1_fu_566_p2();
    void thread_Range2_all_ones_1_i_s_fu_725_p3();
    void thread_Range2_all_ones_fu_720_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state31();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter7();
    void thread_ap_block_state11_pp0_stage0_iter8();
    void thread_ap_block_state12_pp0_stage0_iter9();
    void thread_ap_block_state13_pp0_stage0_iter10();
    void thread_ap_block_state14_pp0_stage0_iter11();
    void thread_ap_block_state15_pp0_stage0_iter12();
    void thread_ap_block_state16_pp0_stage0_iter13();
    void thread_ap_block_state17_pp0_stage0_iter14();
    void thread_ap_block_state18_pp0_stage0_iter15();
    void thread_ap_block_state19_pp0_stage0_iter16();
    void thread_ap_block_state20_pp0_stage0_iter17();
    void thread_ap_block_state21_pp0_stage0_iter18();
    void thread_ap_block_state22_pp0_stage0_iter19();
    void thread_ap_block_state23_pp0_stage0_iter20();
    void thread_ap_block_state24_pp0_stage0_iter21();
    void thread_ap_block_state25_pp0_stage0_iter22();
    void thread_ap_block_state26_pp0_stage0_iter23();
    void thread_ap_block_state27_pp0_stage0_iter24();
    void thread_ap_block_state28_pp0_stage0_iter25();
    void thread_ap_block_state29_pp0_stage0_iter26();
    void thread_ap_block_state30_pp0_stage0_iter27();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_block_state8_pp0_stage0_iter5();
    void thread_ap_block_state9_pp0_stage0_iter6();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_brmerge_i_fu_868_p2();
    void thread_brmerge_i_i_not_i_fu_856_p2();
    void thread_carry_1_i_i_fu_692_p2();
    void thread_deleted_zeros_fu_790_p3();
    void thread_dst_data_stream_V_blk_n();
    void thread_dst_data_stream_V_din();
    void thread_dst_data_stream_V_write();
    void thread_exitcond4_i_fu_226_p2();
    void thread_exitcond_i_fu_238_p2();
    void thread_grp_fu_201_ce();
    void thread_grp_fu_205_ce();
    void thread_grp_fu_210_ce();
    void thread_grp_fu_215_ce();
    void thread_grp_fu_220_ce();
    void thread_grp_fu_220_p0();
    void thread_grp_fu_223_ce();
    void thread_grp_fu_223_p0();
    void thread_i_V_fu_232_p2();
    void thread_icmp_fu_369_p2();
    void thread_internal_ap_ready();
    void thread_j_V_fu_244_p2();
    void thread_lD_fu_532_p1();
    void thread_loc_V_1_fu_271_p1();
    void thread_loc_V_fu_261_p4();
    void thread_man_V_1_fu_315_p2();
    void thread_newsignbit_fu_697_p3();
    void thread_not_sel_tmp28_i_fu_680_p2();
    void thread_or_cond115_i_i_fu_710_p2();
    void thread_or_cond117_i_i_fu_733_p2();
    void thread_p_119_i_i_fu_758_p2();
    void thread_p_121_demorgan_i_i_fu_846_p2();
    void thread_p_121_demorgan_i_not_s_fu_862_p2();
    void thread_p_122_i_i_fu_752_p2();
    void thread_p_Result_s_fu_311_p1();
    void thread_p_Val2_0_i_i6_i_fu_406_p3();
    void thread_p_Val2_11_fu_258_p1();
    void thread_p_Val2_12_0_i_mux_i_fu_874_p3();
    void thread_p_Val2_12_fu_413_p3();
    void thread_p_Val2_13_fu_462_p2();
    void thread_p_Val2_14_fu_667_p3();
    void thread_p_Val2_s_fu_375_p3();
    void thread_pos1_cast_i_fu_489_p1();
    void thread_pos1_fu_484_p2();
    void thread_pos2_cast_i_fu_498_p1();
    void thread_pos2_fu_493_p2();
    void thread_qb_fu_443_p3();
    void thread_r_V_fu_715_p2();
    void thread_real_start();
    void thread_rev4_fu_705_p2();
    void thread_rev_fu_516_p2();
    void thread_sel_tmp12_demorgan_i_fu_652_p2();
    void thread_sel_tmp12_i_fu_656_p2();
    void thread_sel_tmp13_i_fu_662_p2();
    void thread_sel_tmp1_i_fu_468_p2();
    void thread_sel_tmp2_i_fu_473_p2();
    void thread_sel_tmp33_i_fu_590_p2();
    void thread_sel_tmp34_i_fu_596_p2();
    void thread_sel_tmp35_i_fu_762_p3();
    void thread_sel_tmp39_i_fu_775_p3();
    void thread_sel_tmp3_i_fu_478_p2();
    void thread_sel_tmp41_i_fu_810_p2();
    void thread_sel_tmp46_i_fu_821_p2();
    void thread_sel_tmp47_i_fu_826_p2();
    void thread_sel_tmp4_i_fu_629_p3();
    void thread_sel_tmp50_i_demorgan_fu_881_p2();
    void thread_sel_tmp50_i_fu_885_p2();
    void thread_sel_tmp51_i_fu_891_p2();
    void thread_sel_tmp52_i_fu_907_p3();
    void thread_sel_tmp55_demorgan_i_fu_914_p2();
    void thread_sel_tmp55_i_fu_919_p2();
    void thread_sel_tmp56_i_fu_925_p2();
    void thread_sel_tmp7_i_fu_635_p2();
    void thread_sel_tmp8_i_fu_640_p2();
    void thread_sel_tmp9_i_fu_645_p3();
    void thread_sel_tmp_i_fu_623_p3();
    void thread_src1_data_stream_V_blk_n();
    void thread_src1_data_stream_V_read();
    void thread_src2_data_stream_V_blk_n();
    void thread_src2_data_stream_V_read();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp6_fu_686_p2();
    void thread_tmp7_fu_536_p2();
    void thread_tmp8_fu_815_p2();
    void thread_tmp9_fu_842_p2();
    void thread_tmp_100_fu_450_p3();
    void thread_tmp_101_fu_610_p3();
    void thread_tmp_103_fu_508_p3();
    void thread_tmp_10_i_fu_392_p1();
    void thread_tmp_11_i_fu_396_p2();
    void thread_tmp_13_i_fu_605_p2();
    void thread_tmp_14_i_fu_421_p2();
    void thread_tmp_15_i_fu_426_p2();
    void thread_tmp_16_i_fu_458_p1();
    void thread_tmp_17_i_fu_617_p2();
    void thread_tmp_18_i_fu_502_p2();
    void thread_tmp_1_i_fu_303_p3();
    void thread_tmp_20_cast_i_fu_431_p1();
    void thread_tmp_20_i_fu_522_p1();
    void thread_tmp_21_i_fu_526_p2();
    void thread_tmp_23_i_fu_556_p2();
    void thread_tmp_23_i_not_fu_584_p2();
    void thread_tmp_24_i_fu_562_p1();
    void thread_tmp_25_i_fu_742_p2();
    void thread_tmp_27_i_fu_572_p2();
    void thread_tmp_28_i_fu_804_p2();
    void thread_tmp_2_i_fu_321_p2();
    void thread_tmp_40_fu_902_p2();
    void thread_tmp_4_i_fu_333_p2();
    void thread_tmp_5_i2_fu_339_p2();
    void thread_tmp_6_i3_fu_353_p2();
    void thread_tmp_8_i1_fu_299_p1();
    void thread_tmp_95_fu_602_p1();
    void thread_tmp_96_fu_383_p1();
    void thread_tmp_97_fu_359_p4();
    void thread_tmp_98_fu_402_p1();
    void thread_tmp_99_fu_435_p3();
    void thread_tmp_9_not_i_fu_675_p2();
    void thread_tmp_demorgan_i_fu_838_p2();
    void thread_tmp_fu_287_p1();
    void thread_tmp_i5_fu_387_p2();
    void thread_tmp_i_i_i_106_fu_281_p2();
    void thread_tmp_i_i_i_fu_275_p2();
    void thread_tmp_s_fu_896_p2();
    void thread_underflow_fu_830_p3();
    void thread_underflow_not_i_fu_851_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif