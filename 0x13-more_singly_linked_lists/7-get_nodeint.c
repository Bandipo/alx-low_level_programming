#include "lists.h"

/**
 * get_node_at_index - Returns the node at a certain index in a linked list.
 * @head: The first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_node_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	return (current ? current : NULL);
}

