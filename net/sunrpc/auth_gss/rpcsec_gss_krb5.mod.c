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
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x7b8d7596, "crypto_alloc_shash" },
	{ 0x4e0d08e0, "write_bytes_to_xdr_buf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0xa7ed8cb1, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x238c0326, "crypto_ahash_final" },
	{ 0x3681be30, "crypto_alloc_sync_skcipher" },
	{ 0xc85eb802, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x34128058, "xdr_buf_subsegment" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9165aef3, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xfdb61b32, "crypto_shash_digest" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x886e12a5, "crypto_shash_setkey" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x3b47d855, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
	{ 0x8e6d64f9, "gss_mech_unregister" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf372fa5, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0x116b5182, "read_bytes_from_xdr_buf" },
	{ 0xcab66449, "xdr_process_buf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x36b0d3ac, "xdr_buf_trim" },
	{ 0x4645ba67, "crypto_alloc_ahash" },
	{ 0x2c147c34, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "55531641D7A5F85C8F372BE");
