#include "main.h"
/**
 * _islower - this is a descriptio
 * @c: contains value to be compared
 *
 * Return: 1 is c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
