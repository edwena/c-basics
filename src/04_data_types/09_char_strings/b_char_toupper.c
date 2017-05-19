#include <stdio.h>
#include <ctype.h>

unsigned char ToUpper(unsigned char c) {
    if ('a' <= c && c <= 'z') {
        return toupper(c);
    }
    return c;
}

// Условия задания:
// Напишите функцию unsigned char ToUpper(unsigned char c) (C/C++),
// которая переводит данный символ в верхний регистр.
// Если символ является строчной буквой латинского алфавита (то есть буквой от a до z),
// выведите вместо него аналогичную заглавную букву, иначе выведите тот же самый символ.
int main() {
    char c;
    scanf("%c", &c);
    printf("%c\n", ToUpper(c));
    return 0;
}
