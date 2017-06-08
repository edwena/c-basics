#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 10000

int get_length(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

bool s2_contains_s1(char *s1, char *s2) {
    int s1_length = get_length(s1);
    int s2_length = get_length(s2);
    for (int i = 0; i <= s2_length - s1_length; i++) {
        bool found = true;
        for (int j = 0; j <= s1_length - 1; j++) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}

// Условия задания:
// Даны две строки. Определите, является ли первая строка подстрокой второй строки.
// Необходимо вывести  слово yes, если первая строка является подстрокой второй строки,
// или слово no в противном случае.
int main() {
    char s1[MAX_LENGTH];
    scanf("%s", s1);
    char s2[MAX_LENGTH];
    scanf("%s", s2);
    printf(s2_contains_s1(s1, s2) ? "yes\n" : "no\n");
    return 0;
}
