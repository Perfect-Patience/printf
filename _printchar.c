#include "main.h"
/**
 *_printchar - prints characters
 *@c: character to print
 *@i: number of characters printed
 *
 *Return: i;
 */

int  _printchar(char c, int i)
{
	_putchar(c);
	i++;
	return (i);
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
	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}

/**
 *selectformat - selects string format type
 *@format: format of string
 *@args: argument list
 *@count: number of characters printed;
 *
 * Return: count;
 */

int selectformat(const char *format, va_list args, int count)
{
	char c;
	char *s;
	int d, i;

	switch (*format)
	{
		case 'c':
			{
				c = va_arg(args, int);
				count = _printchar(c, count);
				break;
			}
		case 's':
			{
				s = va_arg(args, char *);
				count = _printstring(s, count);
				break;
			}
		case '%':
			{
				_putchar('%');
				count++;
				break;
			}
		default:
			{
				if (format != NULL)
				{
				_putchar('%');
				count++;
				_putchar(*format);
				count++;
				}
			}
	}
	return (count);
}
