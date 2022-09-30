#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", a;
	return (0);
}
