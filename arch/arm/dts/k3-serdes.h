/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants for SERDES MUX for TI SoCs
 *
 * Copyright (C) 2023 Texas Instruments Incorporated - https://www.ti.com/
 */

#ifndef DTS_ARM64_TI_K3_SERDES_H
#define DTS_ARM64_TI_K3_SERDES_H

/* J721E */

#define J721E_SERDES0_LANE0_QSGMII_LANE1	0x0
#define J721E_SERDES0_LANE0_PCIE0_LANE0		0x1
#define J721E_SERDES0_LANE0_USB3_0_SWAP		0x2
#define J721E_SERDES0_LANE0_IP4_UNUSED		0x3

#define J721E_SERDES0_LANE1_QSGMII_LANE2	0x0
#define J721E_SERDES0_LANE1_PCIE0_LANE1		0x1
#define J721E_SERDES0_LANE1_USB3_0		0x2
#define J721E_SERDES0_LANE1_IP4_UNUSED		0x3

#define J721E_SERDES1_LANE0_QSGMII_LANE3	0x0
#define J721E_SERDES1_LANE0_PCIE1_LANE0		0x1
#define J721E_SERDES1_LANE0_USB3_1_SWAP		0x2
#define J721E_SERDES1_LANE0_SGMII_LANE0		0x3

#define J721E_SERDES1_LANE1_QSGMII_LANE4	0x0
#define J721E_SERDES1_LANE1_PCIE1_LANE1		0x1
#define J721E_SERDES1_LANE1_USB3_1		0x2
#define J721E_SERDES1_LANE1_SGMII_LANE1		0x3

#define J721E_SERDES2_LANE0_IP1_UNUSED		0x0
#define J721E_SERDES2_LANE0_PCIE2_LANE0		0x1
#define J721E_SERDES2_LANE0_USB3_1_SWAP		0x2
#define J721E_SERDES2_LANE0_SGMII_LANE0		0x3

#define J721E_SERDES2_LANE1_IP1_UNUSED		0x0
#define J721E_SERDES2_LANE1_PCIE2_LANE1		0x1
#define J721E_SERDES2_LANE1_USB3_1		0x2
#define J721E_SERDES2_LANE1_SGMII_LANE1		0x3

#define J721E_SERDES3_LANE0_IP1_UNUSED		0x0
#define J721E_SERDES3_LANE0_PCIE3_LANE0		0x1
#define J721E_SERDES3_LANE0_USB3_0_SWAP		0x2
#define J721E_SERDES3_LANE0_IP4_UNUSED		0x3

#define J721E_SERDES3_LANE1_IP1_UNUSED		0x0
#define J721E_SERDES3_LANE1_PCIE3_LANE1		0x1
#define J721E_SERDES3_LANE1_USB3_0		0x2
#define J721E_SERDES3_LANE1_IP4_UNUSED		0x3

#define J721E_SERDES4_LANE0_EDP_LANE0		0x0
#define J721E_SERDES4_LANE0_IP2_UNUSED		0x1
#define J721E_SERDES4_LANE0_QSGMII_LANE5	0x2
#define J721E_SERDES4_LANE0_IP4_UNUSED		0x3

#define J721E_SERDES4_LANE1_EDP_LANE1		0x0
#define J721E_SERDES4_LANE1_IP2_UNUSED		0x1
#define J721E_SERDES4_LANE1_QSGMII_LANE6	0x2
#define J721E_SERDES4_LANE1_IP4_UNUSED		0x3

#define J721E_SERDES4_LANE2_EDP_LANE2		0x0
#define J721E_SERDES4_LANE2_IP2_UNUSED		0x1
#define J721E_SERDES4_LANE2_QSGMII_LANE7	0x2
#define J721E_SERDES4_LANE2_IP4_UNUSED		0x3

#define J721E_SERDES4_LANE3_EDP_LANE3		0x0
#define J721E_SERDES4_LANE3_IP2_UNUSED		0x1
#define J721E_SERDES4_LANE3_QSGMII_LANE8	0x2
#define J721E_SERDES4_LANE3_IP4_UNUSED		0x3

/* J7200 */

#define J7200_SERDES0_LANE0_QSGMII_LANE3	0x0
#define J7200_SERDES0_LANE0_PCIE1_LANE0		0x1
#define J7200_SERDES0_LANE0_IP3_UNUSED		0x2
#define J7200_SERDES0_LANE0_IP4_UNUSED		0x3

#define J7200_SERDES0_LANE1_QSGMII_LANE4	0x0
#define J7200_SERDES0_LANE1_PCIE1_LANE1		0x1
#define J7200_SERDES0_LANE1_IP3_UNUSED		0x2
#define J7200_SERDES0_LANE1_IP4_UNUSED		0x3

#define J7200_SERDES0_LANE2_QSGMII_LANE1	0x0
#define J7200_SERDES0_LANE2_PCIE1_LANE2		0x1
#define J7200_SERDES0_LANE2_IP3_UNUSED		0x2
#define J7200_SERDES0_LANE2_IP4_UNUSED		0x3

#define J7200_SERDES0_LANE3_QSGMII_LANE2	0x0
#define J7200_SERDES0_LANE3_PCIE1_LANE3		0x1
#define J7200_SERDES0_LANE3_USB			0x2
#define J7200_SERDES0_LANE3_IP4_UNUSED		0x3

/* AM64 */

#define AM64_SERDES0_LANE0_PCIE0		0x0
#define AM64_SERDES0_LANE0_USB			0x1

/* J721S2 */

#define J721S2_SERDES0_LANE0_EDP_LANE0		0x0
#define J721S2_SERDES0_LANE0_PCIE1_LANE0	0x1
#define J721S2_SERDES0_LANE0_IP3_UNUSED		0x2
#define J721S2_SERDES0_LANE0_IP4_UNUSED		0x3

#define J721S2_SERDES0_LANE1_EDP_LANE1		0x0
#define J721S2_SERDES0_LANE1_PCIE1_LANE1	0x1
#define J721S2_SERDES0_LANE1_USB		0x2
#define J721S2_SERDES0_LANE1_IP4_UNUSED		0x3

#define J721S2_SERDES0_LANE2_EDP_LANE2		0x0
#define J721S2_SERDES0_LANE2_PCIE1_LANE2	0x1
#define J721S2_SERDES0_LANE2_USB_SWAP		0x2
#define J721S2_SERDES0_LANE2_IP4_UNUSED		0x3

#define J721S2_SERDES0_LANE3_EDP_LANE3		0x0
#define J721S2_SERDES0_LANE3_PCIE1_LANE3	0x1
#define J721S2_SERDES0_LANE3_USB		0x2
#define J721S2_SERDES0_LANE3_IP4_UNUSED		0x3

/* J784S4 */

#define J784S4_SERDES0_LANE0_IP1_UNUSED		0x0
#define J784S4_SERDES0_LANE0_PCIE1_LANE0	0x1
#define J784S4_SERDES0_LANE0_IP3_UNUSED		0x2
#define J784S4_SERDES0_LANE0_IP4_UNUSED		0x3

#define J784S4_SERDES0_LANE1_IP1_UNUSED		0x0
#define J784S4_SERDES0_LANE1_PCIE1_LANE1	0x1
#define J784S4_SERDES0_LANE1_IP3_UNUSED		0x2
#define J784S4_SERDES0_LANE1_IP4_UNUSED		0x3

#define J784S4_SERDES0_LANE2_PCIE3_LANE0	0x0
#define J784S4_SERDES0_LANE2_PCIE1_LANE2	0x1
#define J784S4_SERDES0_LANE2_IP3_UNUSED		0x2
#define J784S4_SERDES0_LANE2_IP4_UNUSED		0x3

#define J784S4_SERDES0_LANE3_PCIE3_LANE1	0x0
#define J784S4_SERDES0_LANE3_PCIE1_LANE3	0x1
#define J784S4_SERDES0_LANE3_USB		0x2
#define J784S4_SERDES0_LANE3_IP4_UNUSED		0x3

#define J784S4_SERDES1_LANE0_QSGMII_LANE3	0x0
#define J784S4_SERDES1_LANE0_PCIE0_LANE0	0x1
#define J784S4_SERDES1_LANE0_IP3_UNUSED		0x2
#define J784S4_SERDES1_LANE0_IP4_UNUSED		0x3

#define J784S4_SERDES1_LANE1_QSGMII_LANE4	0x0
#define J784S4_SERDES1_LANE1_PCIE0_LANE1	0x1
#define J784S4_SERDES1_LANE1_IP3_UNUSED		0x2
#define J784S4_SERDES1_LANE1_IP4_UNUSED		0x3

#define J784S4_SERDES1_LANE2_QSGMII_LANE1	0x0
#define J784S4_SERDES1_LANE2_PCIE0_LANE2	0x1
#define J784S4_SERDES1_LANE2_PCIE2_LANE0	0x2
#define J784S4_SERDES1_LANE2_IP4_UNUSED		0x3

#define J784S4_SERDES1_LANE3_QSGMII_LANE2	0x0
#define J784S4_SERDES1_LANE3_PCIE0_LANE3	0x1
#define J784S4_SERDES1_LANE3_PCIE2_LANE1	0x2
#define J784S4_SERDES1_LANE3_IP4_UNUSED		0x3

#define J784S4_SERDES2_LANE0_QSGMII_LANE5	0x0
#define J784S4_SERDES2_LANE0_IP2_UNUSED		0x1
#define J784S4_SERDES2_LANE0_IP3_UNUSED		0x2
#define J784S4_SERDES2_LANE0_IP4_UNUSED		0x3

#define J784S4_SERDES2_LANE1_QSGMII_LANE6	0x0
#define J784S4_SERDES2_LANE1_IP2_UNUSED		0x1
#define J784S4_SERDES2_LANE1_IP3_UNUSED		0x2
#define J784S4_SERDES2_LANE1_IP4_UNUSED		0x3

#define J784S4_SERDES2_LANE2_QSGMII_LANE7	0x0
#define J784S4_SERDES2_LANE2_QSGMII_LANE1	0x1
#define J784S4_SERDES2_LANE2_IP3_UNUSED		0x2
#define J784S4_SERDES2_LANE2_IP4_UNUSED		0x3

#define J784S4_SERDES2_LANE3_QSGMII_LANE8	0x0
#define J784S4_SERDES2_LANE3_QSGMII_LANE2	0x1
#define J784S4_SERDES2_LANE3_IP3_UNUSED		0x2
#define J784S4_SERDES2_LANE3_IP4_UNUSED		0x3

#define J784S4_SERDES4_LANE0_EDP_LANE0		0x0
#define J784S4_SERDES4_LANE0_QSGMII_LANE5	0x1
#define J784S4_SERDES4_LANE0_IP3_UNUSED		0x2
#define J784S4_SERDES4_LANE0_IP4_UNUSED		0x3

#define J784S4_SERDES4_LANE1_EDP_LANE1		0x0
#define J784S4_SERDES4_LANE1_QSGMII_LANE6	0x1
#define J784S4_SERDES4_LANE1_IP3_UNUSED		0x2
#define J784S4_SERDES4_LANE1_IP4_UNUSED		0x3

#define J784S4_SERDES4_LANE2_EDP_LANE2		0x0
#define J784S4_SERDES4_LANE2_QSGMII_LANE7	0x1
#define J784S4_SERDES4_LANE2_IP3_UNUSED		0x2
#define J784S4_SERDES4_LANE2_IP4_UNUSED		0x3

#define J784S4_SERDES4_LANE3_EDP_LANE3		0x0
#define J784S4_SERDES4_LANE3_QSGMII_LANE8	0x1
#define J784S4_SERDES4_LANE3_USB		0x2
#define J784S4_SERDES4_LANE3_IP4_UNUSED		0x3

/* J722S */

#define J722S_SERDES0_LANE0_USB			0x0

#endif /* DTS_ARM64_TI_K3_SERDES_H */
