#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, b;

	a = b = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			if ((a != '8') || (a == '8' && b != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

