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
	{ 0xa233454a, "ethtool_op_get_link" },
	{ 0xf6463813, "eth_validate_addr" },
	{ 0xa536945f, "usb_deregister" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x3bb38fc4, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7e8a8ea6, "free_netdev" },
	{ 0x8b97b9b3, "consume_skb" },
	{ 0xfe7ecd31, "register_netdev" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xd68d9126, "alloc_etherdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbc89799, "__netdev_alloc_skb" },
	{ 0x5f6d79ea, "netif_tx_wake_queue" },
	{ 0x553c4cf3, "__dev_kfree_skb_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x135184bc, "usb_unlink_urb" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4298b6f7, "usb_kill_urb" },
	{ 0xe66073e7, "netif_device_attach" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x157cdee, "netif_carrier_on" },
	{ 0x277d9133, "netif_carrier_off" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x406e04fd, "netif_rx" },
	{ 0x77230680, "eth_type_trans" },
	{ 0x68cd7016, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x161545d6, "netif_device_detach" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x676bbc0f, "_set_bit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "10BF87512D394C4EC9B5F72");
