#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} listint_t;

int _strlen(const char *s);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const char *str);
listint_t *add_nodeint_end(listint_t **head, const char *str);
void free_listint(listint_t *head);

#endif
