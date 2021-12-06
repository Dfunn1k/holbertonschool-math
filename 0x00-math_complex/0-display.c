#include "holberton.h"
/**
 *display_complex_number - display a complex nummber
 *@c: estructure
 */
void display_complex_number(complex c)
{
	char i = '+';

	if (c.im < 0)
	{
		c.im = -(c.im);
		i = '-';
	}
	if (c.re != 0 && c.im != 0)
	{
		if (c.im == 1)
			printf("%.9g %c i\n", c.re, i);
		else
			printf("%.9g %c %.9gi\n", c.re, i, c.im);
	}
	else if (c.im == 0)
		printf("%.9g\n", c.re);
	else if (c.re == 0)
	{
		if (c.im == 1)
			printf("i\n");
		else if (c.im > 1)
			printf("%.9gi\n", c.im);
		else if (c.im < 0)
			printf("%c %.9gi\n", i, c.im);
	}
}
