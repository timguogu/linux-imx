cmd_drivers/usb/gadget/legacy/g_ffs.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/gadget/legacy/g_ffs.ko drivers/usb/gadget/legacy/g_ffs.o drivers/usb/gadget/legacy/g_ffs.mod.o;  true