#include <stdio.h>

#define MAX_LENGTH 10000

int main() {
    char string[MAX_LENGTH];
    gets(string);
    for (int i = 0 ; string[i] != '\0'; i++) {
        printf("%03d\n", string[i]);
    }
    return 0;
}
