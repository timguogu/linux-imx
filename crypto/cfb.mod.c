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
	{ 0x2ffaf1b8, "crypto_unregister_template" },
	{ 0x83a12531, "crypto_register_template" },
	{ 0x125475d3, "skcipher_walk_done" },
	{ 0x9d669763, "memcpy" },
	{ 0x6bdb736c, "skcipher_walk_virt" },
	{ 0x487c7deb, "crypto_mod_put" },
	{ 0xc98f5278, "skcipher_register_instance" },
	{ 0xc888b382, "skcipher_alloc_instance_simple" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "31460807AB3430A8B26CDA2");
