#include "main.h"

/**
 * print_alphabet_x10 - lowercase,
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'k';
		while (ch <= 'u')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

