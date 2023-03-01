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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x6772acb2, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5461e995, "__hci_cmd_sync" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x71c90087, "memcmp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe64240c7, "kfree_skb" },
	{ 0xf6bfb671, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe3c346d1, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8BDD988DE32BC1E8211D61F");
