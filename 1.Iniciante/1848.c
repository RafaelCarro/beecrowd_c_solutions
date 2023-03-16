#include <stdio.h>

int main() {
    int c = 0, sum[3] = { 0 };
    char s[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s", s);
        while (s[0] != 'c') {
            if (s[0] == '*')
                sum[i] += 4;
            if (s[1] == '*')
                sum[i] += 2;
            if (s[2] == '*')
                sum[i] += 1;
            scanf("%s", s);
        }
        scanf("%s", s);
        printf("%d\n", sum[i]);
    }
}