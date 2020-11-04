.PHONY:all clean
ifneq ($(KERNELRELEASE),)

obj-m := hello.o

else

KDIR := /lib/modules/4.4.0-186-generic/build
all:
	make -C ${KDIR} M=${PWD} modules
clean:
	rm -f *.ko *.o *.mod.o *.mod.c *.symvers *.order
endif
