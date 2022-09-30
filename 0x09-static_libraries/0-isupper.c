#include "main.h"
/**
 * _isupper - function description
 * @c: agument
 * Return: 1 if valid 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
