#include "holberton.h"

/**
 *_printf - Function similar to printf.
 *@format: array to arguments.
 *Return: number of arguments that it  prints.
 */

int _printf(const char *format, ...)
{
	int index, counter = 0;
	va_list list;
	int (*func)(va_list);

	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			func = get_spc(format[index + 1]);

			if (func != NULL)
			{
				counter = counter + func(list);
				index++;
			}
			else
			{
				_putchar(format[index]);
				counter++;
			}
		}
		else
		{
			_putchar(format[index]);
			counter++;
		}
	}
	va_end(list);
	return (counter);
}
