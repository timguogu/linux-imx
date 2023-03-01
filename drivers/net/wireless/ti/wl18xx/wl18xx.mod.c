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
	{ 0x451bdc82, "wl12xx_cmd_build_probe_req" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xfa9f1237, "wlcore_set_key" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb80c139f, "generic_file_llseek" },
	{ 0xde6af602, "debugfs_create_dir" },
	{ 0x2f3e74e6, "wlcore_event_beacon_loss" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x5e1caa65, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xff947441, "wlcore_event_dummy_packet" },
	{ 0x9933e4fb, "wlcore_event_inactive_sta" },
	{ 0x2515961, "wlcore_event_ba_rx_constraint" },
	{ 0xa14febf2, "ieee80211_radar_detected" },
	{ 0x8cd411b8, "wlcore_event_fw_logger" },
	{ 0xeb29e79, "wlcore_event_rssi_trigger" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x22e51362, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x1cc80440, "wlcore_probe" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0xbc51891d, "wlcore_alloc_hw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xaec71a7c, "__pm_runtime_resume" },
	{ 0x69659e55, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4f8024f1, "wl1271_cmd_configure" },
	{ 0x83246544, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x55a100b8, "default_llseek" },
	{ 0xcdd13c81, "wlcore_event_sched_scan_completed" },
	{ 0xd6cbe226, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0xbaedc1c7, "wlcore_set_partition" },
	{ 0x328a05f1, "strncpy" },
	{ 0x295a629b, "wlcore_enable_interrupts" },
	{ 0x716b58c8, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6dd11e5e, "irq_get_irq_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x545db32a, "skb_pull" },
	{ 0xa6c440f, "simple_open" },
	{ 0x45268c00, "ieee80211_queue_delayed_work" },
	{ 0xb480e951, "__cfg80211_send_event_skb" },
	{ 0xe7106cc5, "skb_queue_tail" },
	{ 0x88db665b, "kstrtoul_from_user" },
	{ 0x20fa4a77, "wlcore_event_channel_switch" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x5c1ef30a, "__cfg80211_alloc_event_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1bb0b4d7, "wlcore_disable_interrupts" },
	{ 0xe64240c7, "kfree_skb" },
	{ 0x8b1277df, "wlcore_remove" },
	{ 0x8fb59dba, "ieee80211_find_sta" },
	{ 0x34ca145c, "kstrtou8_from_user" },
	{ 0xee63507f, "wlcore_event_max_tx_failure" },
	{ 0xaed92151, "wl1271_free_tx_id" },
	{ 0x28fa6111, "ieee80211_stop_rx_ba_session" },
	{ 0x3479a0b4, "wlcore_scan_sched_scan_results" },
	{ 0x60025712, "ieee80211_get_hdrlen_from_skb" },
	{ 0x1716a8b9, "wlcore_free_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1db71fa, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0xef8b1f1, "wl1271_debugfs_update_stats" },
	{ 0xe12c2429, "wlcore_set_scan_chan_params" },
	{ 0xf6bfb671, "request_firmware" },
	{ 0x7b5be87e, "wlcore_boot_run_firmware" },
	{ 0x31a482fa, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5cad2f6b, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9579ab50, "wlcore_event_roc_complete" },
	{ 0x99bb8806, "memmove" },
	{ 0xadfd6d32, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x9eba9ba9, "wl1271_cmd_send" },
	{ 0xe3c346d1, "release_firmware" },
	{ 0x1b807eb6, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "7B5CD649474EDF68FBB6590");
