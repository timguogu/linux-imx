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
	{ 0x7f840a63, "bus_register" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3253c2d, "driver_register" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53303def, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5f754e5a, "memset" },
	{ 0xa7ff549e, "device_del" },
	{ 0xbb0b173a, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2a892a29, "kthread_stop" },
	{ 0xe21f5931, "kernfs_find_and_get_ns" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3a3ce35c, "device_add" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x7473de02, "bus_unregister" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xd9c1602a, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x86eaa789, "wake_up_process" },
	{ 0x74fe5346, "kernfs_notify" },
	{ 0x7aebaebe, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x35a8b7d9, "device_initialize" },
	{ 0x2ddb995d, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc471e14b, "dev_set_name" },
	{ 0x421d4dcf, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9410008010B6589756BF330");
