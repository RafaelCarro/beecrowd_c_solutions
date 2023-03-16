#include <stdio.h>

int dist(int x1, int x2) {
    int delta = x1 - x2;
    if (delta < 0)
        delta = -delta;
    return delta;
}

int main() {
    int N, M;
    while (scanf("%d", &N) != EOF) {
        scanf("%d", &M);
        int cidade[N][M], pos_ash[2], pos_pok[2], mov = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &cidade[i][j]);
                if (cidade[i][j] == 1) {
                    pos_ash[0] = i + 1;
                    pos_ash[1] = j + 1;
                }
                else if (cidade[i][j] == 2) {
                    pos_pok[0] = i + 1;
                    pos_pok[1] = j + 1;
                }
            }
        }
        mov += dist(pos_ash[0], pos_pok[0]) + dist(pos_ash[1], pos_pok[1]);
        printf("%d\n", mov);
    }
    return 0;
}