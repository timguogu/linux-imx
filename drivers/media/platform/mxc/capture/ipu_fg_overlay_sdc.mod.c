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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x32614cdd, "ipu_get_soc" },
	{ 0x1321f2b, "ipu_check_task" },
	{ 0xb5f15f17, "ipu_queue_task" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xbc1e9919, "ipu_init_channel" },
	{ 0xa0f3745a, "ipu_uninit_channel" },
	{ 0x778897be, "dma_free_attrs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4d7e5ee7, "ipu_disp_set_window_pos" },
	{ 0xc631580a, "console_unlock" },
	{ 0xcc17af7d, "ipu_init_channel_buffer" },
	{ 0x5f754e5a, "memset" },
	{ 0xa9c5ab81, "ipu_disable_channel" },
	{ 0xae0c8912, "ipu_enable_channel" },
	{ 0xc5850110, "printk" },
	{ 0xdcfe8d4, "mipi_csi2_get_bind_csi" },
	{ 0x8e077b37, "ipu_disable_csi" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x9919bfa1, "dma_alloc_attrs" },
	{ 0xa9b704e1, "ipu_clear_irq" },
	{ 0x2cc93f7, "ipu_update_channel_buffer" },
	{ 0xcdd7a422, "ipu_free_irq" },
	{ 0xff9486fe, "mipi_csi2_get_bind_ipu" },
	{ 0x5bfed7a7, "mipi_csi2_pixelclk_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43a0c447, "registered_fb" },
	{ 0x6354e8dc, "fb_set_var" },
	{ 0xaf90e67d, "ipu_csi_get_sensor_protocol" },
	{ 0xb4234343, "mipi_csi2_get_status" },
	{ 0x3d003f74, "mipi_csi2_get_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x3da7dc1a, "ipu_enable_csi" },
	{ 0x6621e24, "mipi_csi2_pixelclk_disable" },
	{ 0x4c1e61f8, "ipu_select_buffer" },
	{ 0x19e8dc03, "mipi_csi2_get_virtual_channel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe1c6a66e, "ipu_request_irq" },
	{ 0x6c61ce70, "num_registered_fb" },
	{ 0x9e5c95c5, "fb_blank" },
	{ 0x7c7e6426, "mipi_csi2_get_datatype" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "70AE95BB2472F40B324E40C");
