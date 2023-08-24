#include <linux/module.h>
#include <linux/input.h>

#include "planet_kpd_common.h"

#define MODULE_NAME "planet_kpd_driver"

MODULE_AUTHOR("Planet Computers Ltd.");
MODULE_DESCRIPTION("Unified driver for the keyboard used in Planet Computers devices.");
MODULE_LICENSE("GPL");

static int __init planet_kpd_driver_init(void)
{
    printk(KERN_INFO "planet_kpd_driver: init\n");
    return 0;
}

static void __exit planet_kpd_driver_cleanup(void) {
    printk(KERN_INFO "planet_kpd_driver: cleanup\n");
}

module_init(planet_kpd_driver_init)
module_exit(planet_kpd_driver_cleanup)
