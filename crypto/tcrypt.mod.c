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
	{ 0x83246544, "param_ops_charp" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x99fb4719, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0x238c0326, "crypto_ahash_final" },
	{ 0xf372fa5, "crypto_ahash_setkey" },
	{ 0x4645ba67, "crypto_alloc_ahash" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x10a131ff, "crypto_alloc_skcipher" },
	{ 0x3b47d855, "crypto_skcipher_decrypt" },
	{ 0x2c147c34, "crypto_skcipher_encrypt" },
	{ 0xc85eb802, "crypto_ahash_digest" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0xee45b3f8, "crypto_aead_decrypt" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb8b0cf29, "crypto_aead_encrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x908c106c, "crypto_aead_setauthsize" },
	{ 0x3c80e980, "crypto_aead_setkey" },
	{ 0x5f754e5a, "memset" },
	{ 0x904ddd74, "crypto_req_done" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb2235012, "crypto_alloc_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x7604f862, "mem_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "71F32854A1CF537AF0CFF84");
