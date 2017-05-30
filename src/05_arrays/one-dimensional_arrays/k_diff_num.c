#include <stdio.h>

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

int count_diff(int *array, int elements_num) {
    int diff_count = 1;
    for (int i = 1; i < elements_num; i++) {
        if (array[i] != array[i - 1]) {
            diff_count++;
        }
    }
    return diff_count;
}

// Условия задания:
// Найти количество различных элементов в неубывающем массиве.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    printf("%d\n", count_diff(array, elements_num));
    return 0;
}
