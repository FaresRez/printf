#include "main.h"

/**
 * _printf -  printf an input
 * @format: pointer to a string
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char *value;
	int length = 0;
	va_list args;
	int val;
	int len_int = 0;

	va_start(args, format);

	if  (!format)
		return (-1);
	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				switch (format[i])
				{
					case 'c':
						value = (char *)(intptr_t)va_arg(args, int);
						write(STDOUT_FILENO, &value, 1);
						length++;
						break;
					case 's':
						value = va_arg(args, char *);
						write(STDOUT_FILENO, value, len(value));
						length += len(value);
						break;
					case 'd':
					case 'i':
						val = va_arg(args, int);
						len_int = print_int(val);
						length += len_int;
						break;
					default:
						value = va_arg(args, char *);
						write(STDOUT_FILENO, value, len(value));
						break;
				}
			}
			else
			{
				write(STDOUT_FILENO, &format[i], 1);
				length++;
			}
			i++;
		}
	}

	va_end(args);
	return (length);

}
