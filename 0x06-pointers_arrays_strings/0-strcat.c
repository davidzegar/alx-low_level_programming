#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @scr: copy from
 * Return: pointer to dest
 */
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (scr[j] != '\0')
	{

		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
