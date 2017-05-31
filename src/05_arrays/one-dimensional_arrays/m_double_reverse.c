#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void fill_array(int *array, int elements_num) {
    for (int i = 0; i < elements_num; i++) {
        array[i] = i + 1;
    }
}

void print_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        printf("%d ", array[place]);
    }
    printf("\n");
}

void reverse_array_part(int *array, int from, int to) {
    for (int i = 0; i < (to - (from - 1)) / 2; i++) {
        swap(&array[from + i], &array[to - i]);
    }
}

// Условия задания:
// Дана последовательность натуральных чисел 1, 2, 3, ..., N (1 ≤ N ≤ 1000).
// Необходимо сначала расположить в обратном порядке часть этой последовательности
// от элемента с номером A до элемента с номером B, а затем от C до D (A < B; C < D; 1 ≤ A, B, C, D ≤ N).
int main() {
    int limit;
    scanf("%d", &limit);
    int array[limit];
    fill_array(array, limit);

    int a, b;
    scanf("%d%d", &a, &b);
    reverse_array_part(array, a - 1, b - 1);

    int c, d;
    scanf("%d%d", &c, &d);
    reverse_array_part(array, c - 1, d - 1);

    print_array(array, limit);
    return 0;
}
