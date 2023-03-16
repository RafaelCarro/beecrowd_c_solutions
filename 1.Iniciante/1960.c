#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);


    char romanos[30];
    int i = 0;

    while (num >= 1000) {
        romanos[i++] = 'M';
        num -= 1000;
    }
    if (num >= 900) {
        romanos[i++] = 'C';
        romanos[i++] = 'M';
        num -= 900;
    }
    if (num >= 500) {
        romanos[i++] = 'D';
        num -= 500;
    }
    if (num >= 400) {
        romanos[i++] = 'C';
        romanos[i++] = 'D';
        num -= 400;
    }
    while (num >= 100) {
        romanos[i++] = 'C';
        num -= 100;
    }
    if (num >= 90) {
        romanos[i++] = 'X';
        romanos[i++] = 'C';
        num -= 90;
    }
    if (num >= 50) {
        romanos[i++] = 'L';
        num -= 50;
    }
    if (num >= 40) {
        romanos[i++] = 'X';
        romanos[i++] = 'L';
        num -= 40;
    }
    while (num >= 10) {
        romanos[i++] = 'X';
        num -= 10;
    }
    if (num >= 9) {
        romanos[i++] = 'I';
        romanos[i++] = 'X';
        num -= 9;
    }
    if (num >= 5) {
        romanos[i++] = 'V';
        num -= 5;
    }
    if (num >= 4) {
        romanos[i++] = 'I';
        romanos[i++] = 'V';
        num -= 4;
    }
    while (num > 0) {
        romanos[i++] = 'I';
        num--;
    }
    romanos[i] = '\0';

    printf("%s\n", romanos);
    return 0;
}