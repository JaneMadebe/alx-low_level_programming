#include "main.h"

/**
 * jack_bauer -  prints every minute of the day
 * Return: ...
 */

void jack_bauer(void)

{
    for (int hour = 0; hour < 24; hour++)
    {
    for (int minute = 0; minute < 60; minute++) 
    {
     int a = hour / 10;
     int b = hour % 10;
     int c = minute / 10;
     int d = minute % 10;
     printf("%d%d:%d%d\n", a, b, c, d);
     }
    }
}

