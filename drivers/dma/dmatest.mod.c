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
	{ 0x824c5af3, "param_ops_string" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x99fb4719, "param_ops_uint" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c9f0a4e, "dma_sync_wait" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xf7d915e5, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdced730, "dmaengine_unmap_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7b9121c0, "dma_direct_map_page" },
	{ 0x7604f862, "mem_map" },
	{ 0x57a3c8f4, "dmaengine_get_unmap_data" },
	{ 0x5e866d85, "prandom_bytes" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66e2a80d, "arm_dma_ops" },
	{ 0x28e6a97f, "set_user_nice" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1c7c2f60, "param_set_bool" },
	{ 0x3ee3cd48, "param_get_string" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xce747b10, "param_set_copystring" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x777d7463, "__put_task_struct" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2a892a29, "kthread_stop" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x77bc13a0, "strim" },
	{ 0x3913d29e, "dma_release_channel" },
	{ 0xdcf40ef1, "__dma_request_channel" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x53303def, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x86eaa789, "wake_up_process" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x708c3aad, "param_get_bool" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "582191CCEC53E7DDDFAD341");
