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
	{ 0x2b68bd2f, "del_timer" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x43de679d, "usb_ep_autoconfig_reset" },
	{ 0x83246544, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x71760d13, "usb_put_function_instance" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4bdfa382, "usb_composite_overwrite_options" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x1670184e, "usb_composite_probe" },
	{ 0x471fe852, "usb_add_function" },
	{ 0xe0a9bf51, "usb_gadget_wakeup" },
	{ 0x20679392, "usb_put_function" },
	{ 0xb95ba70b, "usb_composite_unregister" },
	{ 0xb2b3a4d, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e54c58f, "usb_string_ids_tab" },
	{ 0x2cf8a735, "usb_add_config_only" },
	{ 0xa31afffb, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x87719408, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x99fb4719, "param_ops_uint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "96AB8942FB3B6B42A4D4425");
