#include "holberton.h"
/**
 *  *string_touper - capitalzied string
 *  @str: pointer
 *  Return: capilzied string
 */

char *string_touper(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
