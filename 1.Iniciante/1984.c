#include <stdio.h>
#include <string.h>

int main() {
    int size;
    char N[10], buffer;
    scanf("%s", N);
    size = strlen(N);
    for (int i = 0; i < size / 2; i++) {
        buffer = N[i];
        N[i] = N[size - i - 1];
        N[size - i - 1] = buffer;
    }
    printf("%s\n", N);
}