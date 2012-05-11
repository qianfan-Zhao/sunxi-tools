/*
 * Copyright (C) 2012  Alejandro Mery <amery@geeks.cl>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SUBXI_TOOLS_SCRIPT_BIN_H
#define _SUBXI_TOOLS_SCRIPT_BIN_H

size_t script_bin_size(struct script *script,
		       size_t *sections, size_t *entries);

int script_generate_bin(void *bin, size_t bin_size, struct script *script,
			size_t sections, size_t entries);
int script_decompile_bin(void *bin, size_t bin_size,
			 const char *filename,
			 struct script *script);
#endif