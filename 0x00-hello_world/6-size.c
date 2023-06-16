#include <stdio.h>
/**
* main - size of various computer types
* Return: 0 (Success)
*/
int main(void)
{
char K;
int H;
long int A;
long long int D;
float J;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(K));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(H));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(A));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(D));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(J));
return (0);
}
