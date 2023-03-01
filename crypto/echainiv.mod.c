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
	{ 0xd17295d4, "aead_register_instance" },
	{ 0xd3892986, "aead_exit_geniv" },
	{ 0xf55a3962, "aead_init_geniv" },
	{ 0xa17e8c83, "aead_geniv_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b0cf29, "crypto_aead_encrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0x2c147c34, "crypto_skcipher_encrypt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xee45b3f8, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5a32e2df, "aead_geniv_free" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "200E51542A01AF555F4D0F0");
