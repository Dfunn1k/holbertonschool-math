#ifndef _COMPLEX_NUM_
#define _COMPLEX_NUM_
#include <stdio.h>
/**
 *struct complex- struct to complex number
 *@re: Real number
 *@im: imaginary number
 *
 *Description_ Struct to complex number
 */
typedef struct complex
{
	double re;
	double im;

} complex;
void display_complex_number(complex c);
#endif
