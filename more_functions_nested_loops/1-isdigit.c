#include "main.h"
/**
 * _isdigit - checks digits
 * @c: variable
 * Return: if digit 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
