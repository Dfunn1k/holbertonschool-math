#include "holberton.h"
/**
 * addition - performs the addition operation to complex numbers
 * followed by a new line.
 * @c1: first complex number
 * @c2: second complex number
 * @c3: pointer to complex number
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
