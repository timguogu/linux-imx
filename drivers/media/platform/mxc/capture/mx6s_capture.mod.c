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
	{ 0xa21d4ee2, "vb2_ops_wait_finish" },
	{ 0x7c12ba01, "vb2_ops_wait_prepare" },
	{ 0x655b911c, "vb2_fop_mmap" },
	{ 0x36bcd458, "video_ioctl2" },
	{ 0x321e4a69, "vb2_fop_poll" },
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0x5e1caa65, "__pm_runtime_suspend" },
	{ 0x13bec41d, "release_bus_freq" },
	{ 0x70137c1f, "vb2_queue_release" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3f59d6dd, "request_bus_freq" },
	{ 0xaec71a7c, "__pm_runtime_resume" },
	{ 0xd7207e67, "vb2_queue_init" },
	{ 0x21b6717d, "vb2_dma_contig_memops" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5f754e5a, "memset" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1a4947fa, "dev_fwnode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19bda8e8, "pm_runtime_enable" },
	{ 0xf5aa0bf8, "v4l2_async_notifier_register" },
	{ 0x1ae2f30f, "v4l2_async_notifier_add_subdev" },
	{ 0x44c94435, "of_graph_get_remote_port_parent" },
	{ 0xea82a59a, "of_get_next_child" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd9970538, "of_get_next_available_child" },
	{ 0x66304b3d, "v4l2_async_notifier_init" },
	{ 0xd4dc2678, "devm_request_threaded_irq" },
	{ 0xef494349, "__video_register_device" },
	{ 0xfa277be5, "video_device_release" },
	{ 0x34da4d2e, "video_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7070fbb3, "v4l2_device_register" },
	{ 0x46369794, "of_match_node" },
	{ 0x2def6ef0, "regmap_update_bits_base" },
	{ 0x459fd1bf, "of_node_put" },
	{ 0x8f62c8de, "syscon_node_to_regmap" },
	{ 0x35516b51, "of_find_node_by_phandle" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0x433b378b, "of_get_property" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0xd8d62af2, "devm_ioremap_resource" },
	{ 0xd7f95984, "platform_get_irq" },
	{ 0xa13e1f8a, "platform_get_resource" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd667b650, "vb2_read" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf15ac8f2, "vb2_plane_vaddr" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9919bfa1, "dma_alloc_attrs" },
	{ 0x778897be, "dma_free_attrs" },
	{ 0x537795a7, "vb2_buffer_done" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f828de2, "vb2_reqbufs" },
	{ 0xed5c5680, "vb2_plane_cookie" },
	{ 0xe0f9988b, "vb2_querybuf" },
	{ 0xdb85c5e1, "vb2_qbuf" },
	{ 0x3ea09d3e, "vb2_expbuf" },
	{ 0x3c8f3631, "vb2_dqbuf" },
	{ 0xb4d0463, "vb2_streamon" },
	{ 0xe1eab919, "vb2_streamoff" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3bfe089b, "v4l2_subdev_call_wrappers" },
	{ 0x13a3e6aa, "video_devdata" },
	{ 0x6eb3d2a, "__pm_runtime_disable" },
	{ 0x8d3ea39e, "v4l2_device_unregister" },
	{ 0xa4056ff5, "video_unregister_device" },
	{ 0x9b945d53, "v4l2_async_notifier_unregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx6s-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx6s-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sl-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx6sl-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-csiC*");

MODULE_INFO(srcversion, "8C25500216D4B0331EBF8BD");
