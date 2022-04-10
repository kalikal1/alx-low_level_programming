#include <stdio. >

/**
 * main - Prints all lower case letters except e and p
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a;
 
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'p')
		{
			putchar(a);
		}
	}
	
	putchar('\n');
    
  	return (0);
}	
