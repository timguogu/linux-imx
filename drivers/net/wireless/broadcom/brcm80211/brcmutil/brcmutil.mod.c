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
	{ 0xf5262c5, "skb_queue_head" },
	{ 0x891a2750, "__dev_kfree_skb_any" },
	{ 0x31370c0f, "skb_unlink" },
	{ 0xbc89799, "__netdev_alloc_skb" },
	{ 0x690a309e, "skb_dequeue_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xe7106cc5, "skb_queue_tail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xad32faef, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x68cd7016, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3F119D70FB75A37C52A13E");
