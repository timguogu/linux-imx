cmd_sound/soc/fsl/hdmi_pcm.o := arm-none-linux-gnueabihf-gcc -Wp,-MD,sound/soc/fsl/.hdmi_pcm.o.d  -nostdinc -isystem /home/peter/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/bin/../lib/gcc/arm-none-linux-gnueabihf/9.2.1/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -march=armv7-a -mtune=cortex-a9 -mfpu=neon -mfloat-abi=softfp    -c -o sound/soc/fsl/hdmi_pcm.o sound/soc/fsl/hdmi_pcm.S

source_sound/soc/fsl/hdmi_pcm.o := sound/soc/fsl/hdmi_pcm.S

deps_sound/soc/fsl/hdmi_pcm.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

sound/soc/fsl/hdmi_pcm.o: $(deps_sound/soc/fsl/hdmi_pcm.o)

$(deps_sound/soc/fsl/hdmi_pcm.o):
