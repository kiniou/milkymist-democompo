/*
 * Milkymist Democompo
 * Copyright (C) 2007, 2008, 2009 Sebastien Bourdeauducq
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __COLOR_H
#define __COLOR_H

#define RMASK 0xf800
#define RSHIFT 11
#define GMASK 0x07e0
#define GSHIFT 5
#define BMASK 0x001f
#define BSHIFT 0

/* Takes 0-31 (R, B) or 0-63 (G) components */
#define MAKERGB565(r, g, b) ((((r) & 0x1f) << RSHIFT) | (((g) & 0x3f) << GSHIFT) | (((b) & 0x1f) << BSHIFT))

/* Takes 0-255 components */
#define MAKERGB565N(r, g, b) ((((r) & 0xf8) << 8) | (((g) & 0xfc) << 3) | (((b) & 0xf8) >> 3))

/* Retreives 0-31 (R, B) or 0-63 (G) components */
#define GETR(c) (((c) & RMASK) >> RSHIFT)
#define GETG(c) (((c) & GMASK) >> GSHIFT)
#define GETB(c) (((c) & BMASK) >> BSHIFT)

#endif /* __COLOR_H */
