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
	{ 0xc168978f, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x6d0abbb7, "v4l2_event_unsubscribe" },
	{ 0x4be85a03, "memweight" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xde6af602, "debugfs_create_dir" },
	{ 0x297bae4f, "v4l2_event_queue_fh" },
	{ 0x97255bdf, "strlen" },
	{ 0xee0e9c5b, "vb2_mmap" },
	{ 0xf837505f, "usb_debug_root" },
	{ 0x8d3ea39e, "v4l2_device_unregister" },
	{ 0x7d57c16d, "no_llseek" },
	{ 0xdab52d96, "vb2_create_bufs" },
	{ 0x321e4a69, "vb2_fop_poll" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6097406e, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4298b6f7, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x7c12ba01, "vb2_ops_wait_prepare" },
	{ 0xef494349, "__video_register_device" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x646f8934, "usb_autopm_get_interface" },
	{ 0xebea4bed, "usb_enable_autosuspend" },
	{ 0x69659e55, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0xeea0399, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8caa4c2e, "debugfs_remove_recursive" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x7070fbb3, "v4l2_device_register" },
	{ 0x2e40ee66, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x164359c2, "vb2_vmalloc_memops" },
	{ 0x132310cd, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x655b911c, "vb2_fop_mmap" },
	{ 0x60a45433, "vb2_ioctl_qbuf" },
	{ 0xa536945f, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x23bae5bb, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x71c90087, "memcmp" },
	{ 0xa4056ff5, "video_unregister_device" },
	{ 0xb93540eb, "media_entity_pads_init" },
	{ 0x1e3f6a38, "usb_set_interface" },
	{ 0xe85a2d93, "v4l2_fh_init" },
	{ 0xf15ac8f2, "vb2_plane_vaddr" },
	{ 0x537795a7, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3ef37a64, "usb_poison_urb" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0xbbfddc95, "usb_driver_claim_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdb85c5e1, "vb2_qbuf" },
	{ 0xff3865a1, "vb2_ioctl_prepare_buf" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x84ed77cd, "vb2_ioctl_create_bufs" },
	{ 0xa3db544c, "usb_free_coherent" },
	{ 0xe0f9988b, "vb2_querybuf" },
	{ 0x81c70c02, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xed5af16e, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0xb4d0463, "vb2_streamon" },
	{ 0xa47c6a56, "usb_get_dev" },
	{ 0x167f1369, "vb2_fop_release" },
	{ 0x13a3e6aa, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3ea09d3e, "vb2_expbuf" },
	{ 0xb1011644, "input_register_device" },
	{ 0xf771377b, "usb_put_dev" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xbdc88a8, "usb_clear_halt" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x8540c894, "usb_driver_release_interface" },
	{ 0x785de735, "input_free_device" },
	{ 0x12690664, "v4l2_device_register_subdev" },
	{ 0x37ab8c60, "media_create_pad_link" },
	{ 0x8f828de2, "vb2_reqbufs" },
	{ 0x291505d6, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x575ea63d, "v4l2_fh_open" },
	{ 0x733bf743, "v4l2_subdev_init" },
	{ 0xfd107c58, "vb2_ioctl_querybuf" },
	{ 0xea64d67e, "__media_device_register" },
	{ 0x3c8f3631, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xcfb12044, "input_unregister_device" },
	{ 0x416836c8, "usb_match_one_id" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0xa21d4ee2, "vb2_ops_wait_finish" },
	{ 0x50b68705, "v4l2_fh_add" },
	{ 0x71f9e145, "v4l2_fh_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x590fe176, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2d7a3feb, "vb2_poll" },
	{ 0xdb711be5, "media_device_init" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa8ba8062, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8f01c08e, "usb_get_current_frame_number" },
	{ 0x30be69e8, "v4l2_format_info" },
	{ 0x5e0a98aa, "vb2_ioctl_streamoff" },
	{ 0x70137c1f, "vb2_queue_release" },
	{ 0x99fb4719, "param_ops_uint" },
	{ 0xe1eab919, "vb2_streamoff" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x188556e1, "media_device_unregister" },
	{ 0x36bcd458, "video_ioctl2" },
	{ 0x261d135b, "usb_autopm_put_interface" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0x50e953b7, "usb_put_intf" },
	{ 0xb8387d55, "v4l2_fh_exit" },
	{ 0x8806f625, "input_allocate_device" },
	{ 0xd7207e67, "vb2_queue_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "B1A7C9FD663C3F0B47C280D");
