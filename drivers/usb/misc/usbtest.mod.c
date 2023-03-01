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
	{ 0x3ed74291, "param_ops_int" },
	{ 0x99fb4719, "param_ops_uint" },
	{ 0x87719408, "param_ops_ushort" },
	{ 0xa536945f, "usb_deregister" },
	{ 0x752095cc, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x75cc14ad, "usb_get_descriptor" },
	{ 0x7604f862, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xbdc88a8, "usb_clear_halt" },
	{ 0xdb881102, "page_address" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4f22d6f9, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa8ba8062, "usb_alloc_coherent" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x19a0e3f1, "usb_get_status" },
	{ 0x4298b6f7, "usb_kill_urb" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0xa3db544c, "usb_free_coherent" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x135184bc, "usb_unlink_urb" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0xe6c12171, "complete" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x979b568a, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x29d1d212, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5f754e5a, "memset" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x81075a10, "usb_sg_cancel" },
	{ 0x1e3f6a38, "usb_set_interface" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6a98d182, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B5D323345D0984F095827E");
