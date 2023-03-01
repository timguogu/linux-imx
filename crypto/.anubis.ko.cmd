cmd_crypto/anubis.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o;  true
