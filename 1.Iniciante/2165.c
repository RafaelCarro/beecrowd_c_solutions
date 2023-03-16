#include <stdio.h>
#include <string.h>

int main() {
    char L[500];
    int size = 0;
    fgets(L, 500, stdin);
    size = strlen(L) - 1;
    if (size > 140)
        printf("MUTE\n");
    else
        printf("TWEET\n");
    return 0;
}