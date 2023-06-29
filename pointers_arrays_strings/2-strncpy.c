#include "main.h"

/* _strncpy -  a function that copies a string
 *
 * @dest: destination
 * @src: the source
 * @n: count
 */

char *_strncpy(char *dest, char *src, int n)
{
char *o_dest = dest;

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }

    return o_dest;
}
