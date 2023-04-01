#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Let's try to printf a simple sentence. %s %c \n","fares",'h');
    _printf("%d %i %d %i\n", 12, 123, -16, -147);
    _printf("%d %i this is a test %c %i okay! %s %d\n", 03, 2009, 'a', -47, "ALX", -007); 
	return 0;
}
