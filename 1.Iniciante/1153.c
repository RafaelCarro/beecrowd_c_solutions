#include <stdio.h>

int main() {

    int N, fat = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fat = fat * i;
    }
    printf("%d\n", fat);

    return 0;
}