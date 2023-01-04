#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - chececks to see if a string is a palindrome
 *
 * @l: left hand index
 *
 * @r: right hand index
 *
 * @p: possible palindrome
 *
 * Return: 1 if palindrome or 0 otherwise
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
