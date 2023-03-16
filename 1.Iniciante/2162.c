#include <stdio.h>

int main()
{
    int N, val = 1, PV;
    int A1, A2;
    scanf("%d", &N);
    scanf("%d %d", &A1, &A2);
    if (A2 > A1) {
        PV = 1;
    }
    else if (A2 < A1) {
        PV = -1;
    }
    else {
        PV = 0;
        val = 0;
    }
    for (int i = 0; i < N - 2 && PV != 0; i++) {
        A1 = A2;
        scanf("%d", &A2);
        if (PV == 1) {
            if (A2 >= A1) {
                val = 0;
                break;
            }
            else
                PV = -1;
        }
        else if (PV == -1) {
            if (A2 <= A1) {
                val = 0;
                break;
            }
            else
                PV = 1;
        }
    }
    if (val == 0) {
        printf("0\n");
    }
    else
        printf("1\n");
    return 0;
}