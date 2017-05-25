#include <stdio.h>

#define MAX_LENGTH 10000

typedef int bool;
#define false 0
#define true !false

bool Compare(char *string_S1, char *string_S2) {
    for (int i = 0; !(string_S1[i] == '\0' && string_S2[i] == '\0'); i++) {
        if (string_S1[i] != string_S2[i]) {
            return false;
        }
    }
    return true;
}

// Условия задания:
// Напишите функцию bool Compare(string S1, string S2), определяющую, совпадают ли 2 строки.
// Необходимо вывести  слово yes, если строки совпадают, и слово no в противном случае.
int main() {
    char string_one[MAX_LENGTH];
    gets(string_one);
    char string_two[MAX_LENGTH];
    gets(string_two);
    printf(Compare(string_one, string_two) ? "yes\n" : "no\n");
    return 0;
}
