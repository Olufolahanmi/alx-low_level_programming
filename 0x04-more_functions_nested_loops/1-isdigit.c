#include "main.h"
/**
 * _isdigit - check the digit value
 * @c: argument
 * Return: 1 if valid 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
