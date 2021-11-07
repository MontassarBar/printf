#include "main.h"
#include <string.h>
/**
*_strspn - gets the length of a prefix substring
*loops
*@s: pointer
*@accept: pointer
*Return: r
**/
unsigned int _strspn(char *s, char *accept)
{
int x, y, z, a, r;
y = strlen(s);
a = strlen(accept);
r = 0;
for (x = 0; x < y; x++)
{
for (z = 0; z < a; z++)
{
if (s[x] == accept[z])
break;
}
if (s[x] == accept[z])
r++;
else if (s[x] != accept[z])
break;
}
return (r);
}
