#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 10000

// Условия задания:
// Перевести строку в код.
int main() {
    char *string = (char*)malloc(sizeof(char) * MAX_LENGTH);
    scanf("%s", string);
    for ( ; string[0] != '\0'; string++) {
        printf("%03d\n", string[0]);
    }
    return 0;
}
