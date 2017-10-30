
## How to run kernel module
### For running kernel module you need two file 
* Makefile
* name_of_code.c file

First Configure your `Makefile` according to your `.c` file. A normal `Makefile` look like bollow
```sh
     obj-m += name_of_your_c_program.o

     all:
	     make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

     clean:
             make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
```

## Compile code
Go to your source code directory and run
```sh

     make                                 # compile source code
     sudo insmod name_of_your_program.ko  # insert in kernel
     sudo rmmod name_of_your_program.ko   # delete from kernel

     dmesg | tail                         # see the output of module
```
