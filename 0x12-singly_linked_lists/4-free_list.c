#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Head of the linked list.
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
