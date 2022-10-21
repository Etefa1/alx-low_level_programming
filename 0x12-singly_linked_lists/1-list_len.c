#include "lists.h"

/**
 * list_line - number of nodes in a lists
 * @h: singly linked list
 * Return: number of element in a linked list
 */
size_t list_len(const List_t *h)
{
	int i;
	for (i = 0; h; i++)
		h = h->next;
	return i;
}
