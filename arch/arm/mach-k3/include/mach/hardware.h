/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2018 Texas Instruments Incorporated - https://www.ti.com/
 *	Lokesh Vutla <lokeshvutla@ti.com>
 */
#ifndef _ASM_ARCH_HARDWARE_H_
#define _ASM_ARCH_HARDWARE_H_

#include <asm/io.h>

#define CTRLMMR_WKUP_JTAG_DEVICE_ID		(WKUP_CTRL_MMR0_BASE + 0x18)
#define JTAG_DEV_ID_MASK			GENMASK(31, 18)
#define JTAG_DEV_ID_SHIFT			18
#define JTAG_DEV_CORE_NR_MASK			GENMASK(21, 19)
#define JTAG_DEV_CORE_NR_SHIFT			19
#define JTAG_DEV_GPU_MASK			BIT(18)
#define JTAG_DEV_GPU_SHIFT			18
#define JTAG_DEV_FEATURES_MASK			GENMASK(17, 13)
#define JTAG_DEV_FEATURES_SHIFT			13
#define JTAG_DEV_SECURITY_MASK			BIT(12)
#define JTAG_DEV_SECURITY_SHIFT			12
#define JTAG_DEV_SAFETY_MASK			BIT(11)
#define JTAG_DEV_SAFETY_SHIFT			11
#define JTAG_DEV_SPEED_MASK			GENMASK(10, 6)
#define JTAG_DEV_SPEED_SHIFT			6
#define JTAG_DEV_TEMP_MASK			GENMASK(5, 3)
#define JTAG_DEV_TEMP_SHIFT			3
#define JTAG_DEV_PKG_MASK			GENMASK(2, 0)
#define JTAG_DEV_PKG_SHIFT			0

#ifdef CONFIG_SOC_K3_AM625
#include "am62_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_AM62A7
#include "am62a_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_AM62P5
#include "am62p_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_AM642
#include "am64_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_AM654
#include "am6_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_J721E
#include "j721e_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_J721S2
#include "j721s2_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_J722S
#include "j722s_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_J784S4
#include "j784s4_hardware.h"
#endif


/* Assuming these addresses and definitions stay common across K3 devices */
#define CTRLMMR_WKUP_JTAG_ID	(WKUP_CTRL_MMR0_BASE + 0x14)
#define JTAG_ID_VARIANT_SHIFT	28
#define JTAG_ID_VARIANT_MASK	(0xf << 28)
#define JTAG_ID_PARTNO_SHIFT	12
#define JTAG_ID_PARTNO_MASK	(0xffff << 12)
#define JTAG_ID_PARTNO_AM62AX   0xbb8d
#define JTAG_ID_PARTNO_AM62PX	0xbb9d
#define JTAG_ID_PARTNO_AM62X	0xbb7e
#define JTAG_ID_PARTNO_AM64X	0xbb38
#define JTAG_ID_PARTNO_AM65X	0xbb5a
#define JTAG_ID_PARTNO_J7200	0xbb6d
#define JTAG_ID_PARTNO_J721E	0xbb64
#define JTAG_ID_PARTNO_J721S2	0xbb75
#define JTAG_ID_PARTNO_J722S	0xbba0
#define JTAG_ID_PARTNO_J784S4	0xbb80

#define JTAG_DEVICE_ID_PKG_J742S2 0x7

#define K3_SOC_ID(id, ID) \
static inline bool soc_is_##id(void) \
{ \
	u32 soc = (readl(CTRLMMR_WKUP_JTAG_ID) & \
		JTAG_ID_PARTNO_MASK) >> JTAG_ID_PARTNO_SHIFT; \
	return soc == JTAG_ID_PARTNO_##ID; \
}
K3_SOC_ID(am62x, AM62X)
K3_SOC_ID(am62ax, AM62AX)
K3_SOC_ID(am62px, AM62PX)
K3_SOC_ID(am64x, AM64X)
K3_SOC_ID(am65x, AM65X)
K3_SOC_ID(j7200, J7200)
K3_SOC_ID(j721e, J721E)
K3_SOC_ID(j721s2, J721S2)
K3_SOC_ID(j722s, J722S)

#define K3_SEC_MGR_SYS_STATUS		0x44234100
#define SYS_STATUS_DEV_TYPE_SHIFT	0
#define SYS_STATUS_DEV_TYPE_MASK	(0xf)
#define SYS_STATUS_DEV_TYPE_GP		0x3
#define SYS_STATUS_DEV_TYPE_TEST	0x5
#define SYS_STATUS_DEV_TYPE_EMU		0x9
#define SYS_STATUS_DEV_TYPE_HS		0xa
#define SYS_STATUS_SUB_TYPE_SHIFT	8
#define SYS_STATUS_SUB_TYPE_MASK	(0xf << 8)
#define SYS_STATUS_SUB_TYPE_VAL_FS	0xa

/*
 * The CTRL_MMR0 memory space is divided into several equally-spaced
 * partitions, so defining the partition size allows us to determine
 * register addresses common to those partitions.
 */
#define CTRL_MMR0_PARTITION_SIZE		0x4000

/*
 * CTRL_MMR0, WKUP_CTRL_MMR0, and MCU_CTRL_MMR0 lock/kick-mechanism
 * shared register definitions. The same registers are also used for
 * PADCFG_MMR lock/kick-mechanism.
 */
#define CTRLMMR_LOCK_KICK0			0x1008
#define CTRLMMR_LOCK_KICK0_UNLOCK_VAL		0x68ef3490
#define CTRLMMR_LOCK_KICK1			0x100c
#define CTRLMMR_LOCK_KICK1_UNLOCK_VAL		0xd172bc5a

/*
 * Shared WKUP_CTRL_MMR0 definitions used to remove IO isolation
 */

#define WKUP_CTRL_MMR_DDR16SS_PMCTRL				0x80d0
#define WKUP_CTRL_MMR_DDR16SS_PMCTRL_DATA_RET_LD		BIT(31)
#define WKUP_CTRL_MMR_DDR16SS_PMCTRL_DATA_RETENTION_MASK	GENMASK(3, 0)

#define WKUP_CTRL_MMR_CANUART_WAKE_CTRL				0x18300
#define WKUP_CTRL_MMR_CANUART_WAKE_CTRL_MW			0x2aaaaaaa
#define WKUP_CTRL_MMR_CANUART_WAKE_CTRL_MW_SHIFT		1
#define WKUP_CTRL_MMR_CANUART_WAKE_CTRL_MW_LOAD_EN		BIT(0)

#define WKUP_CTRL_MMR_CANUART_WAKE_STAT1			0x1830c
#define WKUP_CTRL_MMR_CANUART_WAKE_STAT1_CANUART_IO_MODE	BIT(0)

#define WKUP_CTRL_MMR_CANUART_WAKE_OFF_MODE_STAT		0x18318
#define WKUP_CTRL_MMR_CANUART_WAKE_OFF_MODE_STAT_MW		0x555555

#define WKUP_CTRL_MMR_PMCTRL_IO_0				0x18084
#define WKUP_CTRL_MMR_PMCTRL_IO_0_ISOCLK_OVRD_0			BIT(0)
#define WKUP_CTRL_MMR_PMCTRL_IO_0_ISOOVR_EXTEND_0		BIT(4)
#define WKUP_CTRL_MMR_PMCTRL_IO_0_ISO_BYPASS_OVR_0		BIT(6)
#define WKUP_CTRL_MMR_PMCTRL_IO_0_WUCLK_CTRL_0			BIT(8)
#define WKUP_CTRL_MMR_PMCTRL_IO_0_GLOBAL_WUEN_0			BIT(16)
#define WKUP_CTRL_MMR_PMCTRL_IO_0_IO_ISO_CTRL_0			BIT(24)
#define WKUP_CTRL_MMR_PMCTRL_IO_0_WRITE_MASK ( \
		WKUP_CTRL_MMR_PMCTRL_IO_0_ISOCLK_OVRD_0 |	\
		WKUP_CTRL_MMR_PMCTRL_IO_0_ISOOVR_EXTEND_0 |	\
		WKUP_CTRL_MMR_PMCTRL_IO_0_ISO_BYPASS_OVR_0 |	\
		WKUP_CTRL_MMR_PMCTRL_IO_0_WUCLK_CTRL_0 |	\
		WKUP_CTRL_MMR_PMCTRL_IO_0_GLOBAL_WUEN_0 |	\
		WKUP_CTRL_MMR_PMCTRL_IO_0_IO_ISO_CTRL_0)

#define WKUP_CTRL_MMR_PMCTRL_IO_GLB				0x1809c
#define WKUP_CTRL_MMR_DEEPSLEEP_CTRL				0x18160

#define K3_ROM_BOOT_HEADER_MAGIC	"EXTBOOT"

struct rom_extended_boot_data {
	char header[8];
	u32 num_components;
};

#endif /* _ASM_ARCH_HARDWARE_H_ */
