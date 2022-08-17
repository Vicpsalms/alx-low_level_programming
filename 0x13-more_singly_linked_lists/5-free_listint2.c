#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: poitner to the listint_t list to be freed
 */
void free_listint2(listint_t *head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}
