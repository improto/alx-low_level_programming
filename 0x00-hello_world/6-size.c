#include <stdio.h>
/**
 * Main function: Output data type sizes
 * Description: This function prints out data type sizes
 * Reruen Value: 0
 * */
int main(void){
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

return (0);
}
