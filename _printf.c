#include "main.h"
/**
 *_printf - printf fucntion
 *@format: format to be printed
 *
 *Return: count of printed characters;
 *
 */



int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;
	char c;
	char *s;

	va_start(arguments, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						c = va_arg(arguments, int);
						_printchar(c);
						count++;
						break;
					}
				case 's':
					{
						s = va_arg(arguments, char *);
						count = _printstring(s, count);
						break;
					}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
		va_end(arguments);
		return (count);
}
