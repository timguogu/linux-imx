cmd_arch/arm/vdso/vdso.so.raw := arm-none-linux-gnueabihf-ld  -EL -Bsymbolic --no-undefined -soname=linux-vdso.so.1 -z max-page-size=4096 -nostdlib -shared  --hash-style=sysv --build-id -T   arch/arm/vdso/vdso.lds arch/arm/vdso/vgettimeofday.o arch/arm/vdso/datapage.o -o arch/arm/vdso/vdso.so.raw
