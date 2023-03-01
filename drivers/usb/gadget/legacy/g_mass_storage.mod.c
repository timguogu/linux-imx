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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x7b626fd5, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0x83246544, "param_ops_charp" },
	{ 0xcbcd1fe5, "fsg_common_set_cdev" },
	{ 0x71760d13, "usb_put_function_instance" },
	{ 0x4bdfa382, "usb_composite_overwrite_options" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x1670184e, "usb_composite_probe" },
	{ 0x471fe852, "usb_add_function" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x20679392, "usb_put_function" },
	{ 0xb95ba70b, "usb_composite_unregister" },
	{ 0xb2b3a4d, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e54c58f, "usb_string_ids_tab" },
	{ 0xfed71615, "param_array_ops" },
	{ 0xa31afffb, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x87719408, "param_ops_ushort" },
	{ 0x99fb4719, "param_ops_uint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "51D1B92D97DA701767BB272");
