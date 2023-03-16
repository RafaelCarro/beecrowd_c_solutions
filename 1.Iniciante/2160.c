#include <stdio.h>
#include <string.h>

int main() {
    char L[500];
    int size = 0;
    fgets(L, 500, stdin);
    size = strlen(L) - 1;
    if (size > 80)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}