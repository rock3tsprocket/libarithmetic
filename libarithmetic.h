/*
 * Copyright 2026 rock3tsprocket
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * 
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef LIB_ARITHMETIC
#define LIB_ARITHMETIC

#include <stdint.h>

int64_t add(uint64_t x, uint64_t y) {
    if (!x)
        return y;
    if (!y)
        return x;

    int64_t result = 0;
    int64_t carry = 0;

    /* This is very long so I'd recommend you skip to line 371 for the real
     * action */
    result |= (int64_t)((x & 1L<<0)>>0 ^ (y & 1L<<0)>>0 ^ carry)<<0;
    if ((x & 1L<<0)>>0 && (y & 1L<<0)>>0 || (carry && (x & 1L<<0)>>0 ^ (y & 1L<<0)>>0))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<1)>>1 ^ (y & 1L<<1)>>1 ^ carry)<<1;
    if ((x & 1L<<1)>>1 && (y & 1L<<1)>>1 || (carry && (x & 1L<<1)>>1 ^ (y & 1L<<1)>>1))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<2)>>2 ^ (y & 1L<<2)>>2 ^ carry)<<2;
    if ((x & 1L<<2)>>2 && (y & 1L<<2)>>2 || (carry && (x & 1L<<2)>>2 ^ (y & 1L<<2)>>2))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<3)>>3 ^ (y & 1L<<3)>>3 ^ carry)<<3;
    if ((x & 1L<<3)>>3 && (y & 1L<<3)>>3 || (carry && (x & 1L<<3)>>3 ^ (y & 1L<<3)>>3))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<4)>>4 ^ (y & 1L<<4)>>4 ^ carry)<<4;
    if ((x & 1L<<4)>>4 && (y & 1L<<4)>>4 || (carry && (x & 1L<<4)>>4 ^ (y & 1L<<4)>>4))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<5)>>5 ^ (y & 1L<<5)>>5 ^ carry)<<5;
    if ((x & 1L<<5)>>5 && (y & 1L<<5)>>5 || (carry && (x & 1L<<5)>>5 ^ (y & 1L<<5)>>5))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<6)>>6 ^ (y & 1L<<6)>>6 ^ carry)<<6;
    if ((x & 1L<<6)>>6 && (y & 1L<<6)>>6 || (carry && (x & 1L<<6)>>6 ^ (y & 1L<<6)>>6))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<7)>>7 ^ (y & 1L<<7)>>7 ^ carry)<<7;
    if ((x & 1L<<7)>>7 && (y & 1L<<7)>>7 || (carry && (x & 1L<<7)>>7 ^ (y & 1L<<7)>>7))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<8)>>8 ^ (y & 1L<<8)>>8 ^ carry)<<8;
    if ((x & 1L<<8)>>8 && (y & 1L<<8)>>8 || (carry && (x & 1L<<8)>>8 ^ (y & 1L<<8)>>8))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<9)>>9 ^ (y & 1L<<9)>>9 ^ carry)<<9;
    if ((x & 1L<<9)>>9 && (y & 1L<<9)>>9 || (carry && (x & 1L<<9)>>9 ^ (y & 1L<<9)>>9))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<10)>>10 ^ (y & 1L<<10)>>10 ^ carry)<<10;
    if ((x & 1L<<10)>>10 && (y & 1L<<10)>>10 || (carry && (x & 1L<<10)>>10 ^ (y & 1L<<10)>>10))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<11)>>11 ^ (y & 1L<<11)>>11 ^ carry)<<11;
    if ((x & 1L<<11)>>11 && (y & 1L<<11)>>11 || (carry && (x & 1L<<11)>>11 ^ (y & 1L<<11)>>11))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<12)>>12 ^ (y & 1L<<12)>>12 ^ carry)<<12;
    if ((x & 1L<<12)>>12 && (y & 1L<<12)>>12 || (carry && (x & 1L<<12)>>12 ^ (y & 1L<<12)>>12))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<13)>>13 ^ (y & 1L<<13)>>13 ^ carry)<<13;
    if ((x & 1L<<13)>>13 && (y & 1L<<13)>>13 || (carry && (x & 1L<<13)>>13 ^ (y & 1L<<13)>>13))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<14)>>14 ^ (y & 1L<<14)>>14 ^ carry)<<14;
    if ((x & 1L<<14)>>14 && (y & 1L<<14)>>14 || (carry && (x & 1L<<14)>>14 ^ (y & 1L<<14)>>14))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<15)>>15 ^ (y & 1L<<15)>>15 ^ carry)<<15;
    if ((x & 1L<<15)>>15 && (y & 1L<<15)>>15 || (carry && (x & 1L<<15)>>15 ^ (y & 1L<<15)>>15))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<16)>>16 ^ (y & 1L<<16)>>16 ^ carry)<<16;
    if ((x & 1L<<16)>>16 && (y & 1L<<16)>>16 || (carry && (x & 1L<<16)>>16 ^ (y & 1L<<16)>>16))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<17)>>17 ^ (y & 1L<<17)>>17 ^ carry)<<17;
    if ((x & 1L<<17)>>17 && (y & 1L<<17)>>17 || (carry && (x & 1L<<17)>>17 ^ (y & 1L<<17)>>17))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<18)>>18 ^ (y & 1L<<18)>>18 ^ carry)<<18;
    if ((x & 1L<<18)>>18 && (y & 1L<<18)>>18 || (carry && (x & 1L<<18)>>18 ^ (y & 1L<<18)>>18))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<19)>>19 ^ (y & 1L<<19)>>19 ^ carry)<<19;
    if ((x & 1L<<19)>>19 && (y & 1L<<19)>>19 || (carry && (x & 1L<<19)>>19 ^ (y & 1L<<19)>>19))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<20)>>20 ^ (y & 1L<<20)>>20 ^ carry)<<20;
    if ((x & 1L<<20)>>20 && (y & 1L<<20)>>20 || (carry && (x & 1L<<20)>>20 ^ (y & 1L<<20)>>20))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<21)>>21 ^ (y & 1L<<21)>>21 ^ carry)<<21;
    if ((x & 1L<<21)>>21 && (y & 1L<<21)>>21 || (carry && (x & 1L<<21)>>21 ^ (y & 1L<<21)>>21))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<22)>>22 ^ (y & 1L<<22)>>22 ^ carry)<<22;
    if ((x & 1L<<22)>>22 && (y & 1L<<22)>>22 || (carry && (x & 1L<<22)>>22 ^ (y & 1L<<22)>>22))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<23)>>23 ^ (y & 1L<<23)>>23 ^ carry)<<23;
    if ((x & 1L<<23)>>23 && (y & 1L<<23)>>23 || (carry && (x & 1L<<23)>>23 ^ (y & 1L<<23)>>23))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<24)>>24 ^ (y & 1L<<24)>>24 ^ carry)<<24;
    if ((x & 1L<<24)>>24 && (y & 1L<<24)>>24 || (carry && (x & 1L<<24)>>24 ^ (y & 1L<<24)>>24))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<25)>>25 ^ (y & 1L<<25)>>25 ^ carry)<<25;
    if ((x & 1L<<25)>>25 && (y & 1L<<25)>>25 || (carry && (x & 1L<<25)>>25 ^ (y & 1L<<25)>>25))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<26)>>26 ^ (y & 1L<<26)>>26 ^ carry)<<26;
    if ((x & 1L<<26)>>26 && (y & 1L<<26)>>26 || (carry && (x & 1L<<26)>>26 ^ (y & 1L<<26)>>26))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<27)>>27 ^ (y & 1L<<27)>>27 ^ carry)<<27;
    if ((x & 1L<<27)>>27 && (y & 1L<<27)>>27 || (carry && (x & 1L<<27)>>27 ^ (y & 1L<<27)>>27))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<28)>>28 ^ (y & 1L<<28)>>28 ^ carry)<<28;
    if ((x & 1L<<28)>>28 && (y & 1L<<28)>>28 || (carry && (x & 1L<<28)>>28 ^ (y & 1L<<28)>>28))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<29)>>29 ^ (y & 1L<<29)>>29 ^ carry)<<29;
    if ((x & 1L<<29)>>29 && (y & 1L<<29)>>29 || (carry && (x & 1L<<29)>>29 ^ (y & 1L<<29)>>29))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<30)>>30 ^ (y & 1L<<30)>>30 ^ carry)<<30;
    if ((x & 1L<<30)>>30 && (y & 1L<<30)>>30 || (carry && (x & 1L<<30)>>30 ^ (y & 1L<<30)>>30))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<31)>>31 ^ (y & 1L<<31)>>31 ^ carry)<<31;
    if ((x & 1L<<31)>>31 && (y & 1L<<31)>>31 || (carry && (x & 1L<<31)>>31 ^ (y & 1L<<31)>>31))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<32)>>32 ^ (y & 1L<<32)>>32 ^ carry)<<32;
    if ((x & 1L<<32)>>32 && (y & 1L<<32)>>32 || (carry && (x & 1L<<32)>>32 ^ (y & 1L<<32)>>32))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<33)>>33 ^ (y & 1L<<33)>>33 ^ carry)<<33;
    if ((x & 1L<<33)>>33 && (y & 1L<<33)>>33 || (carry && (x & 1L<<33)>>33 ^ (y & 1L<<33)>>33))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<34)>>34 ^ (y & 1L<<34)>>34 ^ carry)<<34;
    if ((x & 1L<<34)>>34 && (y & 1L<<34)>>34 || (carry && (x & 1L<<34)>>34 ^ (y & 1L<<34)>>34))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<35)>>35 ^ (y & 1L<<35)>>35 ^ carry)<<35;
    if ((x & 1L<<35)>>35 && (y & 1L<<35)>>35 || (carry && (x & 1L<<35)>>35 ^ (y & 1L<<35)>>35))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<36)>>36 ^ (y & 1L<<36)>>36 ^ carry)<<36;
    if ((x & 1L<<36)>>36 && (y & 1L<<36)>>36 || (carry && (x & 1L<<36)>>36 ^ (y & 1L<<36)>>36))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<37)>>37 ^ (y & 1L<<37)>>37 ^ carry)<<37;
    if ((x & 1L<<37)>>37 && (y & 1L<<37)>>37 || (carry && (x & 1L<<37)>>37 ^ (y & 1L<<37)>>37))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<38)>>38 ^ (y & 1L<<38)>>38 ^ carry)<<38;
    if ((x & 1L<<38)>>38 && (y & 1L<<38)>>38 || (carry && (x & 1L<<38)>>38 ^ (y & 1L<<38)>>38))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<39)>>39 ^ (y & 1L<<39)>>39 ^ carry)<<39;
    if ((x & 1L<<39)>>39 && (y & 1L<<39)>>39 || (carry && (x & 1L<<39)>>39 ^ (y & 1L<<39)>>39))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<40)>>40 ^ (y & 1L<<40)>>40 ^ carry)<<40;
    if ((x & 1L<<40)>>40 && (y & 1L<<40)>>40 || (carry && (x & 1L<<40)>>40 ^ (y & 1L<<40)>>40))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<41)>>41 ^ (y & 1L<<41)>>41 ^ carry)<<41;
    if ((x & 1L<<41)>>41 && (y & 1L<<41)>>41 || (carry && (x & 1L<<41)>>41 ^ (y & 1L<<41)>>41))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<42)>>42 ^ (y & 1L<<42)>>42 ^ carry)<<42;
    if ((x & 1L<<42)>>42 && (y & 1L<<42)>>42 || (carry && (x & 1L<<42)>>42 ^ (y & 1L<<42)>>42))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<43)>>43 ^ (y & 1L<<43)>>43 ^ carry)<<43;
    if ((x & 1L<<43)>>43 && (y & 1L<<43)>>43 || (carry && (x & 1L<<43)>>43 ^ (y & 1L<<43)>>43))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<44)>>44 ^ (y & 1L<<44)>>44 ^ carry)<<44;
    if ((x & 1L<<44)>>44 && (y & 1L<<44)>>44 || (carry && (x & 1L<<44)>>44 ^ (y & 1L<<44)>>44))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<45)>>45 ^ (y & 1L<<45)>>45 ^ carry)<<45;
    if ((x & 1L<<45)>>45 && (y & 1L<<45)>>45 || (carry && (x & 1L<<45)>>45 ^ (y & 1L<<45)>>45))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<46)>>46 ^ (y & 1L<<46)>>46 ^ carry)<<46;
    if ((x & 1L<<46)>>46 && (y & 1L<<46)>>46 || (carry && (x & 1L<<46)>>46 ^ (y & 1L<<46)>>46))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<47)>>47 ^ (y & 1L<<47)>>47 ^ carry)<<47;
    if ((x & 1L<<47)>>47 && (y & 1L<<47)>>47 || (carry && (x & 1L<<47)>>47 ^ (y & 1L<<47)>>47))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<48)>>48 ^ (y & 1L<<48)>>48 ^ carry)<<48;
    if ((x & 1L<<48)>>48 && (y & 1L<<48)>>48 || (carry && (x & 1L<<48)>>48 ^ (y & 1L<<48)>>48))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<49)>>49 ^ (y & 1L<<49)>>49 ^ carry)<<49;
    if ((x & 1L<<49)>>49 && (y & 1L<<49)>>49 || (carry && (x & 1L<<49)>>49 ^ (y & 1L<<49)>>49))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<50)>>50 ^ (y & 1L<<50)>>50 ^ carry)<<50;
    if ((x & 1L<<50)>>50 && (y & 1L<<50)>>50 || (carry && (x & 1L<<50)>>50 ^ (y & 1L<<50)>>50))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<51)>>51 ^ (y & 1L<<51)>>51 ^ carry)<<51;
    if ((x & 1L<<51)>>51 && (y & 1L<<51)>>51 || (carry && (x & 1L<<51)>>51 ^ (y & 1L<<51)>>51))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<52)>>52 ^ (y & 1L<<52)>>52 ^ carry)<<52;
    if ((x & 1L<<52)>>52 && (y & 1L<<52)>>52 || (carry && (x & 1L<<52)>>52 ^ (y & 1L<<52)>>52))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<53)>>53 ^ (y & 1L<<53)>>53 ^ carry)<<53;
    if ((x & 1L<<53)>>53 && (y & 1L<<53)>>53 || (carry && (x & 1L<<53)>>53 ^ (y & 1L<<53)>>53))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<54)>>54 ^ (y & 1L<<54)>>54 ^ carry)<<54;
    if ((x & 1L<<54)>>54 && (y & 1L<<54)>>54 || (carry && (x & 1L<<54)>>54 ^ (y & 1L<<54)>>54))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<55)>>55 ^ (y & 1L<<55)>>55 ^ carry)<<55;
    if ((x & 1L<<55)>>55 && (y & 1L<<55)>>55 || (carry && (x & 1L<<55)>>55 ^ (y & 1L<<55)>>55))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<56)>>56 ^ (y & 1L<<56)>>56 ^ carry)<<56;
    if ((x & 1L<<56)>>56 && (y & 1L<<56)>>56 || (carry && (x & 1L<<56)>>56 ^ (y & 1L<<56)>>56))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<57)>>57 ^ (y & 1L<<57)>>57 ^ carry)<<57;
    if ((x & 1L<<57)>>57 && (y & 1L<<57)>>57 || (carry && (x & 1L<<57)>>57 ^ (y & 1L<<57)>>57))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<58)>>58 ^ (y & 1L<<58)>>58 ^ carry)<<58;
    if ((x & 1L<<58)>>58 && (y & 1L<<58)>>58 || (carry && (x & 1L<<58)>>58 ^ (y & 1L<<58)>>58))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<59)>>59 ^ (y & 1L<<59)>>59 ^ carry)<<59;
    if ((x & 1L<<59)>>59 && (y & 1L<<59)>>59 || (carry && (x & 1L<<59)>>59 ^ (y & 1L<<59)>>59))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<60)>>60 ^ (y & 1L<<60)>>60 ^ carry)<<60;
    if ((x & 1L<<60)>>60 && (y & 1L<<60)>>60 || (carry && (x & 1L<<60)>>60 ^ (y & 1L<<60)>>60))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<61)>>61 ^ (y & 1L<<61)>>61 ^ carry)<<61;
    if ((x & 1L<<61)>>61 && (y & 1L<<61)>>61 || (carry && (x & 1L<<61)>>61 ^ (y & 1L<<61)>>61))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<62)>>62 ^ (y & 1L<<62)>>62 ^ carry)<<62;
    if ((x & 1L<<62)>>62 && (y & 1L<<62)>>62 || (carry && (x & 1L<<62)>>62 ^ (y & 1L<<62)>>62))
        carry = 1;
    else
        carry = 0;
    result |= (int64_t)((x & 1L<<63)>>63 ^ (y & 1L<<63)>>63 ^ carry)<<63;
    if ((x & 1L<<63)>>63 && (y & 1L<<63)>>63 || (carry && (x & 1L<<63)>>63 ^ (y & 1L<<63)>>63))
        carry = 1;
    else
        carry = 0;

    return result;
}

int64_t sub(int64_t x, int64_t y) {
    if (!y)
        return x;

    y = ~y;
    y = add(y, 1);
    return add(x, y);
}

uint8_t eq(int64_t x, int64_t y) {
    if (!sub(x, y))
        return 1;
    return 0;
}

int64_t mul(int64_t x, int64_t y) {
    if (!x || !y)
        return 0;
    if (eq(x, 1))
        return y;
    if (eq(y, 1))
        return x;

    int64_t orig_x = x;
    while (!eq(y, 1))
        x = add(x, orig_x), y = sub(y, 1);
    return x;
}

uint8_t bitlen(uint64_t x) {
    uint8_t i = 63;
    while (!eq((x & (1 << i))>>i, 1))
        i = sub(i, 1);
    return add(i, 1);
}

uint64_t div(uint64_t x, uint64_t y) {
    if (eq(y, 0))
        return 0;
    if (eq(y, 1))
        return x;
    
    int64_t q = 0;
    int64_t r = 0;
    int8_t i = sub(bitlen(x), 1);
    while (i >= 0) {
        r <<= 1;
        r |= (x & 1<<i)>>i;
        if (r >= y)
            r -= y, q |= 1<<i;
        i = sub(i, 1);
    }
    return q;
}

uint64_t mod(uint64_t x, uint64_t y) {
    if (!y)
        return 0xFFFFFFFFFFFFFFFF;
    if (eq(y, 1) || eq(x, y) || !x)
        return 0;

    return sub(x, mul(div(x, y), y));
}

#endif /* LIB_ARITHMETIC */
