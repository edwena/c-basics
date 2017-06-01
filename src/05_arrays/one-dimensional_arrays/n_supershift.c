#include <stdio.h>
#include <stdlib.h>

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

void print_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        printf("%d ", array[place]);
    }
    printf("\n");
}

int* do_the_shift(int *array, int shift, int elements_num) {
    int actual_shift = shift % elements_num;
    if (actual_shift < 0) {
        actual_shift += elements_num;
    }

    int* new_array = (int*) malloc(elements_num * sizeof(int));

    for (int i = 0; i < elements_num; i++) {
            new_array[(i + actual_shift) % elements_num] = array[i];
    }

    return new_array;
}

// Условия задания:
// Дана последовательность из N (1 ≤ N ≤ 100000) целых чисел и число K (|K| ≤ 100000).
// Сдвинуть всю последовательность (сдвиг - циклический) на |K| элементов вправо,
// если K – положительное и влево, если отрицательное.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);

    int shift;
    scanf("%d", &shift);
    print_array(do_the_shift(array, shift, elements_num), elements_num);

    return 0;
}
