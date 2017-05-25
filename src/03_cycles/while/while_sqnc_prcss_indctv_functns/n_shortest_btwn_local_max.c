#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N == 0) {
        printf("0\n");
        return 0;
    }

    int previous_N = 0;
    int were_going_up = 0;
    int position_i = 1;
    int local_max = 0;
    int distance = 0;
    int min_distance = 0;

    while (1) {
        previous_N = N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N > previous_N) {
            were_going_up = 1;
        } else if (N < previous_N) {
            if (were_going_up) {
                were_going_up = 0;
                if (local_max) {
                    distance = position_i - local_max;
                }
                local_max = position_i;
            }
        } else {
            were_going_up = 0;
        }
        position_i++;

        if ((min_distance == 0) || (distance < min_distance)) {
            min_distance = distance;
        }
    }

    printf("%d\n", min_distance);
    return 0;
}


