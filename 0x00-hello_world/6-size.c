
#include <stdio.h>
/**
 *main - To print size of data types
 (*
 *Description: This is a function to print size of datatypes)?
 *Return: Zero
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(e));
return (0); }
