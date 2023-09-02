#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * using the Insertion Sort algorithm.
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current)
	{
		listint_t *insertion_point = current;
		int value = current->n;

		while (insertion_point->prev != NULL && value < insertion_point->prev->n)
		{
			insertion_point = insertion_point->prev;
		}

		if (insertion_point != current)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (insertion_point->prev != NULL)
				insertion_point->prev->next = current;
			current->prev = insertion_point->prev;
			insertion_point->prev = current;
			current->next = insertion_point;

			if (*list == insertion_point)
				*list = current;

			print_list(*list);
		}

		current = current->next;
	}
}
