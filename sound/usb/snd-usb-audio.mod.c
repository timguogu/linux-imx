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
	{ 0x2d3385d3, "system_wq" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xca3d879, "media_device_usb_allocate" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x151bde17, "usb_altnum_to_altsetting" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x94bb7cf7, "media_device_unregister_entity" },
	{ 0x44fc4a41, "snd_pcm_period_elapsed" },
	{ 0xf086e3fd, "media_devnode_create" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x8b6eb755, "usb_driver_set_configuration" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x830ad18f, "snd_pcm_stop_xrun" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x453bd2da, "seq_printf" },
	{ 0x4298b6f7, "usb_kill_urb" },
	{ 0x1722d895, "usb_reset_configuration" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xf51a0ba7, "media_device_delete" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x646f8934, "usb_autopm_get_interface" },
	{ 0x35b3dd85, "snd_pcm_lib_preallocate_pages" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb2af19e1, "snd_usbmidi_resume" },
	{ 0x135184bc, "usb_unlink_urb" },
	{ 0xd79157d2, "snd_card_disconnect" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x75cc14ad, "usb_get_descriptor" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x83246544, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xf626dc80, "snd_device_new" },
	{ 0x132310cd, "usb_string" },
	{ 0xb4262700, "media_remove_intf_link" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x827d72b0, "snd_pcm_hw_constraint_list" },
	{ 0xa536945f, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x58ec831, "snd_pcm_set_ops" },
	{ 0xb93540eb, "media_entity_pads_init" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x1e3f6a38, "usb_set_interface" },
	{ 0x3f383af0, "snd_ctl_notify" },
	{ 0x62c6dffb, "snd_card_free_when_closed" },
	{ 0x6f6bf619, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbbfddc95, "usb_driver_claim_interface" },
	{ 0xf55e1a1c, "snd_pcm_new_stream" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x10be64a8, "snd_hwdep_new" },
	{ 0xbcb8ca7f, "snd_pcm_lib_free_pages" },
	{ 0x938fd6e7, "snd_pcm_lib_ioctl" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa3db544c, "usb_free_coherent" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x7af69ffa, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xeea6267, "__snd_usbmidi_create" },
	{ 0xfd025930, "snd_pcm_lib_malloc_pages" },
	{ 0x6bceea3c, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe9312775, "media_device_register_entity" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xbed43a41, "snd_usbmidi_suspend" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x2d5c2ff8, "snd_pcm_hw_rule_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x6ff2743d, "snd_component_add" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4e38c35e, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc87a317a, "usb_reset_device" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xddb5050a, "snd_ctl_new1" },
	{ 0xa07fb5b8, "usb_interrupt_msg" },
	{ 0x37ab8c60, "media_create_pad_link" },
	{ 0x342da8dc, "media_create_intf_link" },
	{ 0x6a930f0b, "snd_ctl_find_id" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x9061828f, "snd_ctl_free_one" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x7c6024d5, "snd_card_rw_proc_new" },
	{ 0xea64d67e, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfed71615, "param_array_ops" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7fe62b84, "snd_pcm_hw_constraint_minmax" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x498a7733, "snd_card_free" },
	{ 0x2ba2a1ad, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2735982, "snd_pcm_add_chmap_ctls" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x590fe176, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeba076b9, "snd_pcm_new" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xff1b6584, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xa8ba8062, "usb_alloc_coherent" },
	{ 0x707162a5, "snd_ctl_add" },
	{ 0x8f01c08e, "usb_get_current_frame_number" },
	{ 0x77bc13a0, "strim" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x261d135b, "usb_autopm_put_interface" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0x200ae985, "media_devnode_remove" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-hwdep");

MODULE_ALIAS("usb:v03F0p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pB8D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pB832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0850d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08AEd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F0d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F5d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp0990d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0499p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1004d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p100Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p104Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p104Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1053d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1054d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1509d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p003Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0074d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00E6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0108d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p012Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v06F8pB000d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1011d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1021d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1031d010dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p1033d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2003d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2008d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p200Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p2030d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2031d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2080d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2081d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v07CFp6801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FDp0001d*dc*dsc02dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0944p0200d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0944p0201d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v09E8p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09E8p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep2040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep4040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0012d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0013d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0014d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p0002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p4661d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p8205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v133Ep0815d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13E5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p752Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F38p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4752p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7104p2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0DBAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DBAp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v200Cp100Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1686p00DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc03ip*in*");
MODULE_ALIAS("usb:v0D8Cp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19B5p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp4014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp402Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FDp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2B73p0023d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2B73p0017d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0414pA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p0D64d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p543Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v26CEp0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0414pA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0414pA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc01ip*in*");

MODULE_INFO(srcversion, "8BA8FC47BDD4E4157250A9A");
