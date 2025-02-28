/*
winnie - an experimental window system

Copyright (C) 2013 Eleni Maria Stea

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Author: Eleni Maria Stea <elene.mst@gmail.com>
*/

#ifndef MOUSE_CURSOR_H_
#define MOUSE_CURSOR_H_

const int mouse_cursor_width = 8;
const int mouse_cursor_height = 16;

const int mouse_cursor_bw[] = {
	255, 255,   0,   0,   0,   0,   0,   0,
	255, 1, 255,   0,   0,   0,   0,   0,
	255, 1, 1, 255,   0,   0,   0,   0,
	255, 1, 1, 1, 255,   0,   0,   0,
	255, 1, 1, 1, 1, 255,   0,   0,
	255, 1, 1, 1, 1, 1, 255,   0,
	255, 1, 1, 1, 1, 1, 1, 255,
	255, 1, 1, 1, 1, 1, 255,   0,
	255, 1, 1, 1, 1, 255,   0,   0,
	255, 1, 1, 1, 1, 255,   0,   0,
	255, 1, 1, 1, 1, 1, 255,   0,
	255, 1, 1, 1, 1, 1, 255,   0,
	255, 1, 255, 255, 1, 1, 1, 255,
	255, 255,   0, 255, 1, 1, 1, 255,
	255,   0,   0,   0, 255, 1, 1, 255,
	  0,   0,   0,   0,   0, 255, 255, 255
};



#endif	// MOUSE_CURSOR_H_
