#include <stdio.h>

int main() {
    int i = 0;
    int N;
    scanf("%d", &N);
    if (N == 0) {
        printf("0\n");
        return 0;
    }

    int previous_N = 0;
    int were_going_up = 0;

    while (1) {
        previous_N = N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N > previous_N) {
            were_going_up = 1;
        } else if (N < previous_N) {
            if (were_going_up) {
                i++;
                were_going_up = 0;
            }
        } else {
            were_going_up = 0;
        }
    }

    printf("%d\n", i);
    return 0;
}
