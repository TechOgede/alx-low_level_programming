#include "lists.h"

/**
* sum_listint - computes the sum of all the data
* in  a listint_t list
* @head: pointer to the first node
*
* Description: loop through the list and incrememts a
* counter with each data point
* Return: the counter
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
