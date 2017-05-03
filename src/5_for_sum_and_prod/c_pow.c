#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int answer = 1;
    for (int i = 1; i <= N; i++) {
        answer *= 2;
    }
    printf("%d\n", answer);
    return 0;
}
