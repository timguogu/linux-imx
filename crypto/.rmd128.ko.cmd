cmd_crypto/rmd128.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/rmd128.ko crypto/rmd128.o crypto/rmd128.mod.o;  true
