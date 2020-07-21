#include "holberton.h"

/**
  *
  */

int _printf(const char *format, ...)
{
	int s, v = 0;
	va_list m;
	int (*func)(va_list);

	va_start(m, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (s = 0; format[s] != '\0'; s++)
	{
		if (format[s] == '%')
		{
			func = get_spc(format[s + 1]);

			if (func != NULL)
			{
				v = v + func(m);
				s++;
			}
			else
			{
				_putchar(format[s]);
				v++;
			}
		}
		else
		{
			_putchar(format[s]);
			v++;
		}
	}
	va_end(m);
	return (v);
}
