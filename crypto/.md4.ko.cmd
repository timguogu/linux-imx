cmd_crypto/md4.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o;  true
