cmd_drivers/usb/misc/usbtest.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/usbtest.ko drivers/usb/misc/usbtest.o drivers/usb/misc/usbtest.mod.o;  true
