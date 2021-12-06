#include "holberton.h"
/**
 * argument - gets the argument of a given complex number
 * followed by a new line.
 * @c: complex number
 *
 * Return: the argument of a given complex number.
 */
double argument(complex c)
{
	if (c.re != 0)
		return (atan(c.im / c.re));
	else
		return (0);
}
