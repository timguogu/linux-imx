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
	{ 0xa2eb85db, "i2c_del_driver" },
	{ 0x3990444d, "i2c_register_driver" },
	{ 0x2e0b5f96, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe0f5cd2c, "v4l2_ctrl_handler_setup" },
	{ 0xdb1b512a, "v4l2_async_register_subdev" },
	{ 0xe3c08a77, "v4l2_ctrl_auto_cluster" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0xd39ec25, "v4l2_ctrl_new_std_menu" },
	{ 0xc845143a, "v4l2_ctrl_new_std_menu_items" },
	{ 0x4e91c24, "v4l2_ctrl_new_std" },
	{ 0xaf8f15c7, "v4l2_ctrl_handler_init_class" },
	{ 0xb93540eb, "media_entity_pads_init" },
	{ 0x87b07fa0, "v4l2_i2c_subdev_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8d170e55, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0xc8a17155, "devm_gpiod_get_optional" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1bfc6562, "regulator_bulk_enable" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0x315ff2bf, "v4l2_async_unregister_subdev" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x813f12b9, "i2c_transfer" },
	{ 0x12a38747, "usleep_range" },
	{ 0xebd9d65a, "gpiod_set_value" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b988a27, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Covti,ov2680");
MODULE_ALIAS("of:N*T*Covti,ov2680C*");

MODULE_INFO(srcversion, "74D4897303DE478B4401444");
