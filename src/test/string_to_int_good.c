#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 10000

int main() {
    char *string = (char*)malloc(sizeof(char) * MAX_LENGTH);
    scanf("%s", string);
    for (int i = 0 ; *(string + i) != '\0'; i++) {
        printf("%03d\n", *(string + i));
    }
    return 0;
}
