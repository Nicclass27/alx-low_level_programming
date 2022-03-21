#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: char type pointer
 *
 * return: string length of a string
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != 0)
{
i++;
}
return (i);
}

