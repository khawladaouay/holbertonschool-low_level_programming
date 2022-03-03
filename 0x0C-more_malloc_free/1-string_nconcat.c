#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1 : input
 * @s2:  input
 * @n: input
 * Return: none
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	char *s3;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < (strlen(s1) + n); i++)
	{
		if (i < strlen(s1))
			s3[i] = s1[i];
		else
			s3[i] = s2[i - strlen(s1)];
	}
	s3[i] = '\0';
	return (s3);
}
