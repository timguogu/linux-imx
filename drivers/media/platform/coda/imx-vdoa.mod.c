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
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd8d62af2, "devm_ioremap_resource" },
	{ 0x79d256c8, "dma_set_coherent_mask" },
	{ 0x4ac8f4a1, "__platform_driver_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0xa13e1f8a, "platform_get_resource" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcf498ebc, "devm_clk_get" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe6c12171, "complete" },
	{ 0x609907a8, "platform_driver_unregister" },
	{ 0x4cfc79f5, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xd4dc2678, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx6q-vdoa");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-vdoaC*");

MODULE_INFO(srcversion, "C587D4DB14CA9AC863908E2");
