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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x5e6bdff6, "crypto_ablkcipher_type" },
	{ 0x1a4af81b, "sg_nents" },
	{ 0x7d11ace4, "crypto_engine_alloc_init" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0xd5a5939, "cpu_topology" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x688917f6, "virtqueue_kick" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x8dda2175, "virtqueue_get_buf" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x663a102a, "virtio_break_device" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x77b6e7bc, "virtqueue_add_sgs" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x34c5833, "crypto_engine_start" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0x379c6874, "virtqueue_disable_cb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe75625fb, "cpu_bit_bitmap" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x25705f96, "crypto_finalize_ablkcipher_request" },
	{ 0x534d0e7f, "module_put" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x1cde087f, "crypto_transfer_ablkcipher_request_to_engine" },
	{ 0xc4d1b43f, "unregister_virtio_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9eb95140, "crypto_register_alg" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x14f7de17, "crypto_engine_exit" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x768aa78c, "virtqueue_is_broken" },
	{ 0xe6b4d6e3, "virtqueue_detach_unused_buf" },
	{ 0x81222d78, "crypto_unregister_alg" },
	{ 0xbc5ed15d, "virtqueue_enable_cb" },
	{ 0x998ae3d7, "try_module_get" },
	{ 0x694b1721, "register_virtio_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000014v*");

MODULE_INFO(srcversion, "AA8199DEC57616E25370B76");
