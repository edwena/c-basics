#include <stdio.h>

void counter(int seconds) {
    int current_number = 1;
    for(int sec_counter = 1; sec_counter <= seconds; current_number++) {
        for(int i = 1; i <= current_number && sec_counter <= seconds; i++) {
            printf("%d ", current_number);
            sec_counter++;
        }
    }
    printf("\n");
}

// Условия задания:
// "ГНЧЭ-1"  – сложное электронное устройство, выдающее каждую секунду очередное число последовательности 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5...
// Ввиду дороговизны электронных комплектующих вам поручено разработать эмулятор для этого устройства.
// Дано количество секунд (от 1 до 1000000), которые работает генератор после включения.
// Вывести результат работы генератора.
int main() {
    int seconds;
    scanf("%d", &seconds);
    counter(seconds);
    return 0;
}

