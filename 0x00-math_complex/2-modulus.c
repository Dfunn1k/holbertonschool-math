#include "holberton.h"
/**
 * modulus - gets the modulus of a given complex number
 * followed by a new line.
 * @c: complex number
 *
 * Return: the modulus of a given complex number
 */
double modulus(complex c)
{
	return (sqrt((c.re * c.re) + (c.im * c.im)));
}
