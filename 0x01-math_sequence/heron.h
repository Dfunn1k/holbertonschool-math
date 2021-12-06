#ifndef HERON_H
#define HERON_H
#include <stdlib.h>

/**
 * struct t_cell - struct of double number and pointer
 * @elt: First number
 * @next: pointer to struct
 *
 * Description: Create multiple nodes with numbers
 */
typedef struct t_cell
{
	double elt;
	struct t_cell *next;
} t_cell;
t_cell *heron(double p, double x0);

#endif
