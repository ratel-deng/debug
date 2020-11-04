#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");
static void shows(void){
	printk("%s,%s,%d\n",__FILE__,__func__,__LINE__);
}

static int hello_init(void){
	shows();
	printk(KERN_ALERT"------------!\n");
	printk(KERN_ALERT"hello world !\n");
	printk(KERN_ALERT"------------!\n");
	dump_stack();
//	WARN_ON(1);
//	BUG();
//	BUG_ON(1);
//	panic();
/*	
 *	不要轻易使用注释掉的函数
 */
	return 0;	
}

static void __exit hello_exit(void){
	printk(KERN_ALERT"goodbye,world!\n");
}

module_init(hello_init);
module_exit(hello_exit);

