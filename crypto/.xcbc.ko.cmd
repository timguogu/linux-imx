cmd_crypto/xcbc.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o;  true
