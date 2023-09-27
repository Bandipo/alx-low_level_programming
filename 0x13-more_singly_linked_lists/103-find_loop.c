#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Address of the node where the loop starts, or NULL if no loop exists
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow_ptr = head;
    listint_t *fast_ptr = head;

    if (!head)
        return (NULL);

    while (slow_ptr && fast_ptr && fast_ptr->next)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;

        if (fast_ptr == slow_ptr)
        {
            slow_ptr = head;

            while (slow_ptr != fast_ptr)
            {
                slow_ptr = slow_ptr->next;
                fast_ptr = fast_ptr->next;
            }

            return (fast_ptr);
        }
    }

    return (NULL);
}

