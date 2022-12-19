#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an n elements of the array
 * @a: name of array
 * @n: numbers of elements in the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	printf("%d", a[n - 1]);
	printf("\n");
}
