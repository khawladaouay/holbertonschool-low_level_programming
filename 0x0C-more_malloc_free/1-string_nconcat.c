#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1 : input
 * @s2:  input
 * @n: input
 * Return: none
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	char *s3;
	unsigned int i = 0, j = 0, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	s3 = malloc(sizeof(char) * (len1 + len2) + 1);
		if (s3 == NULL)
		{
		return (NULL);
		}
		while (*s1 != '\0')
		{
			s3[i] = *s1;
			s1++;
			i++;
		}

		for (j = 0; s2[j] != '\0' && j <= n; j++)
		{
			s3[i] = s2[j];
			i++;
		}
		s3[i] = '\0';

	return (s3);
}
