#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 1000

int count_length(char *string) {
    int length = 0;
    while(string[length] != '\0') {
        length++;
    }
    return length;
}

bool check_palindrome(char *word_string, int string_length) {
    for (int i = 0; i <= string_length / 2; i++) {
        if (word_string[i] != word_string[string_length - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Условия задания:
// По данной строке определите, является ли она палиндромом. На вход подается 1 строка без пробелов.
// Необходимо вывести  yes, если строка является палиндромом, и no в противном случае.
int main() {
    char string[MAX_LENGTH];
    scanf("%s", string);
    printf(check_palindrome(string, count_length(string)) ? "yes\n" : "no\n");
    return 0;
}
