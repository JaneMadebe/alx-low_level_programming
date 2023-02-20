#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
 * Return:  0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{		
    print("%d is positive\n" , n)
}
else if n == 0:
{
    print("%d is zero\n" , n)
}
 else:
{
    print("%d is negative\n" , n)
	return (0);
}
}
