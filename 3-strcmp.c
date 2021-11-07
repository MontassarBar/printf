#include "main.h"
#include <string.h>
/**
*_strcmp - compares two strings
*loop
*@s1: pointer
*@s2: pointer
*Return: a
**/
int _strcmp(char *s1, char *s2)
{
int x, y, z, a;
y = strlen(s1);
z = 0;
a = 0;
for (x = 0; ((x < y)&&(z == 0)); x++)
{
if (s1[x] != s2[x])
z = 1;
if (z == 1)
a = s1[x] - s2[x];
}
return (a);
}
