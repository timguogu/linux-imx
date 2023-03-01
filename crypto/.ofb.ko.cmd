cmd_crypto/ofb.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/ofb.ko crypto/ofb.o crypto/ofb.mod.o;  true
