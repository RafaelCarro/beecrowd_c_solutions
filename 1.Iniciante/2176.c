#include <stdio.h>
#include <string.h>

int main() {
    int U = 0, len;
    char N[101];
    scanf("%s", N);
    len = strlen(N);
    int i = 0;
    while (N != '\0' && i < 101) {
        if (N[i] == '1')
            U++;
        i++;
    }
    if (U % 2 == 1) {
        N[len] = '1';
        N[len + 1] = '\0';
    }
    else {
        N[len] = '0';
        N[len + 1] = '\0';
    }
    printf("%s\n", N);
    return 0;
}