cmd_lib/libcrc32c.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/libcrc32c.ko lib/libcrc32c.o lib/libcrc32c.mod.o;  true
