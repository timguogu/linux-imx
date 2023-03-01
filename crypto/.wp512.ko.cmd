cmd_crypto/wp512.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/wp512.ko crypto/wp512.o crypto/wp512.mod.o;  true
