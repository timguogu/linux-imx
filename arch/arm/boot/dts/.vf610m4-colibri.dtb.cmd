cmd_arch/arm/boot/dts/vf610m4-colibri.dtb := mkdir -p arch/arm/boot/dts/ ; gcc -E -Wp,-MD,arch/arm/boot/dts/.vf610m4-colibri.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.vf610m4-colibri.dtb.dts.tmp arch/arm/boot/dts/vf610m4-colibri.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vf610m4-colibri.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -d arch/arm/boot/dts/.vf610m4-colibri.dtb.d.dtc.tmp arch/arm/boot/dts/.vf610m4-colibri.dtb.dts.tmp ; cat arch/arm/boot/dts/.vf610m4-colibri.dtb.d.pre.tmp arch/arm/boot/dts/.vf610m4-colibri.dtb.d.dtc.tmp > arch/arm/boot/dts/.vf610m4-colibri.dtb.d

source_arch/arm/boot/dts/vf610m4-colibri.dtb := arch/arm/boot/dts/vf610m4-colibri.dts

deps_arch/arm/boot/dts/vf610m4-colibri.dtb := \
  arch/arm/boot/dts/vf610m4.dtsi \
  arch/arm/boot/dts/armv7-m.dtsi \
  arch/arm/boot/dts/vfxxx.dtsi \
  arch/arm/boot/dts/vf610-pinfunc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/vf610-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/vf610m4-colibri.dtb: $(deps_arch/arm/boot/dts/vf610m4-colibri.dtb)

$(deps_arch/arm/boot/dts/vf610m4-colibri.dtb):
