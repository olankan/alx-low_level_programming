#include <stdio.h>

/**
 * main - Entry point
 * Description: upeer and lowercase number
 * Return: 0
 */
int main(void)
{	char low, high;
	for (low = 'a'; low <= 'z'; low++)
	{putchar(low); }
	for (high = 'A'; high <= 'Z'; high++)
	{putchar(high); }
	putchar('\n');
	return (0);
}
