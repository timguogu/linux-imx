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
	{ 0x1f2a6ae2, "__pm_runtime_idle" },
	{ 0x1c4a8b97, "irq_of_parse_and_map" },
	{ 0x11f7f448, "sdio_writesb" },
	{ 0x9f65bb18, "sdio_enable_func" },
	{ 0x160b81f6, "mmc_hw_reset" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0xaec71a7c, "__pm_runtime_resume" },
	{ 0xf68e005f, "sdio_get_host_pm_caps" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x46369794, "of_match_node" },
	{ 0x496ab3ea, "platform_device_alloc" },
	{ 0xc0f50579, "platform_device_add" },
	{ 0x6dd11e5e, "irq_get_irq_data" },
	{ 0x2764b036, "platform_device_unregister" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x55d9f858, "sdio_readsb" },
	{ 0xd8cb70cd, "sdio_unregister_driver" },
	{ 0xfb58a99f, "platform_device_add_resources" },
	{ 0x63f1faaa, "sdio_f0_writeb" },
	{ 0x6c74fef1, "sdio_set_host_pm_flags" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9613dfb, "sdio_f0_readb" },
	{ 0xeee68345, "platform_device_add_data" },
	{ 0x7f5ebab9, "sdio_memcpy_toio" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xccc5aed0, "sdio_register_driver" },
	{ 0x37466953, "sdio_memcpy_fromio" },
	{ 0x95e353f5, "sdio_claim_host" },
	{ 0x5366760c, "of_property_read_variable_u32_array" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0x281e6357, "sdio_set_block_size" },
	{ 0x338294fa, "sdio_disable_func" },
	{ 0xecf2b6ac, "sdio_release_host" },
	{ 0x4a29550d, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "67EE4BCE7BAF9BDFA932AD8");
