#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - check if list is cyclical
 * @list: pointer to list to check
 * Return: 1 if cyclical, 0 otherwise
 */
int check_cycle(listint_ *list)
{
	listnt_ *slow = list, *fast = list;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow = fast)
			return (1);
	}
	return (0);
}
