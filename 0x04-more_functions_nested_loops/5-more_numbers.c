#include "main.h"
/**
 * more_numbers -function description
 */`
void more_numbers(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				a = j / 10;
				_putchar(a + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
