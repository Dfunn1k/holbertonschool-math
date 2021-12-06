#include "holberton.h"
/**
 * multiplication - Performs the multiplication operation to complex numbers
 * followed by a new line.
 * @c1: first complex number
 * @c2: second complex number
 * @c3: pointer to complex number
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
