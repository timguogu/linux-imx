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
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x19bda8e8, "pm_runtime_enable" },
	{ 0xf5aa0bf8, "v4l2_async_notifier_register" },
	{ 0x44c94435, "of_graph_get_remote_port_parent" },
	{ 0xea82a59a, "of_get_next_child" },
	{ 0x1ae2f30f, "v4l2_async_notifier_add_subdev" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd9970538, "of_get_next_available_child" },
	{ 0x66304b3d, "v4l2_async_notifier_init" },
	{ 0xdb1b512a, "v4l2_async_register_subdev" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x733bf743, "v4l2_subdev_init" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7070fbb3, "v4l2_device_register" },
	{ 0xd4dc2678, "devm_request_threaded_irq" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x426c4576, "dev_driver_string" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0xd7f95984, "platform_get_irq" },
	{ 0xd8d62af2, "devm_ioremap_resource" },
	{ 0xa13e1f8a, "platform_get_resource" },
	{ 0x46369794, "of_match_node" },
	{ 0x68002c15, "regulator_set_voltage" },
	{ 0xe1376b8d, "devm_regulator_get" },
	{ 0xf5cced0b, "of_find_property" },
	{ 0xcbaa86d8, "of_graph_get_next_endpoint" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x1c0a75df, "regulator_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1a4947fa, "dev_fwnode" },
	{ 0xaec71a7c, "__pm_runtime_resume" },
	{ 0x1f2a6ae2, "__pm_runtime_idle" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x9d669763, "memcpy" },
	{ 0x97746de5, "__pm_runtime_set_status" },
	{ 0x6eb3d2a, "__pm_runtime_disable" },
	{ 0x8d3ea39e, "v4l2_device_unregister" },
	{ 0x9b945d53, "v4l2_async_notifier_unregister" },
	{ 0x315ff2bf, "v4l2_async_unregister_subdev" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x314600cc, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc5850110, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2def6ef0, "regmap_update_bits_base" },
	{ 0x459fd1bf, "of_node_put" },
	{ 0x8f62c8de, "syscon_node_to_regmap" },
	{ 0x35516b51, "of_find_node_by_phandle" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x77028bad, "__devm_reset_control_get" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3bfe089b, "v4l2_subdev_call_wrappers" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-csiC*");

MODULE_INFO(srcversion, "0D893FA4C88CB40E4B33A9B");
