#include "main.h"
/**
* more_numbers - write a function that prints 10 times the numbers 0 -14 w \n
*Return: something
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
