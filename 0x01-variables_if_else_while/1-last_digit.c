#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n- rand()
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater then 5\n" ,n , n% 10);
}
else if (( n % 10) < 6 && ( n % 10) !=0)
{
printf("Last digit of %d is %d ad is less than 6 and not 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n" , n , n %10);
}
return (0);
}
