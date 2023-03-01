cmd_crypto/pcbc.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o;  true
