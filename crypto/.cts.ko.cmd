cmd_crypto/cts.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/cts.ko crypto/cts.o crypto/cts.mod.o;  true
