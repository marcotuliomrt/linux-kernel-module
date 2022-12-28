# linux-kernel-module

Example from the book [The Linux Kernel Module Programming Guide](https://tldp.org/LDP/lkmpg/2.6/html/x121.html)

### How to use it 

1. Compile the .c to a .ko: `$ make`

2. Insert the compiled module (named simple) into the kernel: `$ sudo insmod simple.ko`


- Check if the module "Simple" has been added to list of kernel modules in execution: `$ lsmod | grep simple`

- Display the last kernel-related messages retrieved from the kernel ring buffer: `$ dmesg | tail`

3. Remove the compiled module (named simple) from the kernel: '$ sudo rmmod simple'

- Check if the module "Simple" has been added to list of kernel modules in execution: `$ lsmod | grep simple`

- Display the last kernel-related messages retrieved from the kernel ring buffer: `$ dmesg | tail`
