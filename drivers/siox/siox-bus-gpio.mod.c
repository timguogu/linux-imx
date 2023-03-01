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
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0x1a089c8a, "gpiod_get_value_cansleep" },
	{ 0x62f15fe1, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd9c1602a, "put_device" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xf39755e4, "siox_master_register" },
	{ 0x1f64f70e, "devm_gpiod_get" },
	{ 0x768dad7, "siox_master_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2044b75, "siox_master_unregister" },
};

MODULE_INFO(depends, "siox-core");

MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpio");
MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpioC*");

MODULE_INFO(srcversion, "8293261D488F132994C9C85");
