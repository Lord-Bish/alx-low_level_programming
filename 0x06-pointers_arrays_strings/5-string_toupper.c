#include "main.h"

/**
 * string_toupper - function that convert string to uppercase
 * @n: source char pointer parameter
 * Return: Value of n
 */

char *string_toupper(char *n) {
    
    char *ptr;

    if (n == NULL)
        return NULL;

    ptr = n;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A');
        }
        ptr++;
    }

    return (n);
}
