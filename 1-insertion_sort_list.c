#include "sort.h"
/**
* insertion_sort_list - inserting the sorting algorithm
* @list: linked list to the sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int i;

	if (!list)
		return;
	tmp = *list;
	while (tmp)
	{
		while (tmp)
		{
			if (tmp->next)
			{
				if (tmp->i > tmp->next->i)
				{
					i = tmp->i;
					*(int *)&tmp->i = tmp->next->i;
					*(int *)&tmp->next->i = i;
					tmp = *list;
					print_list(*list);
					break;
				}
			}
			tmp = tmp->next;
		}
	}
}
