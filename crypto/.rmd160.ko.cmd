cmd_crypto/rmd160.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o;  true
