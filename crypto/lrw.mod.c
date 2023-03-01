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
	{ 0x3b47d855, "crypto_skcipher_decrypt" },
	{ 0x2c147c34, "crypto_skcipher_encrypt" },
	{ 0xc98f5278, "skcipher_register_instance" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xaed67f3a, "crypto_drop_spawn" },
	{ 0xea3edb88, "crypto_inst_setname" },
	{ 0x165a74bb, "crypto_grab_skcipher" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xc3f0be9e, "crypto_spawn_tfm2" },
	{ 0x98e8d5a1, "crypto_destroy_tfm" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x125475d3, "skcipher_walk_done" },
	{ 0x6bdb736c, "skcipher_walk_virt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6329594E1368EA718E8763F");
