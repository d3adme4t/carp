obj-m		:= ip_carp.o
ip_carp-objs	:= carp.o carp_log.o carp_queue.o carp_debugfs.o carp_procfs.o carp_sysfs.o carp_proto.o

CC := colorgcc

KDIR	:= /usr/src/linux-$(shell uname -r)
PWD	:= $(shell pwd)
CONFIG_CARP_DEBUG=1

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
	gcc -W -Wall carpctl.c -o carpctl

copy: default
	scp ip_carp.ko carpctl master:carp/

clean:
	rm -f *.o *.ko *.mod.* .*.cmd *~ carpctl
	rm -rf .tmp_versions modules.order  Module.symvers
