#include "lists.h"

/**
* find_listint_loop - detects if there is a loop in
* a listint_t linked list.
* @head: pointer to the first node in the list
*
* Description: employs Floyd's Cycle-finding algorithm
* Return: address to the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);
	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
