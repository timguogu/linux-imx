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
	{ 0x2ffaf1b8, "crypto_unregister_template" },
	{ 0x83a12531, "crypto_register_template" },
	{ 0xfffa3100, "sg_next" },
	{ 0x7604f862, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x5f754e5a, "memset" },
	{ 0xd17295d4, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xaed67f3a, "crypto_drop_spawn" },
	{ 0x165a74bb, "crypto_grab_skcipher" },
	{ 0x487c7deb, "crypto_mod_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2cd708, "crypto_init_ahash_spawn" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd8eaf077, "ahash_attr_alg" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xa1ecbe2e, "crypto_get_default_null_skcipher" },
	{ 0xc3f0be9e, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
	{ 0xf372fa5, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x71c90087, "memcmp" },
	{ 0xdb881102, "page_address" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x3b47d855, "crypto_skcipher_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2c147c34, "crypto_skcipher_encrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xc85eb802, "crypto_ahash_digest" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe6c12171, "complete" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35FF6DCC0B98DDBE8815CA9");
