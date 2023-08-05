#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy the string
 * @dest: destionation string
 * @src: source string
 * @n: number of limit
 *
 * Return: character value
 */

char *_strncpy(char *dest, char *src, int n)
{
        int k = 0, m = 0;

        while (src[m])
        {
                m++;
        }
        while (k < n && src[k])
        {
                dest[k] = src[k];
                k++;
        }
        while (k < n)
        {
                dest[k] = '\0';
                k++;
        }
        return (dest);
}
