cmd_arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb := mkdir -p arch/arm/boot/dts/ ; gcc -E -Wp,-MD,arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.dts.tmp arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -d arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.d.dtc.tmp arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.d.pre.tmp arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx7ulp-evkb-rm68191-qhd.dtb.d

source_arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb := arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dts

deps_arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb := \
  arch/arm/boot/dts/imx7ulp-evkb-mipi.dts \
  arch/arm/boot/dts/imx7ulp-evkb.dts \
  arch/arm/boot/dts/imx7ulp-evk.dts \
  arch/arm/boot/dts/imx7ulp.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx7ulp-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx7ulp-pinfunc.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/imx7ulp-evk-mipi.dtsi \

arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb: $(deps_arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb)

$(deps_arch/arm/boot/dts/imx7ulp-evkb-rm68191-qhd.dtb):
