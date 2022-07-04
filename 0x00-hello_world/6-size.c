#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long int Li;
long long int 2Li;
char c;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(Li));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(2Li));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
