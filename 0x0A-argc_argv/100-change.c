#include <stdio.h>
#include <stdlib.h>

/**
* main - prints minimum number of coins to make change for an amount of money.
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
*
* Return: 0 if no errors, else 1
*/
int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = 0;
int c[5] = {25, 10, 5, 2, 1};
int i;

if (argc != 2)
{
puts("Error");
return (1);
}
if (a < 0)
{
printf("0\n");
}
for (i = 0; i < 5; i++)
{
while ((a - c[i]) >= 0)
{
a = a - c[i];
b++;
}
}
printf("%d", b);
return (0);
}
