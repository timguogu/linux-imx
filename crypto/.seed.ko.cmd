cmd_crypto/seed.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/seed.ko crypto/seed.o crypto/seed.mod.o;  true
