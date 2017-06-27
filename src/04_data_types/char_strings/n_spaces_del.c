#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

bool is_end_symbol(char c) {
    return c == '\n' || c == '\0';
}

void delete_extra_spaces(char *in, char *out) {
    int j = 0;
    bool space_before = false;
    for (int i = 0; !is_end_symbol(in[i]); i++) {
        if (in[i] == ' ') {
            if (!space_before) {
                out[j] = in[i];
                j++;
                space_before = true;
            }
        } else {
            out[j] = in[i];
            j++;
            space_before = false;
        }
    }
    out[j] = '\0';
}

// Условие задания:
// Дана строка, Вам требуется преобразовать все идущие подряд пробелы в один.
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    char new_string[MAX];
    delete_extra_spaces(string, new_string);
    printf("%s\n", new_string);
    return 0;
}
