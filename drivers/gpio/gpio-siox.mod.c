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
	{ 0xb0e6f6d1, "driver_unregister" },
	{ 0xd52a194c, "__siox_driver_register" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xf59fe5c6, "devm_gpiochip_add_data" },
	{ 0xc48e7d97, "handle_level_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x1118988b, "irq_find_mapping" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
};

MODULE_INFO(depends, "siox-core");


MODULE_INFO(srcversion, "339F4E248E02F126EAD8F55");
