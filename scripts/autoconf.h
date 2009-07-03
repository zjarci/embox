#ifndef _AUTOCONF_H_
#define _AUTOCONF_H_

#define START_MSG "\nWelcome to Monitor shell and have a lot of fun..."
#define PROMPT "monitor> "

/* Arch */
#define MONITOR_ARCH 1
#define MONITOR_ARCH_SPARC 1

#define LEON3 1
#define _TEST_SYSTEM_ 1

/* Verbous levels */
#define _ERROR 1
#define _TRACE 1
#undef _DEBUG
#undef _WARN

/* Build targets */
#undef SIMULATION_TRG
#define DEBUG_TRG 1
#define RELEASE_TRG 1
#undef DOXYGEN_TRG

/* Conio */
#define MONITOR_CONIO 1
#define MONITOR_CONIO_CONSOLE 1
#define MONITOR_CONIO_TERMINAL 1

#define MONITOR_KERNEL 1
#define MONITOR_MISC 1
#undef MONITOR_FS

/* Net */
#define MONITOR_NET 1
#define MONITOR_NET_ARP 1
#define MONITOR_NET_DHCP 1
#define MONITOR_NET_ETH 1
#define MONITOR_NET_ICMP 1
#define MONITOR_NET_IP_V4 1
#define MONITOR_NET_IPAUX 1
#define MONITOR_NET_NET_DEVICE 1
#define MONITOR_NET_NET_PACK_MANAGER 1
#define MONITOR_NET_SOCKET 1
#define MONITOR_NET_TFTP 1
#define MONITOR_NET_UDP 1

/* Tests */
#define MONITOR_TESTS 1
#define MONITOR_TESTS_CPU_CONTEXT 1
#define MONITOR_TESTS_IRQ_AVAILABILITY 1
#define MONITOR_TESTS_SOFT_TRAPS 1
#define MONITOR_TESTS_CHECKSUM 1
#define MONITOR_TESTS_MMU 1

/* Drivers */
#define MONITOR_DRIVERS 1
#define MONITOR_DRIVERS_AMBA_PNP 1
#define MONITOR_DRIVERS_GAISLER 1
#define MONITOR_DRIVERS_GAISLER_IRQ_CTRL 1
#define MONITOR_DRIVERS_GAISLER_UART 1
#define MONITOR_DRIVERS_GAISLER_TIMER 1

/* Users */
#define MONITOR_USER 1
#define MONITOR_USER_ARP 1
#define MONITOR_USER_ETH 1
#define MONITOR_USER_HELP 1
#define MONITOR_USER_LSPNP 1
#define MONITOR_USER_MEM 1
#define MONITOR_USER_MMU_PROBE 1
#define MONITOR_USER_PING 1
#define MONITOR_USER_RUN 1
#define MONITOR_USER_UDPD 1
#define MONITOR_USER_WMEM 1

#endif /* _AUTOCONF_H_ */
