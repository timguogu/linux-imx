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
	{ 0xed89a139, "param_ops_bool" },
	{ 0xa536945f, "usb_deregister" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0x458549cd, "device_wakeup_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf80faba4, "usb_get_from_anchor" },
	{ 0xebea4bed, "usb_enable_autosuspend" },
	{ 0x5fad5340, "btintel_set_diag" },
	{ 0xacd3342f, "btintel_hw_error" },
	{ 0xfc223a5b, "btintel_set_bdaddr" },
	{ 0xc8008051, "btintel_set_diag_mfg" },
	{ 0x82008607, "btbcm_setup_apple" },
	{ 0x9f3a4f8e, "btbcm_set_bdaddr" },
	{ 0x23a99034, "btbcm_setup_patchram" },
	{ 0x590fe176, "usb_ifnum_to_if" },
	{ 0xa65dd6e9, "btrtl_shutdown_realtek" },
	{ 0x5ca6dc7c, "btrtl_setup_realtek" },
	{ 0xca807c71, "of_property_read_variable_u16_array" },
	{ 0xfe1f2d93, "hci_register_dev" },
	{ 0xbbfddc95, "usb_driver_claim_interface" },
	{ 0xd4dc2678, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xd774e682, "of_irq_get_byname" },
	{ 0x5ef45e60, "of_match_device" },
	{ 0xda7aeb6a, "gpiod_get_optional" },
	{ 0x67eb15ad, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x143ac704, "usb_match_id" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x1e3f6a38, "usb_set_interface" },
	{ 0x8f53ea83, "hci_recv_diag" },
	{ 0xbc1289de, "__alloc_skb" },
	{ 0x68cd7016, "skb_put" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x90bc29c8, "btintel_set_event_mask" },
	{ 0xb85b3abf, "btintel_load_ddc_config" },
	{ 0x53d32879, "btintel_send_intel_reset" },
	{ 0x9065fbf2, "btintel_download_firmware" },
	{ 0x67f9888, "btintel_read_boot_params" },
	{ 0x94c0ccc4, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xd18f01fc, "hci_recv_frame" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x6ee130b9, "pm_wakeup_dev_event" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x534d143a, "btintel_check_bdaddr" },
	{ 0xe1890f32, "btintel_set_event_mask_mfg" },
	{ 0x789b4090, "btintel_exit_mfg" },
	{ 0xe3c346d1, "release_firmware" },
	{ 0x71c90087, "memcmp" },
	{ 0x9ec9b558, "__hci_cmd_sync_ev" },
	{ 0x2ea042e, "btintel_enter_mfg" },
	{ 0xf6bfb671, "request_firmware" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9d974943, "btintel_read_version" },
	{ 0x5461e995, "__hci_cmd_sync" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x261d135b, "usb_autopm_put_interface" },
	{ 0x646f8934, "usb_autopm_get_interface" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x61b7b264, "usb_bulk_msg" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9a482f9, "msleep" },
	{ 0x62f15fe1, "gpiod_set_value_cansleep" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8540c894, "usb_driver_release_interface" },
	{ 0xcbd940b5, "device_init_wakeup" },
	{ 0x134c18c5, "hci_free_dev" },
	{ 0x52d1cac6, "gpiod_put" },
	{ 0xbd07d5c6, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe64240c7, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x51d21ae9, "usb_unanchor_urb" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x629f1d0c, "usb_anchor_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x298eb48, "usb_alloc_urb" },
};

MODULE_INFO(depends, "btintel,btbcm,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCE052A6E82A97DBD26331C");
