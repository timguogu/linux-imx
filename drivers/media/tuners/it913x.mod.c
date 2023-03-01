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
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fca7ba2, "regmap_bulk_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x12d7638, "regmap_bulk_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdaa032a, "regmap_write" },
	{ 0x459d03d8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:it9133ax-tuner");
MODULE_ALIAS("platform:it9133bx-tuner");

MODULE_INFO(srcversion, "A623FD416B2347DCD1B4CB9");
