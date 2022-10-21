#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the biginning of the link
 */
void free_list(list_t *head)
{
	if (head == MULL)
	return;
	free_list(head->next);
	free(head->str);
	free(head);
}
