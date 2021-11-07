#include "main.h"
#include <string.h>
/**
**_memset - fills memory with a constant byte
*loop
*@s: pointer
*@b: var
*@n: var
*Return: s
**/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
s[x] = b;

return (s);





}
