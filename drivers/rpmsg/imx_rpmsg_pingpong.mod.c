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
	{ 0xda69cce4, "unregister_rpmsg_driver" },
	{ 0x7a25dba0, "__register_rpmsg_driver" },
	{ 0x8dda343e, "rpmsg_send" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x2d00e420, "rpmsg_sendto" },
	{ 0xc5850110, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc32ef8d1, "_dev_info" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "545A209EFAB77DFBD584468");
