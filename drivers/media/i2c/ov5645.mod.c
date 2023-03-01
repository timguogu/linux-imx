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
	{ 0xe0f5cd2c, "v4l2_ctrl_handler_setup" },
	{ 0x315ff2bf, "v4l2_async_unregister_subdev" },
	{ 0xdb1b512a, "v4l2_async_register_subdev" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0xb93540eb, "media_entity_pads_init" },
	{ 0x87b07fa0, "v4l2_i2c_subdev_init" },
	{ 0xdf8c0b30, "v4l2_ctrl_new_int_menu" },
	{ 0xc845143a, "v4l2_ctrl_new_std_menu_items" },
	{ 0xd39ec25, "v4l2_ctrl_new_std_menu" },
	{ 0x4e91c24, "v4l2_ctrl_new_std" },
	{ 0xaf8f15c7, "v4l2_ctrl_handler_init_class" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1f64f70e, "devm_gpiod_get" },
	{ 0x8d170e55, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0x459fd1bf, "of_node_put" },
	{ 0xcf1f2d3b, "v4l2_fwnode_endpoint_parse" },
	{ 0xcbaa86d8, "of_graph_get_next_endpoint" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1bfc6562, "regulator_bulk_enable" },
	{ 0x2e0b5f96, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x62f15fe1, "gpiod_set_value_cansleep" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x1b988a27, "i2c_transfer_buffer_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf371cf8c, "__v4l2_ctrl_s_ctrl" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91ef7dde, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Covti,ov5645");
MODULE_ALIAS("of:N*T*Covti,ov5645C*");
MODULE_ALIAS("i2c:ov5645");

MODULE_INFO(srcversion, "85798287169C052FE54C376");
