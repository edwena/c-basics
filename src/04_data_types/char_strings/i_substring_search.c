#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 10000

int find_length(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

bool find_possible_same_smth(char *f_string, char *s_string) {
    int f_length = find_length(f_string);
    int s_length = find_length(s_string);
    for (int i = 0; i <= s_length - f_length; i++) {
        for (int j = 0; j <= f_length - 1; j++) {
            if (s_string[i + j] == f_string[j]) {
                if (j == f_length - 1) {
                    return true;
                }
            } else {
                break;
            }
        }
    }
    return false;
}

// Условия задания:
// Даны две строки. Определите, является ли первая строка подстрокой второй строки.
// Необходимо вывести  слово yes, если первая строка является подстрокой второй строки,
// или слово no в противном случае.
int main() {
    char string[MAX_LENGTH];
    scanf("%s", string);
    char second_string[MAX_LENGTH];
    scanf("%s", second_string);
    printf(find_possible_same_smth(string, second_string) ? "yes\n" : "no\n");
    return 0;
}
