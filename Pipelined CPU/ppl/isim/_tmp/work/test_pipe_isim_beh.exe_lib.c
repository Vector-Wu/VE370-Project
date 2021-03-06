/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;


int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    work_m_00000000000866782574_2073120511_init();
    work_m_00000000001471807360_1733832700_init();
    work_m_00000000001507264150_2123150820_init();
    work_m_00000000002097055195_4105119094_init();
    work_m_00000000001017049479_3901337038_init();
    work_m_00000000000182103631_1668905219_init();
    work_m_00000000002590015445_0065856647_init();
    work_m_00000000001794721601_0786182075_init();
    work_m_00000000001865488990_2781484775_init();
    work_m_00000000000744403145_1185192925_init();
    work_m_00000000001794721601_3162064573_init();
    work_m_00000000001838264214_0728864225_init();
    work_m_00000000001345980730_3686487418_init();
    work_m_00000000001794721601_1323274903_init();
    work_m_00000000002518997566_3148384703_init();
    work_m_00000000002952016802_0886308060_init();
    work_m_00000000001794721601_0165099760_init();
    work_m_00000000003429481105_1671993997_init();
    work_m_00000000001779268786_1124448613_init();
    work_m_00000000002303877061_3409648901_init();
    work_m_00000000003708854223_1347021620_init();


    xsi_register_tops("work_m_00000000003708854223_1347021620");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
