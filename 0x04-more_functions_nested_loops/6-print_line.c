#include "main.h"

/**
 * print_line - print a line
 * @n: number of interger
 * Return: 0
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
