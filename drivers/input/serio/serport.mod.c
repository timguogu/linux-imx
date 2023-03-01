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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xd841f07a, "tty_register_ldisc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc95c8167, "serio_unregister_port" },
	{ 0xc5850110, "printk" },
	{ 0xac89b28b, "__serio_register_port" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xce152d71, "tty_name" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xeeaecc43, "serio_interrupt" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E1AEAB73453EFB96B5C8594");
