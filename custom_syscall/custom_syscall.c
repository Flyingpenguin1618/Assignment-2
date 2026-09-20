#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(custom_hello)
{
    printk(KERN_INFO "[Custom Syscall] Student ID: 20211170, Name: SeungOh Yang\n");
    return 0;
}
