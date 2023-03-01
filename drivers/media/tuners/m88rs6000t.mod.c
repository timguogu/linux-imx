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
	{ 0xa2eb85db, "i2c_del_driver" },
	{ 0x3990444d, "i2c_register_driver" },
	{ 0x9d669763, "memcpy" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x360f3939, "__devm_regmap_init_i2c" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x459d03d8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbdaa032a, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2def6ef0, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:m88rs6000t");

MODULE_INFO(srcversion, "07A691819587C038B5A7C6B");
