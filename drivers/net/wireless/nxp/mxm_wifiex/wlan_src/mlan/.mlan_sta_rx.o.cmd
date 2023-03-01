cmd_drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o := arm-none-linux-gnueabihf-gcc -Wp,-MD,drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/.mlan_sta_rx.o.d  -nostdinc -isystem /home/peter/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/bin/../lib/gcc/arm-none-linux-gnueabihf/9.2.1/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wimplicit-fallthrough -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned -I/mlan -DLINUX -DFPNUM='"92"' -DDEBUG_LEVEL1 -DSTA_SUPPORT -DREASSOCIATION -DUAP_SUPPORT -DWIFI_DIRECT_SUPPORT -DMFG_CMD_SUPPORT -DSDIO_SUSPEND_RESUME -DDFS_TESTING_SUPPORT -DSD8987 -DSDIO -DSDIO_MMC -Wno-stringop-overflow -Wno-tautological-compare -Wno-packed-bitfield-compat -Wno-stringop-truncation -DSTA_WEXT -DSTA_CFG80211 -DUAP_WEXT -DUAP_CFG80211  -DMODULE  -DKBUILD_BASENAME='"mlan_sta_rx"' -DKBUILD_MODNAME='"mlan"' -c -o drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.c

source_drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o := drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.c

deps_drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o := \
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
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_decl.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_ioctl.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_ieee.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_join.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_util.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_fw.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_main.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_11n_aggr.h \
  drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_11n_rxreorder.h \

drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o: $(deps_drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o)

$(deps_drivers/net/wireless/nxp/mxm_wifiex/wlan_src/mlan/mlan_sta_rx.o):
