#include "fibonacci.h"
#include <stdio.h>
/**
 * Fibonnaci - Defines The Fibonacci sequence
 *
 * Return: The pointer to struct t_cell
 */
t_cell *Fibonnaci()
{
	int f1 = 1, f2 = 1, f3 = 1;
	t_cell *node, *head = NULL;

	while (f1 != 6765)
	{
		node = malloc(sizeof(t_cell));
		if (node == NULL)
			return (NULL);
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
		node->elt = f1;
		node->next = head;
		head = node;
	}
	return (head);
}

/**
 * gold_number - Creates the Golden Ratio
 * @head: The pointer to struct t_cell
 *
 * Return: The value of the Golden Ratio
 */
double gold_number(t_cell *head)
{
	double numerator = head->elt;
	double denominator = head->next->elt;
	double result = 0;

	result = numerator / denominator;
	return (result);
}
