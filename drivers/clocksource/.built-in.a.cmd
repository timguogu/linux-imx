cmd_drivers/clocksource/built-in.a := rm -f drivers/clocksource/built-in.a; arm-none-linux-gnueabihf-ar cDPrST drivers/clocksource/built-in.a drivers/clocksource/timer-of.o drivers/clocksource/timer-probe.o drivers/clocksource/mmio.o drivers/clocksource/arm_arch_timer.o drivers/clocksource/arm_global_timer.o drivers/clocksource/dummy_timer.o drivers/clocksource/timer-imx-gpt.o drivers/clocksource/timer-imx-tpm.o
