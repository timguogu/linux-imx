#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x6772acb2, "module_layout" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0x2f548802, "ns_to_timeval" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x84b183ae, "strncmp" },
	{ 0x43a0c447, "registered_fb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x631cb49f, "csi_enc_deselect" },
	{ 0xc77a97a, "prp_enc_deselect" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfa277be5, "video_device_release" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xb6635523, "device_create_file" },
	{ 0xef494349, "__video_register_device" },
	{ 0x96a5a270, "v4l2_int_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x7070fbb3, "v4l2_device_register" },
	{ 0x9d669763, "memcpy" },
	{ 0x34da4d2e, "video_device_alloc" },
	{ 0x32614cdd, "ipu_get_soc" },
	{ 0x5f754e5a, "memset" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0x5ef45e60, "of_match_device" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x761b20eb, "prp_still_deselect" },
	{ 0xca55481b, "prp_still_select" },
	{ 0x9919bfa1, "dma_alloc_attrs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1bcdda09, "video_usercopy" },
	{ 0xf9b82ea5, "remap_pfn_range" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0xafd9dc5e, "prp_enc_select" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7e14dc74, "csi_enc_select" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13a3e6aa, "video_devdata" },
	{ 0xe6c77446, "ipu_csi_init_interface" },
	{ 0x27f71660, "ipu_csi_set_window_pos" },
	{ 0xe5a3c1fd, "ipu_csi_set_window_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x63e17e04, "v4l2_int_ioctl_0" },
	{ 0x8d3ea39e, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4056ff5, "video_unregister_device" },
	{ 0x83b92055, "v4l2_int_device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x8ef6f03f, "device_remove_file" },
	{ 0x778897be, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0aa37df, "bg_overlay_sdc_deselect" },
	{ 0xb9729003, "foreground_sdc_deselect" },
	{ 0x9ec7d8cd, "ipu_csi_enable_mclk" },
	{ 0xcc2d9dd0, "v4l2_int_ioctl_1" },
	{ 0x581cde4e, "up" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf0ef52e8, "down" },
	{ 0xd2a84747, "bg_overlay_sdc_select" },
	{ 0x39d0857c, "foreground_sdc_select" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ipu_csi_enc,ipu_prp_enc,v4l2-int-device,ipu_still,ipu_bg_overlay_sdc,ipu_fg_overlay_sdc");

MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-capture");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-captureC*");
MODULE_ALIAS("platform:v4l2-capture-imx5");
MODULE_ALIAS("platform:v4l2-capture-imx6");

MODULE_INFO(srcversion, "164E94978A578876914EDD6");
