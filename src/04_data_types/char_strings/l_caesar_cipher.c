#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 1000

bool is_end_symbol(char c) {
    return c == ' ' || c == '\n' || c == '\0';
}

char* decode_string(char *string, int shift) {
    char* decoded_string = (char*) malloc(MAX * sizeof(char));
    int i;
    for (i = 0; !is_end_symbol(string[i]); i++) {
        if (string[i] - shift >= 'A') {
            decoded_string[i] = string[i] - shift;
        } else {
            decoded_string[i] = 'Z' - shift + (string[i] - 'A') + 1;
        }
    }
    decoded_string[i] = '\0';
    return decoded_string;
}

// Условие задания:
// Юлий Цезарь использовал свой способ шифрования текста.
// Каждая буква заменялась на следующую по алфавиту через K позиций по кругу.
// Необходимо по заданной шифровке определить исходный текст.
// В первой строке дана шифровка, состоящая из заглавных латинских букв. Во второй строке число K (1 ≤ K ≤ 10).
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    int k;
    scanf("%d", &k);
    printf("%s\n", decode_string(string, k));
    return 0;
}
