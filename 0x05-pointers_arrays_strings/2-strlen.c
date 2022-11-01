#include "main.h"
#include <string.h>

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: An input string
 *
 * Return: Nothing
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

