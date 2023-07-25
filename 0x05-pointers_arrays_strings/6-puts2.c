#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Noting
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');

/*	int len, i;*/
/*	len = 0;*/
/*	while (str[len] != '\0')*/
/*	{*/
/*		len++;*/
/*	}*/
/*	for (i = 0; i < len; i += 2)*/
/*	{*/
/*		_putchar(str[i]);*/
/*	}*/
}
