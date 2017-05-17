#include <stdio.h>

typedef struct {
    int h, m, s;
} timestamp;

int sec(timestamp time) {
    return 3600 * time.h + 60 * time.m + time.s;
}

int calc(timestamp time1, timestamp time2) {
    return sec(time2) - sec(time1);
}

int main() {
    timestamp time1;
    timestamp time2;
    scanf("%d %d %d", &time1.h, &time1.m, &time1.s);
    scanf("%d %d %d", &time2.h, &time2.m, &time2.s);
    printf("%d\n", calc(time1, time2));
    return 0;
}