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
	{ 0x9193a042, "tty_register_driver" },
	{ 0xf6d7bca4, "tty_port_init" },
	{ 0xb58b0e42, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x958d36ac, "__tty_alloc_driver" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x80a084d8, "tty_port_install" },
	{ 0x6e7b27eb, "tty_port_open" },
	{ 0x492ce211, "tty_port_close" },
	{ 0xc5850110, "printk" },
	{ 0x8dda343e, "rpmsg_send" },
	{ 0xe6c19e99, "tty_port_destroy" },
	{ 0x58294e4c, "put_tty_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xec21c5af, "tty_unregister_driver" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x4cb8450d, "tty_flip_buffer_push" },
	{ 0x9d669763, "memcpy" },
	{ 0xed147dfa, "tty_prepare_flip_string" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24C84EDC8884AB056A6EAE0");
