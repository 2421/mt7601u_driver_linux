/*
 *************************************************************************
 * Ralink Tech Inc.
 * 5F., No.36, Taiyuan St., Jhubei City,
 * Hsinchu County 302,
 * Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2010, Ralink Technology, Inc.
 *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                       *
 *************************************************************************/


#ifndef __STA_CFG_H__
#define __STA_CFG_H__

INT RTMPSTAPrivIoctlSet(
	IN RTMP_ADAPTER *pAd,
	IN PSTRING SetProcName,
	IN PSTRING ProcArg);

#if (defined(WOW_SUPPORT) && defined(RTMP_MAC_USB)) || defined(NEW_WOW_SUPPORT)
/* set WOW enable */
INT Set_WOW_Enable(
        IN PRTMP_ADAPTER        pAd,
        IN PSTRING              arg);
/* set GPIO pin for wake-up signal */
INT Set_WOW_GPIO(
        IN PRTMP_ADAPTER        pAd,
        IN PSTRING              arg);
/* set delay time for WOW really enable */
INT Set_WOW_Delay(
        IN PRTMP_ADAPTER        pAd,
        IN PSTRING              arg);
/* set wake up hold time */
INT Set_WOW_Hold(
		IN PRTMP_ADAPTER		pAd,
		IN PSTRING				arg);
/* set wakeup signal type */
INT Set_WOW_InBand(
		IN PRTMP_ADAPTER		pAd,
		IN PSTRING				arg);
#endif /* (defined(WOW_SUPPORT) && defined(RTMP_MAC_USB)) || defined(NEW_WOW_SUPPORT) */

#ifdef RTMP_MAC_USB
/* Sets the FW into WOW Suspend mode */
INT Set_UsbWOWSuspend(
		IN PRTMP_ADAPTER		pAd,
		IN PSTRING				arg);
/* Resume the FW to Normal mode */
INT Set_UsbWOWResume(
		IN PRTMP_ADAPTER		pAd,
		IN PSTRING				arg);
#endif /* RTMP_MAC_USB */

#endif /* __STA_CFG_H__ */
