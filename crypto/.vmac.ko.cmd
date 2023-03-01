cmd_crypto/vmac.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/vmac.ko crypto/vmac.o crypto/vmac.mod.o;  true
