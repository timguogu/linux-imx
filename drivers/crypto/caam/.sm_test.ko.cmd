cmd_drivers/crypto/caam/sm_test.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/crypto/caam/sm_test.ko drivers/crypto/caam/sm_test.o drivers/crypto/caam/sm_test.mod.o;  true