#include "main.h"

/**
 *  _strlen - returns the length of a string
 *  @str: a string of length to be returned
 *  Return: returns the length of a string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
