#include <stdio.h>
#include <string.h>

int main() {
    char pal[10000];
    int T, size;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s", pal);
        size = strlen(pal);
        printf("%.2lf\n", 0.01 * size);
    }
    return 0;
}