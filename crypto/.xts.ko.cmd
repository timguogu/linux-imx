cmd_crypto/xts.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/xts.ko crypto/xts.o crypto/xts.mod.o;  true
