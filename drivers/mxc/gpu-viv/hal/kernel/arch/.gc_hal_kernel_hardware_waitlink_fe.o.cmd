cmd_drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o := arm-none-linux-gnueabihf-gcc -Wp,-MD,drivers/mxc/gpu-viv/hal/kernel/arch/.gc_hal_kernel_hardware_waitlink_fe.o.d  -nostdinc -isystem /home/peter/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/bin/../lib/gcc/arm-none-linux-gnueabihf/9.2.1/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wimplicit-fallthrough -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned -DgcdDEFAULT_CONTIGUOUS_SIZE=~0U -DgcdFSL_CONTIGUOUS_SIZE=134217728 -DgcdANDROID_NATIVE_FENCE_SYNC=2 -DLINUX_CMA_FSL=1 -DgcdREGISTER_READ_FROM_USER=1 -DgcdREGISTER_WRITE_FROM_USER=1 -DCLASS_NAME=\"gpu_class\" -DgcdGPU_2D_TIMEOUT=20000 -DNO_DMA_COHERENT=1 -DgcdSYS_FREE_MEMORY_LIMIT=51200 -Werror -Wno-implicit-fallthrough -DgcdLINUX_SYNC_FILE=1 -DLINUX -DDRIVER -DDBG=0 -DUSE_PLATFORM_DRIVER=1 -DVIVANTE_PROFILER=1 -DVIVANTE_PROFILER_CONTEXT=1 -DENABLE_GPU_CLOCK_BY_DRIVER=0 -DUSE_NEW_LINUX_SIGNAL=0 -DUSE_LINUX_PCIE=0 -DgcdCACHE_FUNCTION_UNIMPLEMENTED=0 -DgcdENABLE_3D=1 -DgcdENABLE_2D=1 -DgcdENABLE_VG=1 -DgcdENABLE_BANK_ALIGNMENT=1 -DgcdBANK_BIT_START=13 -DgcdBANK_BIT_END=15 -DgcdBANK_CHANNEL_BIT=12 -DgcdFPGA_BUILD=0 -DgcdENABLE_DRM=0 -I./drivers/mxc/gpu-viv/hal/kernel/inc -I./drivers/mxc/gpu-viv/hal/kernel -I./drivers/mxc/gpu-viv/hal/kernel/arch -I./drivers/mxc/gpu-viv/hal/kernel/inc -I./drivers/mxc/gpu-viv/hal/os/linux/kernel -I./drivers/mxc/gpu-viv/hal/os/linux/kernel/allocator/freescale -I./drivers/mxc/gpu-viv/hal/security_v1/ -I./drivers/mxc/gpu-viv/hal/os/linux/kernel/platform/freescale -Iarch/arm/mm -I./drivers/mxc/gpu-viv/hal/kernel/archvg -DHOST=\"peter\" -DgcdENABLE_TRUST_APPLICATION=1    -DKBUILD_BASENAME='"gc_hal_kernel_hardware_waitlink_fe"' -DKBUILD_MODNAME='"galcore"' -c -o drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.c

source_drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o := drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.c

deps_drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_types.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_version.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_options.h \
    $(wildcard include/config/sync.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_types_shared.h \
  include/generated/uapi/linux/version.h \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/uapi/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler_types.h \
  arch/arm/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_enum.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_enum_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_base.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_debug_zones.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_base_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_profiler.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_profiler_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_driver_shared.h \
    $(wildcard include/config/android/reserved/memory/account.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_enum_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_types_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver_vg.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_driver_vg_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_types.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_statistics.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_vg.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_vg_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel.h \
  drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware.h \
  drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_func.h \
  drivers/mxc/gpu-viv/hal/kernel/archvg/gc_hal_kernel_hardware_vg.h \
  drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_fe.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver.h \
  drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_mutex.h \
  include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  arch/arm/include/generated/asm/current.h \
  include/asm-generic/current.h \
  include/linux/thread_info.h \
    $(wildcard include/config/thread/info/in/task.h) \
    $(wildcard include/config/have/arch/within/stack/frames.h) \
    $(wildcard include/config/hardened/usercopy.h) \
  include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/bug/on/data/corruption.h) \
  arch/arm/include/asm/bug.h \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm/include/asm/linkage.h \
  arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/endian/be32.h) \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arm/heavy/mb.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/spectre.h) \
  include/asm-generic/barrier.h \
  include/linux/kasan-checks.h \
  arch/arm/include/asm/swab.h \
  arch/arm/include/uapi/asm/swab.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/arch/has/refcount.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/peter/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/lib/gcc/arm-none-linux-gnueabihf/9.2.1/include/stdarg.h \
  include/linux/limits.h \
  include/uapi/linux/limits.h \
  include/linux/bitops.h \
  include/linux/bits.h \
  include/linux/const.h \
  include/uapi/linux/const.h \
  arch/arm/include/asm/bitops.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  arch/arm/include/uapi/asm/ptrace.h \
  arch/arm/include/asm/hwcap.h \
  arch/arm/include/uapi/asm/hwcap.h \
  include/asm-generic/irqflags.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/builtin-__fls.h \
  include/asm-generic/bitops/builtin-__ffs.h \
  include/asm-generic/bitops/builtin-fls.h \
  include/asm-generic/bitops/builtin-ffs.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/linux/atomic.h \
  arch/arm/include/asm/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  include/linux/prefetch.h \
  arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/binfmt/elf/fdpic.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  arch/arm/include/asm/hw_breakpoint.h \
  arch/arm/include/asm/unified.h \
  arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/asm-generic/cmpxchg-local.h \
  include/linux/atomic-fallback.h \
  include/asm-generic/atomic-long.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  include/asm-generic/bitops/le.h \
  arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/quiet.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk/nmi.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/strict/kernel/rwx.h) \
    $(wildcard include/config/strict/module/rwx.h) \
  include/linux/kern_levels.h \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/uapi/linux/kernel.h \
  include/uapi/linux/sysinfo.h \
  include/linux/build_bug.h \
  arch/arm/include/asm/div64.h \
  arch/arm/include/asm/compiler.h \
  include/asm-generic/div64.h \
  include/linux/restart_block.h \
  include/linux/time64.h \
  include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  include/uapi/linux/time.h \
  include/uapi/linux/time_types.h \
  arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/stackprotector/per/task.h) \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  arch/arm/include/asm/glue.h \
  arch/arm/include/asm/pgtable-2level-types.h \
  arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/xip/kernel.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/xip/phys/addr.h) \
    $(wildcard include/config/debug/virtual.h) \
  include/linux/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  include/linux/pfn.h \
  include/asm-generic/getorder.h \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
    $(wildcard include/config/page/poisoning/zero.h) \
  include/linux/spinlock_types.h \
    $(wildcard include/config/debug/spinlock.h) \
  arch/arm/include/asm/spinlock_types.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
  include/linux/rwlock_types.h \
  include/linux/osq_lock.h \
  include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_metadata.h \
  drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_vg.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_security_interface.h \
  drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_context.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_kernel_buffer.h \

drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o: $(deps_drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o)

$(deps_drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware_waitlink_fe.o):
