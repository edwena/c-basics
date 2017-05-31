#include <stdio.h>

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

int find_place(int *array, int elements_num, int height) {
    int place = 1;
    for (int i = 0; i < elements_num; i++) {
        if (height <= array[i]) {
            place++;
        } else {
            break;
        }
    }
    return place;
}


// Условия задания:
// Перед началом урока ученики выстраиваются по росту, в порядке невозрастания.
// Напишите программу, которая определит на какое место в шеренге Пете нужно встать,
// чтобы не нарушить традицию, если заранее известен рост каждого ученика и эти данные уже расположены по невозрастанию.
// Если в классе есть несколько учеников с таким же ростом, как у Пети,
// то программа должна расположить его после них.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    int height;
    scanf("%d", &height);
    printf("%d\n", find_place(array, elements_num, height));
    return 0;
}
