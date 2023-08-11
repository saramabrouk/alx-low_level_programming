#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *
 *@b: the number of bytes allocate
 *Descroption: if malloc failed, terminate process with value 98
 *Return: pointer to malloc space
 */

void *malloc_checked(unsigned int b);
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);
return (ptr);
}
