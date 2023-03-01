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
	{ 0x4fca7ba2, "regmap_bulk_read" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x87b07fa0, "v4l2_i2c_subdev_init" },
	{ 0xe3c08a77, "v4l2_ctrl_auto_cluster" },
	{ 0x4e91c24, "v4l2_ctrl_new_std" },
	{ 0xaf8f15c7, "v4l2_ctrl_handler_init_class" },
	{ 0x360f3939, "__devm_regmap_init_i2c" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xeea0399, "strscpy" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x12d7638, "regmap_bulk_write" },
	{ 0xbdaa032a, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x459d03d8, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "CFA22283B58DCE2F54D0F0E");
