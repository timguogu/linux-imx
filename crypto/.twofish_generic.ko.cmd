cmd_crypto/twofish_generic.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/twofish_generic.ko crypto/twofish_generic.o crypto/twofish_generic.mod.o;  true