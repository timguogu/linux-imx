cmd_crypto/tcrypt.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o;  true
