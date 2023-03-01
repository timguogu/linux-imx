cmd_lib/crc7.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/crc7.ko lib/crc7.o lib/crc7.mod.o;  true
