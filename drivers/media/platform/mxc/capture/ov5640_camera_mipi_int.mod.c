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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68002c15, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfa4df479, "mipi_csi2_reset" },
	{ 0xa2eb85db, "i2c_del_driver" },
	{ 0x37294353, "mipi_csi2_set_datatype" },
	{ 0x314600cc, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc788dc92, "gpio_to_desc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x96a5a270, "v4l2_int_device_register" },
	{ 0xc5850110, "printk" },
	{ 0xdea011e9, "mipi_csi2_enable" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x83b92055, "v4l2_int_device_unregister" },
	{ 0x41f58cec, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3990444d, "i2c_register_driver" },
	{ 0xe1376b8d, "devm_regulator_get" },
	{ 0x41c3fca9, "mipi_csi2_dphy_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x195ae8f7, "mipi_csi2_disable" },
	{ 0xfcc354a3, "of_get_named_gpio_flags" },
	{ 0x2c9b5057, "mipi_csi2_set_lanes" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0xb4234343, "mipi_csi2_get_status" },
	{ 0x1b988a27, "i2c_transfer_buffer_flags" },
	{ 0x3d003f74, "mipi_csi2_get_info" },
	{ 0xdcf103d7, "mipi_csi2_get_error1" },
	{ 0x40b6db8e, "gpiod_set_raw_value" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0x1c0a75df, "regulator_enable" },
};

MODULE_INFO(depends, "v4l2-int-device");

MODULE_ALIAS("of:N*T*Covti,ov564x_mipi");
MODULE_ALIAS("of:N*T*Covti,ov564x_mipiC*");
MODULE_ALIAS("i2c:ov564x_mipi");

MODULE_INFO(srcversion, "0917181551834FF28E48AAD");
