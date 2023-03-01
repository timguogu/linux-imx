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
	{ 0x87719408, "param_ops_ushort" },
	{ 0x594a5ea2, "param_ops_byte" },
	{ 0xfed71615, "param_array_ops" },
	{ 0x83246544, "param_ops_charp" },
	{ 0x71760d13, "usb_put_function_instance" },
	{ 0x14ec53f, "ffs_name_dev" },
	{ 0xdd23b4cb, "ffs_single_dev" },
	{ 0xa31afffb, "usb_get_function_instance" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x1670184e, "usb_composite_probe" },
	{ 0x4bdfa382, "usb_composite_overwrite_options" },
	{ 0x7b626fd5, "usb_add_config" },
	{ 0x8e54c58f, "usb_string_ids_tab" },
	{ 0x7f21f7f, "usb_remove_function" },
	{ 0xb2b3a4d, "usb_get_function" },
	{ 0x471fe852, "usb_add_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x20679392, "usb_put_function" },
	{ 0xb95ba70b, "usb_composite_unregister" },
	{ 0x998ae3d7, "try_module_get" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x534d0e7f, "module_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A5A19DCA501474B6128BFD");
