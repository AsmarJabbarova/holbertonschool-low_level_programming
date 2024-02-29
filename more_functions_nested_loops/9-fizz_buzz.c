#include "main.h"
#include <studio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i =1;

	for (; i <=100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf("");
	}
	putchar('\n')
		return (0);
}
