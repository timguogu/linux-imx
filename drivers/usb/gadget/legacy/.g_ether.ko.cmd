cmd_drivers/usb/gadget/legacy/g_ether.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/gadget/legacy/g_ether.ko drivers/usb/gadget/legacy/g_ether.o drivers/usb/gadget/legacy/g_ether.mod.o;  true
