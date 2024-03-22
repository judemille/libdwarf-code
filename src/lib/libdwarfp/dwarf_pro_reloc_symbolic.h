/*

  Copyright (C) 2000,2004 Silicon Graphics, Inc.  All Rights Reserved.

  This program is free software; you can redistribute it
  and/or modify it under the terms of version 2.1 of the
  GNU Lesser General Public License as published by the Free
  Software Foundation.

  This program is distributed in the hope that it would be
  useful, but WITHOUT ANY WARRANTY; without even the implied
  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  Further, this software is distributed without any warranty
  that it is free of the rightful claim of any third person
  regarding infringement or the like.  Any license provided
  herein, whether implied or otherwise, applies only to this
  software file.  Patent licenses, if any, provided herein
  do not apply to combinations of this program with other
  software, or any other product whatsoever.

  You should have received a copy of the GNU Lesser General
  Public License along with this program; if not, write the
  Free Software Foundation, Inc., 51 Franklin Street - Fifth
  Floor, Boston MA 02110-1301, USA.
*/

#ifndef DWARF_PRO_RELOC_SYMBOLIC_H
#define DWARF_PRO_RELOC_SYMBOLIC_H

#include "libdwarf.h"
#include "libdwarfp.h"

int _dwarf_pro_reloc_name_symbolic(Dwarf_P_Debug dbg,
    int base_sec_index,
    Dwarf_Unsigned offset,/* r_offset of reloc */
    Dwarf_Unsigned symidx,
    enum Dwarf_Rel_Type,
    int reltarget_length);
int _dwarf_pro_reloc_length_symbolic(Dwarf_P_Debug dbg,
    int base_sec_index,
    Dwarf_Unsigned offset,  /* r_offset of reloc */
    Dwarf_Unsigned start_symidx,
    Dwarf_Unsigned end_symidx,
    enum Dwarf_Rel_Type,
    int reltarget_length);
int _dwarf_symbolic_relocs_to_disk(Dwarf_P_Debug dbg,
    Dwarf_Signed * new_sec_count);

#endif // DWARF_PRO_RELOC_SYMBOLIC_H
