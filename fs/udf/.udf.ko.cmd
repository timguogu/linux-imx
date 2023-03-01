cmd_fs/udf/udf.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o;  true
