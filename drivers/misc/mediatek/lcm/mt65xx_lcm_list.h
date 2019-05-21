#ifndef __MT65XX_LCM_LIST_H__
#define __MT65XX_LCM_LIST_H__

#include <lcm_drv.h>

#if defined(MTK_LCM_DEVICE_TREE_SUPPORT)
extern LCM_DRIVER lcm_common_drv;
#else

/* ================================eastaeon==================================== */
// AEON LCM add here ...
extern LCM_DRIVER ili9881c_dsi_vdo_hd720_dj_zal875_lcm_drv;
extern LCM_DRIVER hx8394f_dsi_vdo_hd720_txd_zal875_lcm_drv;
extern LCM_DRIVER ili9881_dsi_vdo_hd720_dj_zal876_lcm_drv;
extern LCM_DRIVER ili9881c_dsi_vdo_hd720_ld_zal1506_lcm_drv;
extern LCM_DRIVER hx8394f_dsi_vdo_hd720_by_zal1506_lcm_drv;
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_lide_8536_lcm_drv;	
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_lide_8536_D_lcm_drv;	
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_hlt_8536_25t_lcm_drv;	
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_txd_8536_lcm_drv;	
extern LCM_DRIVER aeon_rm68200_hd720_dsi_vdo_lide_8536_lcm_drv;	
extern LCM_DRIVER aeon_hx8394f_hd720_dsi_vdo_lide_8536_lcm_drv;	
extern LCM_DRIVER aeon_hx8394f_hd720_dsi_vdo_hlt_8536_lcm_drv;	
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_hlt_8536_lcm_drv;	
extern LCM_DRIVER otm1287a_hd720_dsi_vdo_e520_v511_lide_lcm_drv;
extern LCM_DRIVER aeon_hx8399_fhd_dsi_vdo_e550_lead_lcm_drv;
extern LCM_DRIVER aeon_hx8394_hd720_dsi_vdo_8630_lead_lcm_drv;
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_8630_lead_lcm_drv;
extern LCM_DRIVER aeon_ili9881c_hd720_dsi_vdo_8630_txd_lcm_drv;
#ifdef AEON_FACTORY_MODULE
extern LCM_DRIVER aeon_factory_lcm_lcm_drv;
#endif

//E539
extern LCM_DRIVER otm1287a_hd720_dsi_vdo_e539_l521_ld_lcm_drv;
/* ================================eastaeon==================================== */

#endif

#ifdef BUILD_LK
extern void mdelay(unsigned long msec);
#endif

#endif
