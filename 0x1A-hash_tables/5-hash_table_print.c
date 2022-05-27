#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 * Return: void or if the ht is NULL don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
	bool firstIter = false;
	hash_node_t *entry;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];
		while (entry != NULL)
		{
			if (firstIter == true)
				printf(", ");

			printf("'%s': '%s'", entry->key, entry->value);

			firstIter = true;

			if (entry->next != NULL)
				printf(", ");

			entry = entry->next;
		}
	}
	putchar('}');
	putchar('\n');
}

