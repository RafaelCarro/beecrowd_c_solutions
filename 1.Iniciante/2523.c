#include <stdio.h>

int main() {
    char dic[27];
    while (scanf("%s", dic) != EOF) {
        int N;
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            int L;
            scanf("%d", &L);
            printf("%c", dic[L - 1]);
        }
        printf("\n");
    }
    return 0;
}