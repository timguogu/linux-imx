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
	{ 0x860d3d84, "v4l2_event_subdev_unsubscribe" },
	{ 0xa2eb85db, "i2c_del_driver" },
	{ 0x3990444d, "i2c_register_driver" },
	{ 0xce52d97d, "v4l2_subdev_notify_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47c2135b, "i2c_smbus_read_byte_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdb1b512a, "v4l2_async_register_subdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb93540eb, "media_entity_pads_init" },
	{ 0xe0f5cd2c, "v4l2_ctrl_handler_setup" },
	{ 0xe866ea3c, "v4l2_ctrl_new_custom" },
	{ 0x4e91c24, "v4l2_ctrl_new_std" },
	{ 0xaf8f15c7, "v4l2_ctrl_handler_init_class" },
	{ 0x87b07fa0, "v4l2_i2c_subdev_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x103df5c1, "i2c_new_dummy_device" },
	{ 0xc8a17155, "devm_gpiod_get_optional" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5cf62424, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x275f4802, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x62f15fe1, "gpiod_set_value_cansleep" },
	{ 0x9d897bd5, "i2c_unregister_device" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x315ff2bf, "v4l2_async_unregister_subdev" },
	{ 0xf56f9701, "i2c_smbus_write_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,adv7180");
MODULE_ALIAS("of:N*T*Cadi,adv7180C*");
MODULE_ALIAS("of:N*T*Cadi,adv7180cp");
MODULE_ALIAS("of:N*T*Cadi,adv7180cpC*");
MODULE_ALIAS("of:N*T*Cadi,adv7180st");
MODULE_ALIAS("of:N*T*Cadi,adv7180stC*");
MODULE_ALIAS("of:N*T*Cadi,adv7182");
MODULE_ALIAS("of:N*T*Cadi,adv7182C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280");
MODULE_ALIAS("of:N*T*Cadi,adv7280C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280-m");
MODULE_ALIAS("of:N*T*Cadi,adv7280-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281");
MODULE_ALIAS("of:N*T*Cadi,adv7281C*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-m");
MODULE_ALIAS("of:N*T*Cadi,adv7281-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-ma");
MODULE_ALIAS("of:N*T*Cadi,adv7281-maC*");
MODULE_ALIAS("of:N*T*Cadi,adv7282");
MODULE_ALIAS("of:N*T*Cadi,adv7282C*");
MODULE_ALIAS("of:N*T*Cadi,adv7282-m");
MODULE_ALIAS("of:N*T*Cadi,adv7282-mC*");
MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "6D42648BE83D463CC2FFE9B");
