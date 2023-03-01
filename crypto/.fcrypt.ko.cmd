cmd_crypto/fcrypt.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/fcrypt.ko crypto/fcrypt.o crypto/fcrypt.mod.o;  true
