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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ef6f03f, "device_remove_file" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x483ecf92, "device_add_groups" },
	{ 0xdf29b709, "dev_printk" },
	{ 0x416dd848, "serio_unregister_driver" },
	{ 0x22b11570, "ps2_handle_ack" },
	{ 0xb88c66be, "ps2_sendbyte" },
	{ 0xfdf474b, "ps2_handle_response" },
	{ 0xb7d7ca45, "input_mt_report_finger_count" },
	{ 0xc53813e, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcc5b975, "ps2_end_command" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xe78e410c, "i2c_for_each_dev" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5050f43a, "i2c_verify_adapter" },
	{ 0x85df9b6c, "strsep" },
	{ 0xeeaecc43, "serio_interrupt" },
	{ 0x933a674c, "i2c_new_probed_device" },
	{ 0x2dffa22f, "_dev_notice" },
	{ 0x768f3934, "ps2_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x95309f50, "input_mt_report_pointer_emulation" },
	{ 0x80240ac0, "input_set_abs_params" },
	{ 0x2e40ee66, "input_event" },
	{ 0xc45e9460, "serio_unregister_child_port" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x46fb8153, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7fa9a2cd, "__serio_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf70f7fdd, "i2c_bus_type" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x82e6c850, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x51fd6a4b, "input_mt_init_slots" },
	{ 0xaca45ea1, "serio_close" },
	{ 0x9d897bd5, "i2c_unregister_device" },
	{ 0x60cc91b3, "serio_open" },
	{ 0x6a98d182, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x49f26466, "kstrndup" },
	{ 0xb6635523, "device_create_file" },
	{ 0xde3a42e2, "i2c_adapter_type" },
	{ 0xc32ef8d1, "_dev_info" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x4c47d3de, "bus_register_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4bf749d7, "ps2_command" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1011644, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6ee130b9, "pm_wakeup_dev_event" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa1af565, "ps2_sliced_command" },
	{ 0x785de735, "input_free_device" },
	{ 0x326dad4e, "input_mt_drop_unused" },
	{ 0xda21df2f, "ps2_init" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x3600715d, "serio_reconnect" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xac89b28b, "__serio_register_port" },
	{ 0xe4999e50, "device_remove_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xcfb12044, "input_unregister_device" },
	{ 0xa9b39db0, "serio_rescan" },
	{ 0x9035b2d3, "input_mt_report_slot_state" },
	{ 0xae48a663, "ps2_cmd_aborted" },
	{ 0x49970de8, "finish_wait" },
	{ 0x46d69452, "input_mt_sync_frame" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0876dc6, "i2c_client_type" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xbb3540ff, "bus_unregister_notifier" },
	{ 0x99fb4719, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4db316da, "ps2_begin_command" },
	{ 0x5adece4e, "input_mt_assign_slots" },
	{ 0x8806f625, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "EF6332C64CB29C227970B66");
