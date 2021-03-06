/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012,2013 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for Embedded Artists LPCXpresso Base Board with LPC1114 daughter
 * board.
 */

/*
 * Board identifiers.
 */
#define BOARD_EA_BB_LPC11U14
#define BOARD_NAME "Embedded Artists LPCXpresso Base Board + LPC11U14"

/*
 * Board frequencies.
 */
#define SYSOSCCLK               12000000

/*
 * SCK0 connection on this board.
 */
#define LPC11xx_SPI_SCK0_SELECTOR SCK0_IS_PIO2_11

/*
 * GPIO 0 initial setup.
 */
#define VAL_GPIO0DIR            PAL_PORT_BIT(GPIO0_OLEDSEL)   |             \
                                PAL_PORT_BIT(GPIO0_USB_DPCTL) |             \
                                PAL_PORT_BIT(GPIO0_LED2)      |             \
                                PAL_PORT_BIT(GPIO0_LED3B)     |             \
                                PAL_PORT_BIT(GPIO0_LED3R)     |             \
                                PAL_PORT_BIT(GPIO0_LED3G)     |             \
                                PAL_PORT_BIT(GPIO0_SPI0SEL)
#define VAL_GPIO0DATA           PAL_PORT_BIT(GPIO0_OLEDSEL)   |             \
                                PAL_PORT_BIT(GPIO0_LED2)      |             \
                                PAL_PORT_BIT(GPIO0_LED3B)     |             \
                                PAL_PORT_BIT(GPIO0_LED3R)     |             \
                                PAL_PORT_BIT(GPIO0_LED3G)     |             \
                                PAL_PORT_BIT(GPIO0_SPI0SEL)

/*
 * GPIO 1 initial setup.
 */
#define VAL_GPIO1DIR            0x00000000
#define VAL_GPIO1DATA           0x00000000

/*
 * Pin definitions.
 */
#define GPIO0_SW3               1
#define GPIO0_OLEDSEL           2
#define GPIO0_USB_VBUS          3
#define GPIO0_USB_DPCTL         6
#define GPIO0_LED2              7
#define GPIO0_SW4               16
#define GPIO0_LED3B             14
#define GPIO0_LED3R             21
#define GPIO0_LED3G             22
#define GPIO0_SPI0SEL           23

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
