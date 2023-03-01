cmd_crypto/rmd256.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/rmd256.ko crypto/rmd256.o crypto/rmd256.mod.o;  true
