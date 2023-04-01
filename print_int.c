#include "main.h"

/**
 * print_int - prints integer
 * @num: int
 * Return: nothing
 */

void print_int(int num)
{
	char str[12];/* Maximum length of 32-bit integer + 1 for null terminator */
	int i = 0;
	int is_negative = 0;

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

	int j = i - 1;

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
}
