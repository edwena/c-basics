#include <stdio.h>

void time(int degrees) {
    int hours = degrees / 30;
    int min = (degrees - hours * 30) * 2;
    printf("It is %d hours %d minutes.\n", hours, min);
}

// Условия задания:
// Часовая стрелка повернулась с начала суток на d градусов.
// Определите, сколько сейчас целых часов h и целых минут m.
// На вход программе подается целое число d (0 <= d < 360).
int main() {
    int d;
    scanf("%d", &d);
    time(d);
    return 0;
}
