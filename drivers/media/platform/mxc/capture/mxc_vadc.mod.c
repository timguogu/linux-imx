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
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0xedc03953, "iounmap" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x393eee46, "of_iomap" },
	{ 0x521499d4, "of_find_compatible_node" },
	{ 0x2be9d369, "syscon_regmap_lookup_by_phandle" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0xaec71a7c, "__pm_runtime_resume" },
	{ 0x19bda8e8, "pm_runtime_enable" },
	{ 0xdb1b512a, "v4l2_async_register_subdev" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x733bf743, "v4l2_subdev_init" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0xd8d62af2, "devm_ioremap_resource" },
	{ 0x89eeb103, "platform_get_resource_byname" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x315ff2bf, "v4l2_async_unregister_subdev" },
	{ 0x6eb3d2a, "__pm_runtime_disable" },
	{ 0x1f2a6ae2, "__pm_runtime_idle" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2def6ef0, "regmap_update_bits_base" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx6sx-vadc");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-vadcC*");

MODULE_INFO(srcversion, "BD3C5DFB365E8817E38AD4E");
