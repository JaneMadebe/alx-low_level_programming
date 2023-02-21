#include "main.h"
/**
 * print_alphabet_x10.c - Make alphabet_x10.c
 * Return: void
 */

void print_alphabet_x10(void) {
   
    char letter = 'a';
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 0; j < 26; j++) {
            _putchar(letter);
            letter++;
        }
        letter = 'a'; // reset letter to 'a' for next line
        _putchar('\n');
    }
}
}


