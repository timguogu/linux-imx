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
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x813f12b9, "i2c_transfer" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc70a70ba, "i2c_clients_command" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc2821775, "tuner_count" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfed71615, "param_array_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4c48939e, "tuners" },
};

MODULE_INFO(depends, "tuner-types");


MODULE_INFO(srcversion, "BE9C6D8CDEC82D91F452551");
