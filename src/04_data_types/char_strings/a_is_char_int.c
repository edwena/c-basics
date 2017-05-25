#include <stdio.h>

typedef int bool;
#define false 0
#define true !false

bool IsDigit(unsigned char c) {
    return '0' <= c && c <= '9';
}

// Условия задания:
// Напишите функцию bool IsDigit(unsigned char c) (C/C++),
// определяющую, является ли данный символ цифрой или нет.
// Необходимо вывести  строку yes, если символ является цифрой, и строку no в противном случае.
int main() {
    char c;
    scanf("%c", &c);
    printf(IsDigit(c) ? "yes\n" : "no\n");
    return 0;
}
