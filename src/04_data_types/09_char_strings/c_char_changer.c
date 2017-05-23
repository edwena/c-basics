#include <stdio.h>

unsigned char change_case(unsigned char its_a_char) {
    unsigned char changed_char = its_a_char;
    if ('a' <= its_a_char && its_a_char <= 'z') {
        changed_char -= 32;
    } else if ('A' <= its_a_char && its_a_char <= 'Z') {
        changed_char += 32;
    }
    return changed_char;
}

// Условия задания:
// Измените регистр символа, если он был латинской буквой: сделайте его заглавным, если он был строчной буквой и наоборот.
// Для этого напишите отдельную функцию, меняющую регистр символа.
int main() {
    char character;
    scanf("%c", &character);
    printf("%c\n", change_case(character));
    return 0;
}
