#include "main.h"

/**
 * len - length of a string
 * @ch: pointer to the string
 *
 * Return: int
 */

int len(char *ch)
{
        int i = 0;

        while (ch[i] != '\0')
                i++;
        return (i);
}
