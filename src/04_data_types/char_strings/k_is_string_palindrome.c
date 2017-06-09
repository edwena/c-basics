#include <stdio.h>
#include <stdbool.h>
#define MAX 100

bool is_end_symbol(char c) {
    return c == '\n' || c == '\0';
}

int rewrite_without_spaces_and_count(char *string, char *new_string) {
    int j = 0;
    for (int i = 0; !is_end_symbol(string[i]); i++) {
        if (string[i] != ' ') {
            new_string[j] = string[i];
            j++;
        }
    }
    return j;
}

bool check_palindrome(int length, char *string) {
    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Условие задания:
// Дана строка, состоящая из строчных латинских букв и пробелов.
// Проверьте, является ли она палиндромом без учета пробелов.
// На вход подается 1 строка длины не более 100, содержащая пробелы. Подряд может идти произвольное число пробелов.
// Необходимо вывести yes, если данная строка является палиндромом, и no в противном случае.
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    char new_string[MAX];
    printf(check_palindrome(rewrite_without_spaces_and_count(string, new_string), new_string) ? "yes\n" : "no\n");
    return 0;
}
