cmd_crypto/cfb.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/cfb.ko crypto/cfb.o crypto/cfb.mod.o;  true
