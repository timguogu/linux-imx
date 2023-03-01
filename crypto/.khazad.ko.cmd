cmd_crypto/khazad.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/khazad.ko crypto/khazad.o crypto/khazad.mod.o;  true
