cmd_crypto/lrw.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o;  true
