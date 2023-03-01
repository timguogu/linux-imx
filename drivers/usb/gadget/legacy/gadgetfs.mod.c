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
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0xb2774c26, "get_tree_single" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0x7d57c16d, "no_llseek" },
	{ 0x2cfb7ad6, "generic_delete_inode" },
	{ 0x94012388, "dput" },
	{ 0x5dc98d53, "dup_iter" },
	{ 0x76db5c0b, "init_user_ns" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6f891359, "d_add" },
	{ 0x9232c06c, "usb_ep_set_halt" },
	{ 0xe89887bc, "usb_gadget_unregister_driver" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb3a4d003, "usb_gadget_set_state" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x670175ec, "d_delete" },
	{ 0x925545a9, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x335d2897, "kill_litter_super" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x328a05f1, "strncpy" },
	{ 0xdd856a75, "fasync_helper" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x4750e85c, "usb_ep_clear_halt" },
	{ 0xa1539bcf, "use_mm" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbbbb2921, "usb_ep_dequeue" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x80246cdb, "usb_gadget_vbus_draw" },
	{ 0x602e0449, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0xea77c300, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x17be2c64, "_copy_from_iter_full" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5ff1e64f, "kiocb_set_cancel_fn" },
	{ 0xf89f7c7a, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7677f83f, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xf788b6a2, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x78c81bd3, "current_time" },
	{ 0xa757e054, "d_make_root" },
	{ 0xbd3333bc, "kill_fasync" },
	{ 0x762c88c5, "simple_statfs" },
	{ 0x2b7cd7cb, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0x546474dc, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x8b79b5f8, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x7417dbd8, "unuse_mm" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xcbfc50b, "usb_ep_fifo_flush" },
	{ 0x9596f990, "simple_dir_inode_operations" },
	{ 0x99fb4719, "param_ops_uint" },
	{ 0xef34f612, "_copy_to_iter" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1130B5EBA94CF3A5BD1F7E9");
