#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");
static void shows(void){
	printk("%s,%s,%d\n",__FILE__,__func__,__LINE__);
}

static int hello_init(void){
	int i=100;
	size_t j=100;
	int *p = &i;
	void *fp = &shows;
	printk(KERN_ALERT"------------!\n");
	printk(KERN_ALERT"hello world !\n");
	printk(KERN_ALERT"------------!\n");
	printk("i=%d,j=%d,p=%p\n",i,j,p);
	printk("fp=%pF\n",fp);
	shows();
	printk(KERN_DEBUG"this is debug\n");
	return 0;	
}

static void __exit hello_exit(void){
	printk(KERN_ALERT"goodbye,world!\n");
}

module_init(hello_init);
module_exit(hello_exit);

