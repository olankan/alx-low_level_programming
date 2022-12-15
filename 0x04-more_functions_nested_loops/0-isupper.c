#include "main.h"

/**
 * _isupper - checking for uppercase character
 *
 * @c: parameter enter
 *
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
