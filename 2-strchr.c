#include "main.h"
#include <string.h>
/**
**_strchr - locates a character in a string
*loop
*@s: pointer
*@c: var
*Return: s
**/
char *_strchr(char *s, char c)
{
while ((*s != c) && (*s != '\0'))
{
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}
