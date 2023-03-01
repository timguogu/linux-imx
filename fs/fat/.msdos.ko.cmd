cmd_fs/fat/msdos.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/fat/msdos.ko fs/fat/msdos.o fs/fat/msdos.mod.o;  true
