#include "lists.h"

/**
 * insert_node_at_index - Inserts a new node in a linked list at a given position.
 * @head: A pointer to the first node in the list.
 * @idx: The index where the new node is added.
 * @value: Data to insert in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
listint_t *insert_node_at_index(listint_t **head, unsigned int idx, int value)
{
    unsigned int i;
    listint_t *new_node;
    listint_t *temp = *head;

    new_node = malloc(sizeof(listint_t));
    if (!new_node || !head)
        return (NULL);

    new_node->n = value;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    for (i = 0; temp && i < idx; i++)
    {
        if (i == idx - 1)
        {
            new_node->next = temp->next;
            temp->next = new_node;
            return (new_node);
        }
        else
            temp = temp->next;
    }

    return (NULL);
}

