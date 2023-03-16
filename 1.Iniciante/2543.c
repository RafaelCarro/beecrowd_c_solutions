#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) != EOF) {
        int IP, count = 0;
        scanf("%d", &IP);
        for (int i = 0; i < N; i++) {
            int I, j;
            scanf("%d %d", &I, &j);
            if (I == IP && j == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}