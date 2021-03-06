#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_DTRACE
# include "iomemory-vsl.sdtinfo.c"
#endif

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
#ifdef CONFIG_DTRACE
	.sdt_probes = _sdt_probes,
	.num_dtrace_probes = _sdt_probec,
#endif
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x17256893, "module_layout" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x1abed58d, "alloc_pages_current" },
	{ 0xd2cab314, "kmem_cache_destroy" },
	{ 0x698f4aa9, "kmem_cache_alloc_node" },
	{ 0xb914111a, "pci_bus_read_config_byte" },
	{ 0x65e75cb6, "__list_del_entry" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x4d8499ae, "blk_delay_queue" },
	{ 0x7b940f55, "node_to_cpumask_map" },
	{ 0x5a61f0a1, "alloc_disk" },
	{ 0xf5893abf, "up_read" },
	{ 0x6c8072e9, "blk_cleanup_queue" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0x542f1bab, "single_open" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x691001b5, "acpi_evaluate_integer" },
	{ 0xaf7b7eb5, "dev_set_drvdata" },
	{ 0x5a046ac1, "blk_queue_max_hw_sectors" },
	{ 0x9c01c92c, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x950ffff2, "cpu_online_mask" },
	{ 0x34184afe, "current_kernel_time" },
	{ 0xa27dbcb4, "dma_set_mask" },
	{ 0xcc37f55c, "blk_limits_io_opt" },
	{ 0x41e62300, "malloc_sizes" },
	{ 0x1805e1b9, "blk_queue_bounce" },
	{ 0x4d974b9c, "register_sysrq_key" },
	{ 0xc35babe5, "pci_disable_device" },
	{ 0x8ed9b76a, "pci_disable_msix" },
	{ 0x9b0c8220, "_raw_read_lock" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9723c3dc, "blk_dump_rq_flags" },
	{ 0x29aaae17, "schedule_work" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x603c9bdc, "remove_proc_entry" },
	{ 0x3fec048f, "sg_next" },
	{ 0xe6beb235, "x86_dma_fallback_dev" },
	{ 0x30fcd0f8, "pci_release_regions" },
	{ 0x593a99b, "init_timer_key" },
	{ 0xf8983de7, "prepare_to_wait_exclusive" },
	{ 0x150d6bc1, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x8b2db46c, "pci_bus_write_config_word" },
	{ 0x54efb5d6, "cpu_number" },
	{ 0x3eaed70b, "seq_read" },
	{ 0x55aabba2, "blk_alloc_queue_node" },
	{ 0x754dac78, "blk_limits_io_min" },
	{ 0x54866566, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x8a42e9e2, "mutex_trylock" },
	{ 0x57a6ccd0, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x35225ea3, "down_write_trylock" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0x967b7ba5, "kthread_bind" },
	{ 0x66e56394, "invalidate_bdev" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0x71de9b3f, "_copy_to_user" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xeb0a8f56, "blk_queue_max_segments" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x422e757f, "pci_set_master" },
	{ 0xbdf072b4, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xd9c3796a, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0x159ec46d, "proc_mkdir" },
	{ 0x6fd4ecf3, "pci_enable_msix" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0xab1ec61, "current_task" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x8dfc55a3, "__mutex_init" },
	{ 0xe15f42bb, "_raw_spin_trylock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x45f57e66, "blk_queue_max_discard_sectors" },
	{ 0x7c05c8d0, "del_gendisk" },
	{ 0x7580bd3d, "blk_peek_request" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xbb394737, "elevator_exit" },
	{ 0x5a921311, "strncmp" },
	{ 0xbf8ba54a, "vprintk" },
	{ 0x6ef56bc, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2c356434, "pci_bus_write_config_dword" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2c06e276, "mutex_lock" },
	{ 0x13a1a61a, "_raw_write_lock" },
	{ 0x521445b, "list_del" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8834396c, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x3b4ceb4a, "up_write" },
	{ 0xe6e3b875, "down_write" },
	{ 0x5ed2d36d, "bio_endio" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x61651be, "strcat" },
	{ 0xe0f3b3d5, "pci_find_capability" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0xdd1c65f6, "blk_finish_plug" },
	{ 0x24f41a20, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0xd97436df, "__free_pages" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xf4f6a66d, "pci_bus_read_config_word" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0x60f37c54, "blk_queue_make_request" },
	{ 0xa2068376, "pci_bus_read_config_dword" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x76a495c1, "cpu_possible_mask" },
	{ 0xc537e184, "get_user_pages" },
	{ 0x1f822217, "schedule_delayed_work" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xdc7883b, "put_disk" },
	{ 0xa401738e, "elevator_init" },
	{ 0x43261dca, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9435c7c2, "blk_init_queue_node" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xe1bbf0b9, "blk_fetch_request" },
	{ 0x77e2cc1c, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3e73e74e, "pci_unregister_driver" },
	{ 0xa3a77c69, "down_read_trylock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4c3d20f, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x7ce53807, "kmem_cache_create" },
	{ 0x99195078, "vsnprintf" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x89e8e765, "blk_stop_queue" },
	{ 0xe30cfd8a, "proc_create_data" },
	{ 0xfe805f20, "pci_bus_write_config_byte" },
	{ 0xbce34f45, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4ac7343, "pci_request_regions" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xd35ca5fb, "pci_disable_msi" },
	{ 0xc5ff67a3, "add_disk" },
	{ 0xedc03953, "iounmap" },
	{ 0x77cdcf1b, "blk_requeue_request" },
	{ 0x8eabe48a, "__pci_register_driver" },
	{ 0x5f3b429c, "put_page" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x63375378, "pci_get_device" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x7ec06094, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x28318305, "snprintf" },
	{ 0x21e7d08c, "pci_enable_msi_block" },
	{ 0xa058d735, "blk_queue_max_segment_size" },
	{ 0x5153051, "seq_release" },
	{ 0xb0e602eb, "memmove" },
	{ 0x8491a54b, "vmalloc_to_page" },
	{ 0xc033b77e, "pci_enable_device" },
	{ 0xb7efbaa9, "blk_queue_logical_block_size" },
	{ 0x77e2f33, "_copy_from_user" },
	{ 0x431bbac5, "bdget_disk" },
	{ 0xcbc9557f, "unregister_sysrq_key" },
	{ 0x9e034ea4, "dev_get_drvdata" },
	{ 0xfc107a3, "__blk_end_request" },
	{ 0x43a0458b, "blk_start_plug" },
	{ 0x9a13db6d, "misc_deregister" },
	{ 0x2bccbc8b, "bdput" },
	{ 0x2a6e6109, "__init_rwsem" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x134fa069, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001AEDd00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00002001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2E9608B882CDC07E14FA570");
