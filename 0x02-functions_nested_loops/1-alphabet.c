#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase with new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}