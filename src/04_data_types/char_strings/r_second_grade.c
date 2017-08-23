#include <stdio.h>
#include <stdbool.h>
#define MAX 1003

bool is_end_symbol(char c) {
    return c == '\n' || c == '\0' || c == '.';
}

int count_circles_in_char(char c) {
    if (c == '8') {
        return 2;
    } else if ((c == '6') ||
               (c == '9') ||
               (c == '0')) {
        return 1;
    }
    return 0;
}

int count_circles_in_string(char *string) {
    int zero_counter = 0;
    for (int i = 0; !is_end_symbol(string[i]); i++) {
        zero_counter += count_circles_in_char(string[i]);
    }
    return zero_counter;
}

// Условие задания:
// 101=1; 8181515=4; 1111112=0; 8888888=14; 1010101=3; 7000007=?
// Дано единственное неотрицательное число x, не превышающее 10^1001.
// Выведите n.
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    printf("%d\n", count_circles_in_string(string));
    return 0;
}
