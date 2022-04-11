#include <stdio.h>

/**
  * main - Prints lower case alphabetes in reverse order
  *
  * Return: Always (Success)
  */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}

	putchar('/n');
	
	return(0);
}
