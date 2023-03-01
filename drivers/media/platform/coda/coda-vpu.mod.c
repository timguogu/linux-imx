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
	{ 0x92b57248, "flush_work" },
	{ 0x2577ebc3, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xce8a9a77, "gen_pool_get" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x6d0abbb7, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x1f2a6ae2, "__pm_runtime_idle" },
	{ 0x81d6aa80, "v4l2_m2m_buf_copy_metadata" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5f86da3, "video_device_release_empty" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xde6af602, "debugfs_create_dir" },
	{ 0x6eb3d2a, "__pm_runtime_disable" },
	{ 0xc7b31f54, "v4l2_m2m_qbuf" },
	{ 0x297bae4f, "v4l2_event_queue_fh" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0xea124bd1, "gcd" },
	{ 0x62a22ce1, "v4l2_m2m_try_schedule" },
	{ 0xf53e70e, "v4l2_m2m_ctx_init" },
	{ 0x2f267dac, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0xd96c63ec, "vdoa_wait_for_completion" },
	{ 0x8d3ea39e, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0x7a3255b9, "__v4l2_ctrl_modify_range" },
	{ 0x4e91c24, "v4l2_ctrl_new_std" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa1592614, "of_gen_pool_get" },
	{ 0x787fe8a8, "vdoa_device_run" },
	{ 0x7c12ba01, "vb2_ops_wait_prepare" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xef494349, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbcc29d79, "v4l2_m2m_fop_mmap" },
	{ 0xaec71a7c, "__pm_runtime_resume" },
	{ 0x778897be, "dma_free_attrs" },
	{ 0xeea0399, "strscpy" },
	{ 0x8caa4c2e, "debugfs_remove_recursive" },
	{ 0x77028bad, "__devm_reset_control_get" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb48677a, "__kfifo_init" },
	{ 0xfc58eef7, "vdoa_context_destroy" },
	{ 0xe7542d6, "v4l2_m2m_ioctl_streamon" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7070fbb3, "v4l2_device_register" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd39ec25, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe6e2bfa8, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x164359c2, "vb2_vmalloc_memops" },
	{ 0xf26de37f, "v4l2_m2m_last_buf" },
	{ 0x23bae5bb, "v4l2_event_subscribe" },
	{ 0x9bde4116, "v4l2_m2m_ioctl_streamoff" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xa4056ff5, "video_unregister_device" },
	{ 0xe85a2d93, "v4l2_fh_init" },
	{ 0x8314194e, "v4l2_ctrl_subscribe_event" },
	{ 0xf15ac8f2, "vb2_plane_vaddr" },
	{ 0x537795a7, "vb2_buffer_done" },
	{ 0xa24491bf, "ida_free" },
	{ 0xbe58b174, "debugfs_remove" },
	{ 0x9919bfa1, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe89eb5a, "request_firmware_nowait" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x5ef45e60, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xed5c5680, "vb2_plane_cookie" },
	{ 0xf371cf8c, "__v4l2_ctrl_s_ctrl" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x4e94b6b6, "v4l2_m2m_get_vq" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x7c7f6b4e, "v4l2_m2m_fop_poll" },
	{ 0x19bda8e8, "pm_runtime_enable" },
	{ 0x9fba21ce, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0x13a3e6aa, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4ada110, "v4l2_m2m_buf_queue" },
	{ 0x7b4c929, "platform_get_irq_byname" },
	{ 0xe0f5cd2c, "v4l2_ctrl_handler_setup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7fe3d6f9, "vdoa_context_create" },
	{ 0x97746de5, "__pm_runtime_set_status" },
	{ 0x80c15724, "v4l2_m2m_ioctl_querybuf" },
	{ 0x7ade9187, "gen_pool_dma_alloc" },
	{ 0x521499d4, "of_find_compatible_node" },
	{ 0x2f583b27, "v4l2_m2m_reqbufs" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0xd4e60760, "v4l2_m2m_ioctl_expbuf" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x21b6717d, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbb8dff81, "debugfs_create_blob" },
	{ 0xaf8f15c7, "v4l2_ctrl_handler_init_class" },
	{ 0x6671c6ea, "vdoa_context_configure" },
	{ 0x10d9c42d, "v4l2_m2m_dqbuf" },
	{ 0xb100fb5, "v4l2_m2m_buf_remove" },
	{ 0xa21d4ee2, "vb2_ops_wait_finish" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x50b68705, "v4l2_fh_add" },
	{ 0xef763d3a, "v4l2_m2m_ctx_release" },
	{ 0x71f9e145, "v4l2_fh_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xd7f95984, "platform_get_irq" },
	{ 0xe4359ed5, "of_find_device_by_node" },
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x459fd1bf, "of_node_put" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xd4dc2678, "devm_request_threaded_irq" },
	{ 0x5e5aaa3c, "v4l2_m2m_next_buf" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe3c346d1, "release_firmware" },
	{ 0x36bcd458, "video_ioctl2" },
	{ 0xc0b54db2, "devm_platform_ioremap_resource" },
	{ 0x369a61fa, "v4l2_m2m_job_finish" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xb8387d55, "v4l2_fh_exit" },
	{ 0xd7207e67, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "imx-vdoa");

MODULE_ALIAS("of:N*T*Cfsl,imx27-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx27-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx51-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx53-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6dl-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx6dl-vpuC*");
MODULE_ALIAS("platform:coda-imx27");

MODULE_INFO(srcversion, "B795DE4EE602D92E6D73AD6");
