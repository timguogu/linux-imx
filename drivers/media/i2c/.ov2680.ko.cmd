cmd_drivers/media/i2c/ov2680.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/i2c/ov2680.ko drivers/media/i2c/ov2680.o drivers/media/i2c/ov2680.mod.o;  true