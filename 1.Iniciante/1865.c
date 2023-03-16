#include <stdio.h>
#include <string.h>

int main() {
    int N, F;
    char Name[20], Thor[] = "Thor";
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s %d", Name, &F);
        if (strcmp(Name, Thor) == 0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}