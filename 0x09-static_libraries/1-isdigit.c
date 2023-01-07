#include "main.h"

/**
 * _isdigit - checking number
 * @c: interger inputted
 * Return: 1 if digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
