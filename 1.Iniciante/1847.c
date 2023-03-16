#include <stdio.h>

int main() {
    int D1, D2, D3;
    scanf("%d %d %d", &D1, &D2, &D3);
    if (D1 > D2) {
        if (D3 >= D2)
            printf(":)\n");
        else if (D3 - D2 > D2 - D1)
            printf(":)\n");
        else
            printf(":(\n");
    }
    else if (D1 < D2) {
        if (D3 < D2)
            printf(":(\n");
        else if (D3 - D2 >= D2 - D1)
            printf(":)\n");
        else
            printf(":(\n");
    }
    else {
        if (D3 > D1)
            printf(":)\n");
        else
            printf(":(\n");
    }
    return 0;
}