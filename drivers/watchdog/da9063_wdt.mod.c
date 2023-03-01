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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x765c6c82, "devm_watchdog_register_device" },
	{ 0x459d03d8, "regmap_read" },
	{ 0x5fee57ad, "watchdog_init_timeout" },
	{ 0xc17fcff, "watchdog_set_restart_priority" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2def6ef0, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x62e9ca81, "_dev_alert" },
	{ 0xbdaa032a, "regmap_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AE165FD735F208D760ACAD8");
