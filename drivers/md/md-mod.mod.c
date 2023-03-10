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
	{ 0x22f8c1ca, "kobject_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d983c43, "fs_bio_set" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x7a1332f9, "kobject_get" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe569f4be, "__bdevname" },
	{ 0xe5c461de, "submit_bio_wait" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6dc2d72f, "blk_cleanup_queue" },
	{ 0x7410aba2, "strreplace" },
	{ 0x9385a4ac, "bio_alloc_bioset" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x5959b795, "badblocks_store" },
	{ 0x48cb057c, "register_sysctl_table" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xb502b396, "bmap" },
	{ 0x1ec58047, "badblocks_clear" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xdb881102, "page_address" },
	{ 0x3285b552, "seq_open" },
	{ 0x5f25155f, "bdev_read_only" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x6d0b8c5e, "percpu_ref_switch_to_atomic_sync" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x913d6cf3, "bd_link_disk_holder" },
	{ 0xc4928eab, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb00b76bc, "blk_queue_split" },
	{ 0x453bd2da, "seq_printf" },
	{ 0xa83786f2, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xfb336634, "mempool_destroy" },
	{ 0x17adc83a, "kernfs_put" },
	{ 0x62892788, "file_path" },
	{ 0x3a04a725, "bioset_init" },
	{ 0xed89a139, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc249e391, "vfs_fsync" },
	{ 0x866aed9a, "kobject_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xba79db90, "revalidate_disk" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x77b8cc3d, "seq_read" },
	{ 0xf176c663, "__alloc_pages_nodemask" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x53303def, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x240e0fda, "__alloc_disk_node" },
	{ 0x8ef69f5a, "invalidate_bdev" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9165aef3, "kmap_atomic" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xb14584ae, "bd_unlink_disk_holder" },
	{ 0x4e63f56, "blk_alloc_queue" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6b5a83a0, "blk_set_stacking_limits" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x83366e4, "check_disk_change" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2a892a29, "kthread_stop" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0xcd29e7e1, "del_gendisk" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x8d404617, "bio_add_page" },
	{ 0x1af267f8, "int_pow" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc2d1acb8, "blk_register_region" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe21f5931, "kernfs_find_and_get_ns" },
	{ 0xd5747032, "seq_file_path" },
	{ 0x58af1e71, "blk_sync_queue" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8665230b, "percpu_ref_switch_to_percpu" },
	{ 0x77e3e66d, "blkdev_get_by_dev" },
	{ 0x279a0016, "sysfs_remove_link" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdce4c7a8, "kobject_add" },
	{ 0xa71033bb, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2263b2de, "bio_endio" },
	{ 0xf1ec5c47, "bio_put" },
	{ 0x1d747f5, "percpu_ref_exit" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xcb3e1a91, "flush_signals" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x6d78abf5, "bioset_exit" },
	{ 0x6afb110d, "sysfs_create_link" },
	{ 0x3f0faa1e, "blk_queue_flag_clear" },
	{ 0x534d0e7f, "module_put" },
	{ 0xcc9c6aed, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xa672a25a, "blkdev_put" },
	{ 0x81a6091c, "blk_queue_flag_set" },
	{ 0x1ebc0a88, "free_buffer_head" },
	{ 0x704dac49, "bdevname" },
	{ 0x74871570, "sync_blockdev" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x855778cb, "blk_queue_make_request" },
	{ 0x34da5dbf, "badblocks_show" },
	{ 0x3d52fb7f, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xe0e15fa8, "badblocks_init" },
	{ 0xc68261da, "put_disk" },
	{ 0xbfdf7bc3, "mempool_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xbbc77a6a, "sysfs_notify" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x86eaa789, "wake_up_process" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x7df2620c, "submit_bh" },
	{ 0x74fe5346, "kernfs_notify" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x7d63bb5e, "ack_all_badblocks" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6abf20da, "blk_queue_write_cache" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x4eaf20c9, "seq_lseek" },
	{ 0x650ce347, "badblocks_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x607e57a8, "kobject_init" },
	{ 0x6fb17325, "invalidate_mapping_pages" },
	{ 0x492d7842, "fget" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6d6b8da4, "badblocks_set" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc79c8874, "percpu_ref_init" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xbea27618, "device_add_disk" },
	{ 0xaea252f0, "seq_release" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x1f471a95, "proc_create" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xf800c795, "alloc_page_buffers" },
	{ 0xdfe96a64, "__put_page" },
	{ 0x998ae3d7, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x205c59f0, "set_disk_ro" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8CD73A90DE34B049AE7E6CB");
