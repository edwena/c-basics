#include <stdio.h>

#define MAX_LENGTH 1000

char find_two_chars(char *word_string) {
    int first_char_index = 0;
    while (word_string[first_char_index] != '\0') {
        for (int i = first_char_index + 1; word_string[i] != '\0'; i++) {
            if (word_string[first_char_index] == word_string[i]) {
                return word_string[first_char_index];
            }
        }
        first_char_index++;
    }
    return '\0';
}

// Условия задания:
// Дана строка. Известно, что она содержит ровно две одинаковые буквы.
// Найдите эти буквы. Гарантируется, что повторяются буквы только одного вида.
int main() {
    char string[MAX_LENGTH];
    scanf("%s", string);
    printf("%c\n", find_two_chars(string));
    return 0;
}
