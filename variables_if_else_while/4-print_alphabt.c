#include <stdio.h>
/**
 * main -Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		
		}
		c++;
	
	}
	putchar('\n');
	return (0);

}
