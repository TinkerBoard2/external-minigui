/*
 *   This file is part of MiniGUI, a mature cross-platform windowing 
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 * 
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/en/about/licensing-policy/>.
 */
/*
** cisco_touchpad.h: the head file of Low Level Input Engine for 
**             Cisco touchpad 
**
** Created by Zhao Chengzhang, 2010/03/24
*/

#ifndef _IAL_CISCO_TOUCHPAD_H
#define _IAL_CISCO_TOUCHPAD_H

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#define CMD_SET_MODE     1
#define MICE_MODE        0
#define APP_MODE         1

BOOL    InitCiscoTouchpadInput (INPUT* input, const char* mdev, const char* mtype);
void    TermCiscoTouchpadInput (void);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* _IAL_CISCO_TOUCHPAD_H*/
