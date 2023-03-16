#include <stdio.h>
#include <math.h>

int main() {
    long int N, H[8] = { 0 };
    int p;
    scanf("%d", &N);
    for (int i = 9; i >= 0; i--) {
        while (N >= pow(16, i)) {
            N -= pow(16, i);
            H[i]++;
        }
    }

    int j = 7;
    while (j >= 0) {
        if (H[j] != 0) {
            p = j;
            break;
        }
        j--;
    }

    for (int i = p; i >= 0; i--) {
        if (H[i] == 0)
            printf("0");
        else if (H[i] == 1)
            printf("1");
        else if (H[i] == 2)
            printf("2");
        else if (H[i] == 3)
            printf("3");
        else if (H[i] == 4)
            printf("4");
        else if (H[i] == 5)
            printf("5");
        else if (H[i] == 6)
            printf("6");
        else if (H[i] == 7)
            printf("7");
        else if (H[i] == 8)
            printf("8");
        else if (H[i] == 9)
            printf("9");
        else if (H[i] == 10)
            printf("A");
        else if (H[i] == 11)
            printf("B");
        else if (H[i] == 12)
            printf("C");
        else if (H[i] == 13)
            printf("D");
        else if (H[i] == 14)
            printf("E");
        else if (H[i] == 15)
            printf("F");
    }
    printf("\n");
    return 0;
}