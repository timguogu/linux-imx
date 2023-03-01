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
	{ 0xbc1e9919, "ipu_init_channel" },
	{ 0xa0f3745a, "ipu_uninit_channel" },
	{ 0xcc17af7d, "ipu_init_channel_buffer" },
	{ 0x5f754e5a, "memset" },
	{ 0xa9c5ab81, "ipu_disable_channel" },
	{ 0xae0c8912, "ipu_enable_channel" },
	{ 0xc5850110, "printk" },
	{ 0x8e077b37, "ipu_disable_csi" },
	{ 0xa9b704e1, "ipu_clear_irq" },
	{ 0xcdd7a422, "ipu_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x3da7dc1a, "ipu_enable_csi" },
	{ 0x4c1e61f8, "ipu_select_buffer" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe1c6a66e, "ipu_request_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4344072E772BE873D93CE9");
