#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a / 10 == 1) {
            printf("X");
    }   else if (a / 10 == 2) {
            printf("XX");
    }   else if (a / 10 == 3) {
            printf("XXX");
    }   else if (a / 10 == 4) {
            printf("XL");
    }   else if (a / 10 == 5) {
            printf("L");
    }   else if (a / 10 == 6) {
            printf("LX");
    }   else if (a / 10 == 7) {
            printf("LXX");
    }   else if (a / 10 == 8) {
            printf("LXXX");
    }   else if (a / 10 == 9) {
            printf("XC");
    }   else if (a == 100) {
            printf("C");
    }   else {
    }

    if (a % 10 == 1) {
            printf("I\n");
    }   else if (a % 10 == 2) {
            printf("II\n");
    }   else if (a % 10 == 3) {
            printf("III\n");
    }   else if (a % 10 == 4) {
            printf("IV\n");
    }   else if (a % 10 == 5) {
            printf("V\n");
    }   else if (a % 10 == 6) {
            printf("VI\n");
    }   else if (a % 10 == 7) {
            printf("VII\n");
    }   else if (a % 10 == 8) {
            printf("VIII\n");
    }   else if (a % 10 == 9) {
            printf("IX\n");
    }   else if (a % 10 == 0) {
            printf("\n");
    }
    return 0;
}
