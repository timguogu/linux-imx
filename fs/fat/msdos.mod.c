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
	{ 0x261f4fad, "fat_detach" },
	{ 0x90a73e9, "drop_nlink" },
	{ 0xaa33688d, "mark_buffer_dirty_inode" },
	{ 0x1eac45ed, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0xc13e9189, "fat_flush_inodes" },
	{ 0x9095f66b, "fat_truncate_time" },
	{ 0x395af66e, "inc_nlink" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3577aa92, "mount_bdev" },
	{ 0xad5ebc4c, "fat_sync_inode" },
	{ 0x437bbbe7, "fat_add_entries" },
	{ 0x811a0cb0, "fat_remove_entries" },
	{ 0x78d7b44d, "fat_alloc_new_dir" },
	{ 0xf0c29026, "fat_fill_super" },
	{ 0x5587c3e7, "fat_build_inode" },
	{ 0x293a549b, "fat_update_time" },
	{ 0x5a298065, "fat_attach" },
	{ 0x71c90087, "memcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbcc62572, "set_nlink" },
	{ 0x95987315, "sync_dirty_buffer" },
	{ 0x4e8bd5f0, "fat_getattr" },
	{ 0x11aa14d1, "__brelse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb80008fa, "kill_block_super" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xb3eeb724, "fat_scan" },
	{ 0xf89f7c7a, "register_filesystem" },
	{ 0x162684a4, "__fat_fs_error" },
	{ 0x78c81bd3, "current_time" },
	{ 0x670f3bde, "d_splice_alias" },
	{ 0xf911996c, "fat_setattr" },
	{ 0x81bc3cc, "fat_free_clusters" },
	{ 0x5214cef5, "fat_get_dotdot_entry" },
	{ 0x546474dc, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1b6a802, "fat_time_unix2fat" },
	{ 0x35b503a3, "fat_dir_empty" },
	{ 0x7b2a3329, "d_instantiate" },
	{ 0x3d9f08f7, "clear_nlink" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D01692F7EFF184FED923163");
