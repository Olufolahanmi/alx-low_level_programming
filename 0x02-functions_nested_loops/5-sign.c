#include "main.h"
/**
 * print_sign - a function that prints sign
 * @n: argument
 *
 *Return: 1 if ngreter than zero, 0 if n is zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
