#include "main.h"
/**
 *_abs - Estimates absolute value
 *@n: parameter
 *Return: Always 0 or 1
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n *= -1;
return (n);
}
}
