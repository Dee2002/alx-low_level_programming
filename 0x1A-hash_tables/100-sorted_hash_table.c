#include "hash_tables.h"

/**
* shash_table_create - Creates a sorted hash table
* @size: The size of the array
*
* Return: A pointer to the created sorted hash table, or NULL on failure
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));
if (!ht)
return (NULL);

ht->size = size;
ht->array = calloc(size, sizeof(shash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
* shash_table_set - Inserts a key-value pair into a sorted hash table
* @ht: The sorted hash table
* @key: The key to insert
* @value: The value to insert
*
* Return: 1 if successful, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *current, *prev;

if (!ht || !key || *key == '\0' || !value)
return (0);

current = ht->shead;
prev = NULL;

while (current && strcmp(current->key, key) < 0)
{
prev = current;
current = current->snext;
}

if (current && strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
return (1);
}

new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);

new_node->key = strdup(key);
if (!new_node->key)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (!new_node->value)
{
free(new_node->key);
free(new_node);
return (0);
}

new_node->next = ht->array[key_index((const unsigned char *)key, ht->size)];
ht->array[key_index((const unsigned char *)key, ht->size)] = new_node;

if (!prev)
{
new_node->snext = ht->shead;
ht->shead = new_node;
}
else
{
prev->snext = new_node;
new_node->snext = current;
}

if (!current)
ht->stail = new_node;

return (1);
}

/**
* shash_table_get - Retrieves the value associated with a key from a sorted hash table
* @ht: The sorted hash table
* @key: The key to search for
*
* Return: The value associated with the key, or NULL if key couldn't be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *current;

if (!ht || !key || *key == '\0')
return (NULL);

current = ht->array[key_index((const unsigned char *)key, ht->size)];

while (current)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}

return (NULL);
}

/**
* shash_table_print - Prints a sorted hash table in order
* @ht: The sorted hash table to print
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current;

if (!ht)
return;

current = ht->shead;
printf("{");
while (current)
{
printf("'%s': '%s'", current->key, current->value);
if (current->snext)
printf(", ");
current = current->snext;
}
printf("}\n");
}

/**
* shash_table_print_rev - Prints a sorted hash table in reverse order
* @ht: The sorted hash table to print
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current;

if (!ht)
return;

current = ht->stail;
printf("{");
while (current)
{
printf("'%s': '%s'", current->key, current->value);
if (current->sprev)
printf(", ");
current = current->sprev;
}
printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table and its elements
* @ht: The sorted hash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current, *next;

if (!ht)
return;

current = ht->shead;

while (current)
{
next = current->snext;
free(current->key);
free(current->value);
free(current);
current = next;
}

free(ht->array);
free(ht);
}
