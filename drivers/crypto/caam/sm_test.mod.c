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
	{ 0x7295901f, "sm_keystore_slot_export" },
	{ 0x5f754e5a, "memset" },
	{ 0xa5e9ab6, "sm_keystore_slot_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x22f22370, "sm_keystore_slot_dealloc" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x819790a, "sm_keystore_slot_load" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x521499d4, "of_find_compatible_node" },
	{ 0xb7c913b0, "sm_keystore_cover_key" },
	{ 0x6e560f26, "sm_release_keystore" },
	{ 0x3ea80792, "sm_keystore_slot_alloc" },
	{ 0x1e153b23, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xf341f439, "sm_keystore_slot_import" },
	{ 0x6d4008ec, "sm_establish_keystore" },
	{ 0xb2da496e, "sm_detect_keystore_units" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe4359ed5, "of_find_device_by_node" },
	{ 0x459fd1bf, "of_node_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE2CF6E92DCF722D82E9279");
