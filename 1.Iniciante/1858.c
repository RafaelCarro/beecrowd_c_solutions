#include <stdio.h>

int main() {
    int N, e = 1;
    scanf("%d", &N);

    int T[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < N; i++) {
        if (T[i] < T[0]) {
            T[0] = T[i];
            e = i + 1;
        }
    }
    printf("%d\n", e);
    return 0;
}