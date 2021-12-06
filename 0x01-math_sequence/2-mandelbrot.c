#include <stdio.h>

/**
 * main - mandelbrot
 * Return: 0
 */
int main(void)
{
	int A, B, i, z = 100;
	int w, h;
	double a, b, x, y, r;
	double n = 100;
	FILE *pgmimg;

	w = z * 4, h = z * 4;
	printf("Holberton School\n");
	printf("Mandelbrot's set image created in mandelbrot.pgm file\n");
	pgmimg = fopen("mandelbrot.pgm", "wb");
	fprintf(pgmimg, "P2\n");
	fprintf(pgmimg, "%d %d\n", w, h);
	fprintf(pgmimg, "255\n");
	for (B = 0; B < 4 * n; B++)
	{
		b = 2 - (B / n);
		for (A = 0; A < 4 * n; A++)
		{
			a = -2 + (A / n);
			x = 0;
			y = 0;
			for (i = 1; i <= 1024; i++)
			{
				r = x;
				x = (x * x) - (y * y) + a;
				y = (2 * r * y) + b;
				if ((x * x) + (y * y) > 4)
					break;
			}
			if (i == 1025)
				fprintf(pgmimg, "255 ");
			else
				fprintf(pgmimg, "20 ");
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
	return (0);
}
