#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        long int T, A;
        scanf("%ld", &T);
        if (T > 2015) {
            A = T - 2014;
            printf("%ld A.C.\n", A);
        }
        else {
            A = 2015 - T;
            if (A == 0)
                printf("1 A.C.\n");
            else
                printf("%ld D.C.\n", A);
        }
    }
    return 0;
}