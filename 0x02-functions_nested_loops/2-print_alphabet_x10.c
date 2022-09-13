#include "main.h"
/**
 * print_alphabet_x10 -prints the alphets 10times
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}
