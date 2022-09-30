#include "main.h"
/**
 * _isalpha - function that checks for allhbetic character
 * @c: argument
 *
 * Return: 1 if letter lower case or upper 0 if not
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
