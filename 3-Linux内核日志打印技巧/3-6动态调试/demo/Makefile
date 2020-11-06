.PHONY:all clean
ifneq ($(KERNELRELEASE),)

obj-m := hello.o

else

#KDIR := /lib/modules/4.4.0-186-generic/build
KDIR := /home/linux-4.4.176
all:
#	make -C ${KDIR} M=${PWD} modules
	make CROSS_COMPILE=arm-linux-gnueabi- ARCH=arm -C ${KDIR} M=${PWD} modules
	cp hello.ko /home/rootfs
clean:
	rm -f *.ko *.o *.mod.o *.mod.c *.symvers *.order
endif
