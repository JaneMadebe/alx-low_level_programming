#include <stdio.h>

int _islower(int c);

int main() {
    char ch = 'a';
    if (_islower(ch)) {
        printf("%c is a lowercase character\n", ch);
    } else {
        printf("%c is not a lowercase character\n", ch);
    }
    return 0;
}
