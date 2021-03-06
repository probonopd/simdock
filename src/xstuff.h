/*  
 *   Copyright 2007 Simone Della Longa <simonedll@yahoo.it>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef XSTUFF_H_
#define XSTUFF_H_

#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <xcb/xcb_ewmh.h>
#include "main.h"
#include "tasks.h"


/* Resizes the screen to fit the wxFrame.
 * if dock then sets the window style to dock
 * if position then automatically positions the wxFrame
 */
bool xstuff_resizeScreen(Window winID, const wxFrame & frame);

void xstuff_setDefaultWindowFlags(Window winID);

bool xstuff_setStrut(Window winID, int size);

xcb_ewmh_connection_t* xstuff_getConnection();

void xstuff_closeConnection(xcb_ewmh_connection_t* ewmh_conn);

#endif
