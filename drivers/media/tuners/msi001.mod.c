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
	{ 0xb0e6f6d1, "driver_unregister" },
	{ 0x4fe27b1f, "__spi_register_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa9ca68d8, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xe3c08a77, "v4l2_ctrl_auto_cluster" },
	{ 0x4e91c24, "v4l2_ctrl_new_std" },
	{ 0xaf8f15c7, "v4l2_ctrl_handler_init_class" },
	{ 0xc2ea16f8, "v4l2_spi_subdev_init" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xeea0399, "strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0x90a74eaa, "v4l2_device_unregister_subdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:msi001");

MODULE_INFO(srcversion, "54889879DF88C541EF5E092");
