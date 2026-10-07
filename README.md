# libarithmetic
Header-only library that implements basic arithmetic operations from scratch.

## But why?
"Science isn't about WHY, it's about WHY NOT. Why is so much of our science
dangerous? Why not marry safe science if you love it so much? In fact, why
not invent a special safety door that won't hit you on the butt on the way out,
because you are fired." -Cave Johnson, 1950s

## Copyright (can I even copyright this?)
This "library" is licensed under the BSD-3-Clause license. See
[LICENSE.md][LICENSE.md] for more information.

## API reference

```
int64_t add(int64_t x, int64_t y)
```
Sums `x` and `y` and returns the sum.

```
int64_t sub(int64_t x, int64_t y)
```
Subtracts `y` from `x` and returns the difference.

```
uint8_t eq(int64_t x, int64_t y)
```
Returns 1 if `x` equals `y`, otherwise returns 0.

```
int64_t mul(int64_t x, int64_t y)
```
Multiplies `x` and `y` and returns the product.

```
uint8_t bitlen(uint64_t x)
```
Returns the position of the highest bit in the number. Technically supposed to
be private, but if one needs it, it's there.

```
uint64_t div(uint64_t x, uint64_t y)
```
Performs unsigned Euclidean division with `x` as the dividend and `y` as the
divisor and returns the quotient.

```
uint64_t mod(uint64_t x, uint64_t y)
```
Performs unsigned Euclidean division with `x` as the dividend and `y` as the
divisor and returns the remainder.
