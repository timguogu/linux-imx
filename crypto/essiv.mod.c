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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0x7604f862, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0xb8b0cf29, "crypto_aead_encrypt" },
	{ 0xee45b3f8, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x2c147c34, "crypto_skcipher_encrypt" },
	{ 0xd17295d4, "aead_register_instance" },
	{ 0xc5850110, "printk" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x84b183ae, "strncmp" },
	{ 0x12dae21d, "crypto_grab_aead" },
	{ 0xc98f5278, "skcipher_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x487c7deb, "crypto_mod_put" },
	{ 0x78d72651, "shash_no_setkey" },
	{ 0x91cfc5aa, "crypto_alg_mod_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0x165a74bb, "crypto_grab_skcipher" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xfdb61b32, "crypto_shash_digest" },
	{ 0x3c80e980, "crypto_aead_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4954b3d, "crypto_shash_finup" },
	{ 0xf69100cc, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaed67f3a, "crypto_drop_spawn" },
	{ 0x3b47d855, "crypto_skcipher_decrypt" },
	{ 0x908c106c, "crypto_aead_setauthsize" },
	{ 0xc3f0be9e, "crypto_spawn_tfm2" },
	{ 0x7b8d7596, "crypto_alloc_shash" },
	{ 0xf96389e7, "crypto_alloc_base" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "075FFB328395C9565264369");
