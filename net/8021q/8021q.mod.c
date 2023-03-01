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
	{ 0x98b79229, "register_netdevice" },
	{ 0x898c397a, "kmalloc_caches" },
	{ 0x9211869f, "dev_change_flags" },
	{ 0xfc384762, "vlan_filter_push_vids" },
	{ 0x16d122ee, "dev_mc_unsync" },
	{ 0xb033a410, "vlan_filter_drop_vids" },
	{ 0xc9a1df26, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8749e50, "proc_create_single_data" },
	{ 0x45acc7eb, "vlan_dev_vlan_id" },
	{ 0x847ccbe8, "dev_uc_add" },
	{ 0x988465fb, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbc8cfc76, "vlan_uses_dev" },
	{ 0x157cdee, "netif_carrier_on" },
	{ 0x453bd2da, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x277d9133, "netif_carrier_off" },
	{ 0xa83786f2, "remove_proc_entry" },
	{ 0x912feba7, "dev_set_allmulti" },
	{ 0x770ee795, "vlan_vid_del" },
	{ 0xf07110c2, "call_netdevice_notifiers" },
	{ 0x343caff6, "linkwatch_fire_event" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xfc1a45d1, "vlan_vid_add" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x6d3198aa, "proc_remove" },
	{ 0xa9f2c44a, "vlan_ioctl_set" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xd76f90c2, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2fa5c89e, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xa233454a, "ethtool_op_get_link" },
	{ 0x4025fd3f, "ns_capable" },
	{ 0x7e8a8ea6, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x716b58c8, "nla_put" },
	{ 0x1683dfb, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xffc59f7b, "skb_push" },
	{ 0x5e78cc80, "proc_mkdir_data" },
	{ 0x91b84bf5, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6a745db7, "init_net" },
	{ 0xc2456683, "rtnl_link_unregister" },
	{ 0x6aeaa70d, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x4ebe3883, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d9bf35a, "eth_header_parse" },
	{ 0x84141260, "alloc_netdev_mqs" },
	{ 0xee7a3d29, "register_pernet_subsys" },
	{ 0xe039020b, "netdev_upper_dev_link" },
	{ 0xbdab5c0b, "proc_create_net_data" },
	{ 0xbfcc7a35, "ether_setup" },
	{ 0x7d8e9d3f, "dev_uc_unsync" },
	{ 0x10c750cb, "__dev_get_by_name" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x7097ed70, "unregister_netdevice_queue" },
	{ 0x1b6a677, "netdev_warn" },
	{ 0xf6463813, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3befca1f, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x176e5d7d, "rtnl_link_register" },
	{ 0xb784bf23, "dev_uc_del" },
	{ 0xea4a26cb, "dev_uc_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0xf23b613d, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9c0acb6c, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6ab68aa2, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbc852d97, "dev_get_stats" },
	{ 0x2c2d1260, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "06DF92B5F44C1A6B2108DA1");
