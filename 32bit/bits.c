#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
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
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */
/* We do not support C11 <threads.h>.  */
/* 
 * i_dont_need_highheels - Mengembalikan nilai 1 jika dan hanya jika x dapat direpesentasikan 
 *   sebagai integer 16-bit, two's complement.
 *   Contoh: i_dont_need_highheels(33000)  = 0 
 *			 i_dont_need_highheels(-32768) = 1
 *   Operator yang diperbolehkan: ! ~ & ^ | + << >>
 *   Jumlah maksimum operator: 12
 *   Tingkat kesulitan: 1
 */
int i_dont_need_highheels(int x) {
  return 2;
}
/*
 * BIGGER_BETTER - Mengembalikan nilai yang lebih besar antara x dan y
 *   Contoh: BIGGER_BETTER(5, 1) = 5
 *           BIGGER_BETTER(3, 7) = 7
 *   Operator yang diperbolehkan: ! ~ & ^ | + - < >
 *   Jumlah operator maksimum: 12
 *   Tingkat kesulitan: 2
 */
int BIGGER_BETTER(int x, int y) {
 return 2;
}
/* 
 * urgh - Mengembalikan nilai "jika x maka y". Dalam kasus ini, nilai 1
 * berarti true dan nilai 0 berarti false
 *   Contoh: urgh(1,1) = 1
 *           urgh(1,0) = 0
 *   Operator yang diperbolehkan: ! ~ ^ |
 *   Jumlah operator maksimum: 8
 *   Tingkat kesulitan: 2
 */
int urgh(int x, int y) {
    return 2;
}
/* 
 * ocd(x,n,c) - Mengubah nilai x menjadi y, dimana y adalah bilangan pangkat 2 
 *                   terkecil yang lebih besar atau sama dengan x
 *      Contoh: ocd(3) = 4
 *                 ocd(8) = 8
 *      Operator yang diperbolehkan: ! ~ & ^ | + - << >>
 *   Jumlah operator maksimum: 20
 *     Tingkat kesulitan: 3
 */
int ocd(int x) {
 return 2;
}
/* 
 * poof(x,n,c) - Mengubah byte ke-n pada x dengan nilai c. Byte ke-n dihitung 
 *   dari Least Significant Byte (LSB = Byte ke-0, MSB = Byte ke-3)
 *   Contoh: poof(0x051234ab,1,0xfg) = 0x0512fgab
 *   Dalam soal ini: 0 <= n <= 3 dan 0 (00000000) <= c <= 255 (11111111)
 *   Operator yang diperbolehkan: ! ~ & ^ | + << >>
 *   Jumlah operator maksimum: 18
 *   Tingkat kesulitan: 3
 */
int poof(int x, int n, int c) {
  return 2;
}
/* 
 * limit_break - Tentukan apakah dua buah integer dapat dijumlahkan tanpa terjadi limit_break
 *   Contoh: limit_break(0x80000000,0x80000000) = 0
 *           limit_break(0x80000000,0x70000000) = 1 
 *   Operator yang diperbolehkan: ! ~ & ^ | + << >>
 *   Jumlah maksimum operator: 24
 *   Tingkat kesulitan: 3
 */
int limit_break(int x, int y) {
  return 2;
}
/*
 * kitkat_storm - Menghitung jumlah digit 1 yang berurutan dimulai dari bit yang
 *   paling signifikan.
 *   Contoh: kitkat_storm(-1) = 32, kitkat_storm(0xff012345) = 8
 *   Operator yang diperbolehkan: ! ~ & ^ | + << >>
 *   Jumlah operator maksimum: 60
 *   Tingkat kesulitan: 4
 */
int kitkat_storm(int x) {
  return 2;
}
/* 
 * float_fishy_storm - Mengembalikan nilai logaritma basis 2 pada nilai floating point
 *   Argumen diberikan dalam bentuk unsigned integer, namun harus
 *   diinterpretasi sebagai representasi bit suatu nilai floating point.
 *   Jika nilai yang diberikan merupakan NaN atau infinity, kembalikan nilai 
 *   128 dengan tanda yang sama dengan tanda pada argumen (positif atau negatif).
 *   Asumsikan semua bilangan tidak memiliki representasi denormalized float.
 *   Contoh: float_fishy_storm(0x3f800000) = 0 (0x3f800000 adalah representasi float untuk 1.0)
 *           float_fishy_storm(0x40000000) = 1 (0x40000000 adalah representasi float untuk 2.0)
 *           float_fishy_storm(0x3f000000) = -1 (0x3f000000 adalah representasi float untuk 0.5)
 *           float_fishy_storm(0x40400000) = 1 (0x40400000 adalah representasi float untuk 3.0, hasil dibulatkan kebawah)
 *           float_fishy_storm(0x3ecccccd) = -2 (0x3ecccccd adalah representasi float untuk 0.4, hasil dibulatkan kebawah)
 *           float_fishy_storm(0x7f800000) = 128 (0x7f800000 adalah representasi float untuk inf)
 *           float_fishy_storm(0xffc00000) = -128 (0xffc00000 adalah representasi float untuk -NaN)
 *   Operator yang diperbolehkan: Semua operasi integer/unsigned termasuk ||, &&, if, while.
 *   Jumlah operator maksimum: 10
 *   Tingkat kesulitan: 1
 */
int float_fishy_storm(unsigned uf) {
  return 2;
}
/* 
 * float_bad - Mengembalikan nilai dari -f
 *   Nilai parameter dan nilai kembalian berupa unsigned int yang merupakan representasi susunan bit dari floating point
 *   Jika nilai parameternya NaN, kembalikan nilai parameter
 *   Operator yang diperbolehkan: Apapun dibolehkan :)
 *   Jumlah operator maksimum: 10
 *   Tingkat kesulitan: 2
 */
unsigned float_bad(unsigned uf) {
 return 2;
}
/* 
 * float_sixpack - Hasilkan nilai absolut dari sebuah floating point
 *   Parameter dan nilai kembalian merupakan unsigned int, yang merupakan representasi dari susunan bit sebuah floating point yang terdiri dari sign, exponent, dan mantissa.
 *   Contoh: floating point = 1.5
 *   Representasi bit: 00111111110000000000000000000000
 *   Unsigned int: 1069547520
 *   Jika nilai parameter adalah Not a Number (NaN), kembalikan nilai parameter
 *   Operator yang diperbolehkan: Apapun dibolehkan :)
 *   Jumlah operator maksimum: 10
 *   Tingkat kesulitan: 2
 */
unsigned float_sixpack(unsigned uf) {
  return 2;
}
