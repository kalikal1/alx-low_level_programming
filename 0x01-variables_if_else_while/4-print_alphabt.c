#include <stdio.h>

/**
 * main - Prints all lower case letters except e and q 
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a;
 
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	
	putchar('\n');
    
  	return (0);
}	
