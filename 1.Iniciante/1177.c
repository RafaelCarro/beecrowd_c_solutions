#include <stdio.h>

int main() {
    int T, N[1000];
    scanf("%d", &T);

    for (int i = 0; i < 1000; i += 0) {
        for (int j = 0; j < T; j++) {
            N[i] = j;
            printf("N[%d] = %d\n", i, j);
            if (i == 999) {
                goto end;
            }
            i++;
        }
    }
end:
    return 0;
}