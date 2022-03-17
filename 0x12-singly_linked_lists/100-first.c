#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - Prints a string before the
 *        execution of main function.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
