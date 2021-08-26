#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TMin INT_MIN
#define TMax INT_MAX

#include "btest.h"
#include "bits.h"

test_rec test_set[] = {
/* Copyright (C) 1991-2012 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* Define __STDC_IEC_559__ and other similar macros.  */
/* Copyright (C) 2005 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
/* We do support the IEC 559 math functionality, real and complex.  */
/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */
/* We do not support C11 <threads.h>.  */
 {"i_dont_need_highheels", (funct_t) i_dont_need_highheels, (funct_t) test_i_dont_need_highheels, 1,
    "! ~ & ^ | + << >>", 12, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"BIGGER_BETTER", (funct_t) BIGGER_BETTER, (funct_t) test_BIGGER_BETTER, 2, "! ~ & ^ | + - < >", 12, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"urgh", (funct_t) urgh, (funct_t) test_urgh, 2, "! ~ ^ |", 8, 2,
     {{0,1},{0,1},{TMin,TMax}}},
 {"ocd", (funct_t) ocd, (funct_t) test_ocd, 3,
    "! ~ & ^ | + - << >>", 20, 3,
  {{TMin, TMax},{0,3},{0,255}}},
 {"poof", (funct_t) poof, (funct_t) test_poof, 3,
    "! ~ & ^ | + << >>", 18, 3,
  {{TMin, TMax},{0,3},{0,255}}},
 {"limit_break", (funct_t) limit_break, (funct_t) test_limit_break, 2,
    "! ~ & ^ | + << >>", 24, 3,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"kitkat_storm", (funct_t) kitkat_storm, (funct_t) test_kitkat_storm, 1, "! ~ & ^ | + << >>", 60, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"float_fishy_storm", (funct_t) float_fishy_storm, (funct_t) test_float_fishy_storm, 1,
    "$", 10, 1,
     {{2, 2},{2,2},{2,2}}},
 {"float_bad", (funct_t) float_bad, (funct_t) test_float_bad, 1,
    "$", 10, 2,
     {{1, 1},{1,1},{1,1}}},
 {"float_sixpack", (funct_t) float_sixpack, (funct_t) test_float_sixpack, 1,
    "$", 10, 2,
     {{1, 1},{1,1},{1,1}}},
  {"", NULL, NULL, 0, "", 0, 0,
   {{0, 0},{0,0},{0,0}}}
};
