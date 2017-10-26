#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Abdus Salam");

static char *mystring = "";

module_param(mystring, charp, 0000);


MODULE_PARM_DESC(mystring, "A character string");

int init_module(void){
	printk(KERN_INFO "mystring is a string: %s\n", mystring);
	return 0;
}

void cleanup_module(void){
	printk(KERN_INFO "Goodbye world.\n");
}

