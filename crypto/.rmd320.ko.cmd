cmd_crypto/rmd320.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/rmd320.ko crypto/rmd320.o crypto/rmd320.mod.o;  true
