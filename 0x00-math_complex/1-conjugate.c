#include "holberton.h"
/**
 * conjugate - Create a conjugate,
 * followed by a new line.
 * @c: Complex number
 *
 * Return: The conjugate of a given complex number.
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
