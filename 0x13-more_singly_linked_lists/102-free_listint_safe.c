#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely.
* @h: A pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *slow, *fast, *temp;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

slow = *h;
fast = (*h)->next;
while (fast && fast->next && fast != slow)
{
temp = slow;
slow = slow->next;
fast = fast->next->next;
count++;
if (slow == fast)
{
free_listint(*h);
*h = NULL;
return (count);
}
}

if (slow == fast)
{
slow = slow->next;
count++;
while (slow != fast)
{
temp = slow;
slow = slow->next;
count++;
}
temp->next = NULL;
}

free_listint(*h);
*h = NULL;

return (count);
}

/**
* free_listint - Helper function to free a listint_t list.
* @head: A pointer to the head of the list.
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
