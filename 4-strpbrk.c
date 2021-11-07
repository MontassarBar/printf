#include "main.h"
#include <string.h>
/**
**_strpbrk - searches a string for any of a set of bytes
*loops
*@s: pointer
*@accept: pointer
*Return: s+x or NULL
**/
char *_strpbrk(char *s, char *accept)
{
int x, i, y, z;
y = strlen(s);
z = strlen(accept);
for (x = 0; x < y; x++)
{
for (i = 0; i < z; i++)
{
if (s[x] == accept[i])
return (s + x);
}
}
return (NULL);
}
