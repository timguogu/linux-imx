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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68002c15, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0x47c2135b, "i2c_smbus_read_byte_data" },
	{ 0xa2eb85db, "i2c_del_driver" },
	{ 0x314600cc, "regulator_disable" },
	{ 0xc136b48e, "pinctrl_select_state" },
	{ 0xf56f9701, "i2c_smbus_write_byte_data" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfa1c9097, "devm_pinctrl_get" },
	{ 0xc788dc92, "gpio_to_desc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfd80fad2, "pinctrl_lookup_state" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x96a5a270, "v4l2_int_device_register" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x83b92055, "v4l2_int_device_unregister" },
	{ 0x41f58cec, "devm_gpio_request_one" },
	{ 0x3990444d, "i2c_register_driver" },
	{ 0xe1376b8d, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfcc354a3, "of_get_named_gpio_flags" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0x8dfeab0c, "devm_pinctrl_put" },
	{ 0x9d669763, "memcpy" },
	{ 0xbe3a8724, "gpiod_set_raw_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0x1c0a75df, "regulator_enable" },
};

MODULE_INFO(depends, "v4l2-int-device");

MODULE_ALIAS("of:N*T*Cadv,adv7180");
MODULE_ALIAS("of:N*T*Cadv,adv7180C*");
MODULE_ALIAS("i2c:adv7180");

MODULE_INFO(srcversion, "6EE7175DEFA76BE5021F274");
