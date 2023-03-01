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
	{ 0x2e3b5a93, "usbnet_resume" },
	{ 0x4ad942ce, "usbnet_suspend" },
	{ 0x9f743f5, "usbnet_disconnect" },
	{ 0xc12c4774, "usbnet_probe" },
	{ 0xa536945f, "usb_deregister" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0xde261f3c, "usbnet_get_endpoints" },
	{ 0x7684d25f, "usbnet_device_suggests_idle" },
	{ 0x1b6a677, "netdev_warn" },
	{ 0x8b97b9b3, "consume_skb" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0x545db32a, "skb_pull" },
	{ 0x256b96da, "usbnet_skb_return" },
	{ 0x24a59ef7, "skb_trim" },
	{ 0x76ce38e5, "skb_clone" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0xffc59f7b, "skb_push" },
	{ 0x68cd7016, "skb_put" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x891a2750, "__dev_kfree_skb_any" },
	{ 0x28c693d7, "skb_copy_expand" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "10D97D26E5592B8F6591AB8");
