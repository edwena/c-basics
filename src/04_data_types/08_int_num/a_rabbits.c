#include <stdio.h>

int max_rabbits_in_cage(int cages, int rabbits) {
    int per_cage = rabbits / cages;
    if (rabbits % cages != 0) {
        per_cage++;
    }
    return per_cage;
}

// Условия задания:
// Пусть есть n клеток и m зайцев, которых рассадили по этим клеткам.
// Вам требуется расcчитать максимальное количество зайцев, которое гарантированно окажется в одной клетке.
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", max_rabbits_in_cage(n, m));
    return 0;
}
