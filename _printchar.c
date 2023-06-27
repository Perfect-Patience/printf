#include "main.h"
/**
 *_printchar - prints characters
 *@c: character to print
 *
 */

void  _printchar(char c)
{
	_putchar(c);
}


/**
 *_printstring - prints strings;
 *@s: poiter to string
 *@i: number of characters printed.
 *
 *Return: i;
 */

int _printstring(char *s, int i)
{

	while (*s)
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
