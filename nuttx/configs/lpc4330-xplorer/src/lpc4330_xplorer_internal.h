/****************************************************************************
 * configs/lpc4330-xplorer/src/lpc4330_xplorer_internal.h
 * arch/arm/src/board/lpc4330-xplorer_internal.n
 *
 *   Copyright (C) 2012 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef _CONFIGS_LPC4330_XPLORER_SRC_LPC4330_XPLORER_INTERNAL_H
#define _CONFIGS_LPC4330_XPLORER_SRC_LPC4330_XPLORER_INTERNAL_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <nuttx/compiler.h>

/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 *  LEDs GPIO                         PIN     SIGNAL NAME
 *  -------------------------------- ------- --------------
 *  gpio1[12] - LED D2                J10-20  LED1
 *  gpio1[11] - LED D3                J10-17  LED2
 ****************************************************************************/

#define LPC4330_XPLORER_LED1      (GPIO_OUTPUT | GPIO_PORT1 | GPIO_PIN12)
#define LPC4330_XPLORER_LED1_OFF  LPC4330_XPLORER_LED1
#define LPC4330_XPLORER_LED1_ON   (LPC4330_XPLORER_LED1 | GPIO_VALUE_ONE)
#define LPC4330_XPLORER_LED2      (GPIO_OUTPUT | GPIO_PORT1 | GPIO_PIN11)
#define LPC4330_XPLORER_LED2_OFF  LPC4330_XPLORER_LED2
#define LPC4330_XPLORER_LED2_ON   (LPC4330_XPLORER_LED2 | GPIO_VALUE_ONE)

#define LPC4330_XPLORER_HEARTBEAT LPC4330_XPLORER_LED2

/****************************************************************************
 *  Buttons GPIO                      PIN     SIGNAL NAME
 *  -------------------------------- ------- --------------
 *  gpio0[7]  - User Button SW2       J8-25   BTN1
 ****************************************************************************/

#define LPC4330_XPLORER_BUT1      (GPIO_INTBOTH | GPIO_FLOAT | GPIO_PORT0 | GPIO_PIN7)

/* Button IRQ numbers */

#define LPC4330_XPLORER_BUT1_IRQ  LPC43_IRQ_P0p23

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public data
 ****************************************************************************/

#ifndef __ASSEMBLY__

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: lpc43_sspinitialize
 *
 * Description:
 *   Called to configure SPI chip select GPIO pins for the Lincoln 80 board.
 *
 ****************************************************************************/

extern void weak_function lpc43_sspinitialize(void);

#endif /* __ASSEMBLY__ */
#endif /* _CONFIGS_LPC4330_XPLORER_SRC_LPC4330_XPLORER_INTERNAL_H */