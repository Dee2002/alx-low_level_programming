#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
* @head: Double pointer to the head of the linked list.
* @index: Index of the node to be deleted.
* Return: 1 if succeeded, -1 if failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}

while (current != NULL && count < index)
{
current = current->next;
count++;
}

if (current == NULL)
return (-1);

if (current->next != NULL)
current->next->prev = current->prev;

current->prev->next = current->next;
free(current);
return (1);
}
