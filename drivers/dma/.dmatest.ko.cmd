cmd_drivers/dma/dmatest.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/dma/dmatest.ko drivers/dma/dmatest.o drivers/dma/dmatest.mod.o;  true