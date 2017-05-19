#include <stdio.h>

// Условия задания:
// Вводится код, надо вывести символ.
int main() {
    int number;
    scanf("%d", &number);
    unsigned char c = (unsigned char) number;
    printf("%c\n", c);
    return 0;
}
