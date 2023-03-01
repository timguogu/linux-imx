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
	{ 0x3ed74291, "param_ops_int" },
	{ 0xafebdaa8, "crypto_unregister_rngs" },
	{ 0x803e5f84, "crypto_register_rngs" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x71c90087, "memcmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xf96389e7, "crypto_alloc_base" },
	{ 0xc5850110, "printk" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E573DF28F7C221A661982B3");
