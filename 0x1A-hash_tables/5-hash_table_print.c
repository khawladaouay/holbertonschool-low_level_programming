#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 * Return: void or if the ht is NULL don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
	unsigned int j;

	j = 0;
	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
		while (ht->array[i] != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			j = 1;
			ht->array[i] = ((ht->array[i])->next);
		}
	printf("}\n");
}
