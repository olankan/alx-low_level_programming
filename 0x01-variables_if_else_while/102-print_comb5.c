#include <stdio.h>
/**
 * main - Entry
 * Description: combination of two digits
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
				{
					if ((a != '9' && b != '8') &&  (c != '9' && d != '9'))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
