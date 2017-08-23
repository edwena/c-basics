#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 256

bool is_end_symbol(char c) {
    return c == '\n' || c == '\0' || c == '.';
}

int get_length(char *string) {
    int length = 0;
    while (!is_end_symbol(string[length])) {
        length++;
    }
    return length;
}

bool check_if_symm(char *string, int from, int to) {
    while (string[from] == string[to]) {
        from++;
        to--;
        if (from - to == 0 || from - to == 1) {
            return true;
        }
    }
    return false;
}

char* get_substring(char *string, int from, int length) {
    char* substring = (char*) malloc((length + 1) * sizeof(char));
    for (int i = 0; i < length; i++) {
        substring[i] = string[from + i];
    }
    substring[length] = '\0';
    return substring;
}

char* find_max_symm_substring(char *string) {
    int length = get_length(string);
    int max_symm_length = 1;
    int max_symm_from = 0;
    for (int from = 0; from < length; from++) {
        for (int to = length - 1; (to > from) && (max_symm_length < to - from + 1); to--) {
            if (check_if_symm(string, from, to)) {
                max_symm_length = to - from + 1;
                max_symm_from = from;
            }
        }
    }
    return get_substring(string, max_symm_from, max_symm_length);
}

// Условие задания:
// Цвет панциря каждого мескленита обозначается заглавной латинской буквой (от "A" до "Z" ).
// Дана строка, длина которой не превосходит 255 символов – цвета мескленитов в шеренге.
// Выходные данные - симметричный участок строки, первый от начала.
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    printf("%s\n", find_max_symm_substring(string));
    return 0;
}
