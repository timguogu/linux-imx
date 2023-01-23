cmd_arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb := mkdir -p arch/arm/boot/dts/ ; gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.dts.tmp arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -d arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-hummingboard2-emmc-som-v15.dtb.d

source_arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb := arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dts

deps_arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx6qdl-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/imx6qdl-sr-som.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/imx6qdl-sr-som-emmc.dtsi \
  arch/arm/boot/dts/imx6qdl-sr-som-ti.dtsi \
  arch/arm/boot/dts/imx6qdl-hummingboard2.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/sound/fsl-imx-audmux.h \

arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb: $(deps_arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb)

$(deps_arch/arm/boot/dts/imx6dl-hummingboard2-emmc-som-v15.dtb):
