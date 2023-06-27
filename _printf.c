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

	va_start(arguments, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if(format)
				count = selectformat(format, arguments, count);
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
