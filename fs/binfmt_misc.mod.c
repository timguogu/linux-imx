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
	{ 0x335d2897, "kill_litter_super" },
	{ 0xbe2df819, "noop_llseek" },
	{ 0x55a100b8, "default_llseek" },
	{ 0x762c88c5, "simple_statfs" },
	{ 0x546474dc, "unregister_filesystem" },
	{ 0xb8e6dc30, "unregister_binfmt" },
	{ 0x43c5e801, "__register_binfmt" },
	{ 0xf89f7c7a, "register_filesystem" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x30a80030, "iput" },
	{ 0xc5850110, "printk" },
	{ 0x7b2a3329, "d_instantiate" },
	{ 0xb58733ea, "simple_pin_fs" },
	{ 0x78c81bd3, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x8b79b5f8, "new_inode" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x11e9750f, "lookup_one_len" },
	{ 0x4253aa7e, "down_write" },
	{ 0xc8339e24, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xe9f951cc, "simple_release_fs" },
	{ 0xde48f781, "d_drop" },
	{ 0x90a73e9, "drop_nlink" },
	{ 0x4489be9a, "_raw_write_unlock" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x369a0e98, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6a217bb, "clear_inode" },
	{ 0xbd77f881, "simple_fill_super" },
	{ 0xb2774c26, "get_tree_single" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d7a57e2, "prepare_binprm" },
	{ 0xd1450c3, "open_exec" },
	{ 0xed2c66c3, "would_dump" },
	{ 0x4b742b2d, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x17c1389a, "__close_fd" },
	{ 0x84eaea45, "remove_arg_zero" },
	{ 0x94012388, "dput" },
	{ 0x734f79bb, "search_binary_handler" },
	{ 0x97a3f8f6, "kernel_read" },
	{ 0x5f754e5a, "memset" },
	{ 0x7eb81ed9, "dentry_open" },
	{ 0xd70bbdc8, "bprm_change_interp" },
	{ 0x31afceed, "copy_strings_kernel" },
	{ 0xa71033bb, "fput" },
	{ 0xd7d35dd8, "_raw_read_unlock" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x11089ac7, "_ctype" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "71E5CB875E3366B522B573D");
