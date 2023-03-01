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
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0xa2eb85db, "i2c_del_driver" },
	{ 0x813f12b9, "i2c_transfer" },
	{ 0xc5850110, "printk" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x3990444d, "i2c_register_driver" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4cfc79f5, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mt2060");

MODULE_INFO(srcversion, "537F8A3CF00FE740A9B73BA");
