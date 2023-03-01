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
	{ 0xf591910c, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xfa9f1237, "wlcore_set_key" },
	{ 0xb33b94, "wl1271_acx_init_mem_config" },
	{ 0xb80c139f, "generic_file_llseek" },
	{ 0xde6af602, "debugfs_create_dir" },
	{ 0x2f3e74e6, "wlcore_event_beacon_loss" },
	{ 0xff947441, "wlcore_event_dummy_packet" },
	{ 0x9933e4fb, "wlcore_event_inactive_sta" },
	{ 0x2515961, "wlcore_event_ba_rx_constraint" },
	{ 0x954c7f67, "wl1271_acx_pm_config" },
	{ 0x27e824e8, "wlcore_calc_packet_alignment" },
	{ 0xeb29e79, "wlcore_event_rssi_trigger" },
	{ 0x22e51362, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x1cc80440, "wlcore_probe" },
	{ 0xbc51891d, "wlcore_alloc_hw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x69659e55, "debugfs_create_file" },
	{ 0xf33506fb, "wl1271_acx_set_ht_capabilities" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4f8024f1, "wl1271_cmd_configure" },
	{ 0x83246544, "param_ops_charp" },
	{ 0x9909a359, "wl1271_cmd_data_path" },
	{ 0xd60d8e9c, "wl12xx_acx_mem_cfg" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xcdd13c81, "wlcore_event_sched_scan_completed" },
	{ 0xd6cbe226, "wlcore_boot_upload_firmware" },
	{ 0xc9148675, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0xbaedc1c7, "wlcore_set_partition" },
	{ 0x295a629b, "wlcore_enable_interrupts" },
	{ 0xb3312ef, "wl1271_cmd_test" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa6c440f, "simple_open" },
	{ 0x45268c00, "ieee80211_queue_delayed_work" },
	{ 0x20fa4a77, "wlcore_event_channel_switch" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1bb0b4d7, "wlcore_disable_interrupts" },
	{ 0x8b1277df, "wlcore_remove" },
	{ 0xee63507f, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3479a0b4, "wlcore_scan_sched_scan_results" },
	{ 0xfdab0c6f, "wlcore_event_soft_gemini_sense" },
	{ 0x1716a8b9, "wlcore_free_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb32bb972, "wlcore_tx_complete" },
	{ 0xc1db71fa, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0xef8b1f1, "wl1271_debugfs_update_stats" },
	{ 0xe12c2429, "wlcore_set_scan_chan_params" },
	{ 0x7b5be87e, "wlcore_boot_run_firmware" },
	{ 0x31a482fa, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5cad2f6b, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9579ab50, "wlcore_event_roc_complete" },
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x9eba9ba9, "wl1271_cmd_send" },
	{ 0xd52b7c5e, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "385BDE2D44631A152E7A66B");
