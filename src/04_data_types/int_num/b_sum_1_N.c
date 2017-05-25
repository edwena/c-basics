#include <stdio.h>

long long func(long long N) {
    if (N % 2 == 0) {
        return (N / 2) * (1 + N);
    } else {
        return ((1 + N) / 2) * N;
    }
}

long long all_num_sum(long long limit) {
    if (limit > 0) {
        return func(limit);
    } else {
        return 1 - func(-limit);
    }
}

// Условия задания:
// Вывести сумму всех целых чисел от 1 до N.
int main() {
    long long N;

    // Для Windows здесь надо использовать %I64d, чтобы не выдавало предупреждение.
    scanf("%lld", &N);
    printf("%lld\n", all_num_sum(N));
    return 0;
}
