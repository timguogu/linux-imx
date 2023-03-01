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
	{ 0x45f666e0, "shash_free_instance" },
	{ 0x9deb7222, "shash_register_instance" },
	{ 0xa2dd21ad, "crypto_init_spawn" },
	{ 0x4ef71921, "crypto_alloc_instance" },
	{ 0x487c7deb, "crypto_mod_put" },
	{ 0xfbd49eda, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x8fa1f754, "crypto_spawn_tfm" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B48B6C523F6AB3768452ADD");
