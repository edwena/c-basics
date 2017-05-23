#include <stdio.h>

#define MAX_LENGTH 10000

int count_words(char *string_to_count_words) {
    int how_many_words = 1;
    for (int i = 0; string_to_count_words[i] != '\0'; i++) {
        if (string_to_count_words[i] == ' ') {
            how_many_words++;
        }
    }
    return how_many_words;
}

// Условия задания:
// Дана строка, содержащая пробелы. Найдите, сколько в ней слов.
int main() {
    char string[MAX_LENGTH];
    gets(string);
    printf("%d\n", count_words(string));
    return 0;
}
