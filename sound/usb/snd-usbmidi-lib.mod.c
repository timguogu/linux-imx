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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x6772acb2, "module_layout" },
	{ 0x29fda091, "snd_rawmidi_proceed" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xa7b3181c, "up_read" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4298b6f7, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe04eb9da, "snd_rawmidi_set_ops" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x312eaa50, "snd_rawmidi_new" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1e3f6a38, "usb_set_interface" },
	{ 0x3f383af0, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x413d470d, "usb_control_msg" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa686cd3f, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa3db544c, "usb_free_coherent" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3bb1918b, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x23840a6, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x61b7b264, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xddb5050a, "snd_ctl_new1" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x55056625, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa8ba8062, "usb_alloc_coherent" },
	{ 0x707162a5, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x5a2316b5, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xb5359278, "snd_rawmidi_receive" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8402B455147062C747AE001");
