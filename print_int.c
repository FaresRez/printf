#include "main.h"

/**
 * print_int - prints integer
 * @num: int
 * Return: length of int
 */

int print_int(long int num)
{
	char str[21];
	int i = 0;
	int is_negative = 0;
	int length = 0;
	int j = 0;

	if (num < 0)
	{
	is_negative = 1;
	num = -num;
	}

	do {
	str[i++] = num % 10 + '0';
	num /= 10;
	} while (num > 0);

	if (is_negative)
	{
	str[i++] = '-';
	}

	str[i] = '\0';
	length = i;

	j = i - 1;

	i = 0;
	while (i < j)
	{
	char temp = str[i];

	str[i] = str[j];
	str[j] = temp;
	i++;
	j--;
	}

	write(STDOUT_FILENO, str, len(str));
	return (length);

}
