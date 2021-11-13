#include "holberton.h"
/**
 *display_complex_number - display a complex nummber
 *@c: estructure
 */
void display_complex_number(complex c)
{
	if (c.re != 0 && c.im != 0)
		printf("%.f + %.fi\n", c.re, c.im);
	if (c.re == 0)
		printf("%.fi\n", c.im);
	if (c.im == 0)
		printf("%.f\n", c.re);
}
