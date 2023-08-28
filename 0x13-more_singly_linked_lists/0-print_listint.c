#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - function that list all elements
 * @h: linked list of listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;

	}
		return (num);
}
