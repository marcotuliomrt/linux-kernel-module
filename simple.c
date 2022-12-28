// simple.c
// https://tldp.org/LDP/lkmpg/2.6/html/x121.html

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");

static int simple_init(void) {
        printk(KERN_INFO "HELLO, WORLD \n");
        return 0;
}

static void simple_exit(void) {
        printk(KERN_INFO "GOODBYE, WORLD \n");
}

module_init(simple_init);
module_exit(simple_exit);
