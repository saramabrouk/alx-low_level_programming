#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of a program
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}
