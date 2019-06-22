//必要的头文件
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
//模块许可证声明（必须）
MODULE_LICENSE("GPL");
//模块加载函数（必须）
static int __init hello_init(void)
{
    printk( "Hello World enter/n");
    return 0;
}
//模块卸载函数（必须）
static void __exit hello_exit(void)
{
    printk( "Hello World exit/n");
}

module_init(hello_init);
module_exit(hello_exit);
