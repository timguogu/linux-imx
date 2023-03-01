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
	{ 0xc168978f, "vb2_ioctl_reqbufs" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x6d0abbb7, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5f86da3, "video_device_release_empty" },
	{ 0x3ed74291, "param_ops_int" },
	{ 0x8d3ea39e, "v4l2_device_unregister" },
	{ 0x5370efbf, "v4l2_ctrl_handler_free" },
	{ 0xf234dd6a, "v4l2_ctrl_g_ctrl" },
	{ 0x321e4a69, "vb2_fop_poll" },
	{ 0x6097406e, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4298b6f7, "usb_kill_urb" },
	{ 0x7c12ba01, "vb2_ops_wait_prepare" },
	{ 0xef494349, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x7070fbb3, "v4l2_device_register" },
	{ 0x2e49dcec, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x3c366707, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x164359c2, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x655b911c, "vb2_fop_mmap" },
	{ 0x60a45433, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa4056ff5, "video_unregister_device" },
	{ 0x1e3f6a38, "usb_set_interface" },
	{ 0x8314194e, "v4l2_ctrl_subscribe_event" },
	{ 0xf15ac8f2, "vb2_plane_vaddr" },
	{ 0x537795a7, "vb2_buffer_done" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x84ed77cd, "vb2_ioctl_create_bufs" },
	{ 0xa3db544c, "usb_free_coherent" },
	{ 0x81c70c02, "vb2_ioctl_dqbuf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf371cf8c, "__v4l2_ctrl_s_ctrl" },
	{ 0x489cd72a, "usb_submit_urb" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0x167f1369, "vb2_fop_release" },
	{ 0xaa6e85e6, "vb2_queue_error" },
	{ 0x13a3e6aa, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1011644, "input_register_device" },
	{ 0xe0f5cd2c, "v4l2_ctrl_handler_setup" },
	{ 0xbdc88a8, "usb_clear_halt" },
	{ 0x785de735, "input_free_device" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x575ea63d, "v4l2_fh_open" },
	{ 0xfd107c58, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xcfb12044, "input_unregister_device" },
	{ 0xa21d4ee2, "vb2_ops_wait_finish" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x590fe176, "usb_ifnum_to_if" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf2c9d926, "vb2_ioctl_expbuf" },
	{ 0xa8ba8062, "usb_alloc_coherent" },
	{ 0x5e0a98aa, "vb2_ioctl_streamoff" },
	{ 0x88a25dc9, "v4l2_device_put" },
	{ 0x113daa0b, "usb_free_urb" },
	{ 0x36bcd458, "video_ioctl2" },
	{ 0x298eb48, "usb_alloc_urb" },
	{ 0x8806f625, "input_allocate_device" },
	{ 0xd7207e67, "vb2_queue_init" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "622BE485A3666FE37396CA5");
