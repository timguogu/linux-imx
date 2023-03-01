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
	{ 0x58be0f1d, "kmem_cache_destroy" },
	{ 0x26aff395, "iget_failed" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7424a407, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x890ff8f3, "unload_nls" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xb80c139f, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xdb881102, "page_address" },
	{ 0x5cc7ac3e, "iget5_locked" },
	{ 0x5d12269b, "from_kuid_munged" },
	{ 0x988465fb, "seq_puts" },
	{ 0x9abf1749, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x338fb689, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x453bd2da, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x76db5c0b, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3577aa92, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x60372e73, "page_symlink_inode_operations" },
	{ 0xdbc2e77b, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x64b6a970, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf176c663, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3eda3fd, "from_kgid_munged" },
	{ 0x925545a9, "make_kgid" },
	{ 0x194110c0, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0x195cea32, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xfd2e5bca, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x82b3e71f, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b13e940, "kunmap" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0x82042299, "kmem_cache_free" },
	{ 0xbcc62572, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf7aa3e7a, "__wait_on_buffer" },
	{ 0xdd27fa87, "memchr" },
	{ 0x44c89be1, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x1df4e497, "unlock_page" },
	{ 0x9bb4acd4, "inode_nohighmem" },
	{ 0x11aa14d1, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xd8c0a173, "inode_init_once" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x2279b620, "__free_pages" },
	{ 0xf71ab476, "kmap" },
	{ 0xea77c300, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x9336a442, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x6e585380, "unlock_new_inode" },
	{ 0xb80008fa, "kill_block_super" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xcc988ae3, "kmem_cache_create" },
	{ 0xf89f7c7a, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x30a80030, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x56be5dbf, "load_nls_default" },
	{ 0x670f3bde, "d_splice_alias" },
	{ 0x9bfdb750, "sync_filesystem" },
	{ 0x3a56ea75, "sb_set_blocksize" },
	{ 0xa757e054, "d_make_root" },
	{ 0x56e0477c, "ioctl_by_bdev" },
	{ 0x546474dc, "unregister_filesystem" },
	{ 0x1c894f87, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x93e40c9e, "flush_dcache_page" },
	{ 0xdfe96a64, "__put_page" },
	{ 0x983357a, "generic_block_bmap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFE935A48F43241EC039673");
