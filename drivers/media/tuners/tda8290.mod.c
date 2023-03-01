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
	{ 0xa24f23d8, "__request_module" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x813f12b9, "i2c_transfer" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8F7F97016A8DE79F531C975");
