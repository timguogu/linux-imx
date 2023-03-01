cmd_lib/crc-itu-t.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/crc-itu-t.ko lib/crc-itu-t.o lib/crc-itu-t.mod.o;  true
