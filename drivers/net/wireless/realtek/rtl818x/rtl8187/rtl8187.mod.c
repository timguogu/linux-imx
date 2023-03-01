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
	{ 0x21e7deef, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x43a4bc8b, "ieee80211_rx_irqsafe" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd45c018b, "ieee80211_beacon_get_tim" },
	{ 0x1bd2a553, "ieee80211_unregister_hw" },
	{ 0x891a2750, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5abacde5, "wiphy_rfkill_start_polling" },
	{ 0x31370c0f, "skb_unlink" },
	{ 0x24a59ef7, "skb_trim" },
	{ 0x51d21ae9, "usb_unanchor_urb" },
	{ 0xbc89799, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xa536945f, "usb_deregister" },
	{ 0xc9580547, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0xffc59f7b, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x553c4cf3, "__dev_kfree_skb_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x545db32a, "skb_pull" },
	{ 0x2eb9416a, "wiphy_rfkill_stop_polling" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x45268c00, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe7106cc5, "skb_queue_tail" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xa47c6a56, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc87a317a, "usb_reset_device" },
	{ 0x7cde8804, "wiphy_rfkill_set_hw_state" },
	{ 0xf771377b, "usb_put_dev" },
	{ 0x70029f3f, "ieee80211_tx_status_irqsafe" },
	{ 0xe64240c7, "kfree_skb" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4d2e765d, "ieee80211_generic_frame_duration" },
	{ 0x98d695ad, "ieee80211_ctstoself_duration" },
	{ 0x493424e5, "ieee80211_register_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0xa41cc690, "ieee80211_free_hw" },
	{ 0xad32faef, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x68cd7016, "skb_put" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x629f1d0c, "usb_anchor_urb" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0xf4f7a87e, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "eeprom_93cx6");

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A13263021B9CDC34DF5DAB4");
