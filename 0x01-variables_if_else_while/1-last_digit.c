#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to variable n and prints
 *        the last digit of n
 *
 * Return: Always 0
 */
int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
printf("Last digit of %d is ", n);

if (lastd >  5)
{
printf("%d and is greater than 5\n", lastd);
}
else if (lastd == 0)
{
printf("%d and is 0\n", lastd);
}
else
{
printf("%d and is less than 6 and not 0\n", lastd);
}
return (0);
}
