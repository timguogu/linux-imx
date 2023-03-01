cmd_crypto/tls.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/tls.ko crypto/tls.o crypto/tls.mod.o;  true
