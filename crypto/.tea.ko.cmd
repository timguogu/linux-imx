cmd_crypto/tea.ko := arm-none-linux-gnueabihf-ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/tea.ko crypto/tea.o crypto/tea.mod.o;  true
