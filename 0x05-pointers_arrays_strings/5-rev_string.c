#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/*find string length without null char*/
	while (s[len] != '\0')
	{
		len++;
	}
	/*swap the string by looping to half the string*/
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i]; /*-1 because the array starts from 0*/
		s[len - 1 - i] = temp;
	}

}
