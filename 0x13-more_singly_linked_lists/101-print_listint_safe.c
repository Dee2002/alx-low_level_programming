#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *loop_node = NULL;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

if (current->next >= current)
{
loop_node = current->next;
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
break;
}

current = current->next;
}

if (loop_node != NULL)
{
size_t loop_count = 1;
current = loop_node->next;

while (current != loop_node)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
loop_count++;
current = current->next;
}

printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
printf("Loop starts at [%p] %d\n", (void *)loop_node, loop_node->n);
printf("Loop size = %lu\n", loop_count);
}

return (count);
}
