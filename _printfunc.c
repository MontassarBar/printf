#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
*
*
**/
int _prchar(va_list x)
{
char ptr;
ptr = va_arg(x, int);
_putchar(ptr);
return (1);
}

/**
 *
 **/
int _prstr(va_list x)
{
char *ptr;
int y = 0;
ptr = va_arg(x, char*);
if (ptr == NULL)
ptr = "(null)";
y = _strlen(ptr);
write (STDOUT_FILENO, ptr, _strlen(ptr));
return (y);
}

/**
 *
 *
 */
int _print(va_list x)
{
int y, e;
char *t;
y = 0;
e = 0;
y = va_arg(x, int);
t = _itoa(y);
if (t == NULL)
return (-1);
e = _strlen(t);
write (STDOUT_FILENO, t, _strlen(t));
return (e);
}

/**
 *
 */
int _prpercent()
{
_putchar('%');
return (1);
}

