#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, T;
    scanf("%d %d", &N, &T);
    int *p = (int *)calloc(N + 1, sizeof(int));

    if (p == NULL) return 1;

    for (int i = 0; i < N; ++i) {
        scanf("%d", &p[i]);
    }
    p[N] = T;

    int i = 0;
    while (1) {
        if (p[i++] == T) break;
    }
    --i;
    printf("%d\n" ,i == N ? -1 : i);
    return 0;
}