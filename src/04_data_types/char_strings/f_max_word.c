#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 10000

bool is_end_symbol(char c) {
    return c == ' ' || c == '\n' || c == '\0';
}

int get_longest_word_index(char *word_string) {
    int current_length = 0;
    int max_length = 0;
    int index = 0;
    int index_max = 0;
    for (int i = 0; word_string[i] != '\0'; i++) {
        if (!is_end_symbol(word_string[i])) {
            if (i != 0 && word_string[i - 1] == ' ') {
                index = i;
            }
            current_length++;
        } else if (is_end_symbol(word_string[i])) {
            if (current_length > max_length) {
                max_length = current_length;
                index_max = index;
            }
            current_length = 0;
        }
    }
    return index_max;
}

void print_word_and_length(char *word_string, int index) {
    int word_length = 0;
    for (int i = index; !is_end_symbol(word_string[i]); i++) {
        printf("%c", word_string[i]);
        word_length++;
    }
    printf("\n");
    printf("%d\n", word_length);
}

// Условия задания:
// Дана строка, содержащая пробелы. Найдите в ней самое длинное слово, выведите это слово и его длину.
// Если таких слов несколько, выведите первое из них. Слова разделены ровно одним пробелом. Пробелы в начале и конце строки допускаются.
int main() {
    char string[MAX_LENGTH];
    fgets(string, MAX_LENGTH, stdin);
    int longest_word_index = get_longest_word_index(string);
    print_word_and_length(string, longest_word_index);
    return 0;
}
