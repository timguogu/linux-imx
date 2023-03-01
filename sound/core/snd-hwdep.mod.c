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
	{ 0x521153f2, "snd_register_device" },
	{ 0x804c0059, "snd_card_file_remove" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x52bce8de, "snd_device_initialize" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x453bd2da, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x29b7b261, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0xf626dc80, "snd_device_new" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3772c586, "snd_unregister_device" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x534d0e7f, "module_put" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xce085da3, "snd_card_file_add" },
	{ 0x3bac9580, "snd_ctl_register_ioctl" },
	{ 0xd9c1602a, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc969520, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc471e14b, "dev_set_name" },
	{ 0x88cb0982, "snd_info_create_module_entry" },
	{ 0x21bf5cb, "snd_info_register" },
	{ 0x998ae3d7, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E59AA411BA69B20270C7426");
