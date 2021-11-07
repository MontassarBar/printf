#include "main.h"
#include <string.h>
/**
**_strstr - locates a substring
*loop
*@haystack: pointer;
*@needle: pointer
*Return: h or Null
**/
char *_strstr(char *haystack, char *needle)
{
int y, z;
z = strlen(haystack);
for (y = 0; y < z; y++)
{
if (*needle == haystack[y])
return (haystack + y);
}
return (NULL);
}
