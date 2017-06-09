#include <stdio.h>
#define MAX 6

typedef struct {
    int o_x, o_y;
} point;

typedef struct {
    char dir[MAX];
    int steps;
} course;

point create_point() {
    point a;
    a.o_x = 0;
    a.o_y = 0;
    return a;
}

// Условие задания:
// Капитан Флинт зарыл клад на Острове сокровищ. Он оставил описание, как найти клад.
// Описание состоит из строк вида: "North 5", где  слово – одно из "North", "South", "East", "West", –
// задает направление движения, а  число – количество шагов, которое необходимо пройти в этом направлении.
// Напишите программу, которая по описанию пути к кладу определяет точные координаты клада, считая,
// что начало координат находится в начале пути, ось OX направлена на восток, ось OY – на север.
int main() {
    point current_point = create_point();
    course current_course;
    while (scanf("%s%d", current_course.dir, &current_course.steps) != EOF) {
        if (current_course.dir[0] == 'E') {
            current_point.o_x += current_course.steps;
        } else if (current_course.dir[0] == 'W') {
            current_point.o_x -= current_course.steps;
        } else if (current_course.dir[0] == 'N') {
            current_point.o_y += current_course.steps;
        } else if (current_course.dir[0] == 'S') {
            current_point.o_y -= current_course.steps;
        }
    }
    printf("%d %d\n", current_point.o_x, current_point.o_y);
    return 0;
}
