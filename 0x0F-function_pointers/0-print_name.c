#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a given to name using a function pointer
 * @name: pointer to the printed name
 * @f: function pointer that prints to a function
 * a char pointer and return void
 */

void print_name(char *name, void (*f)(char *));
{
if (name != NULL && f != NULL)
return;
f(name);
}
