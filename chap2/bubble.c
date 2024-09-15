#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {
    int N;
    scanf("%d", &N);
    int *p = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < N; ++i) {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (p[j] > p[j + 1]) swap(&p[j], &p[j + 1]);
        }
    }

    printf("after sorting: ");
    for (int i = 0; i < N; ++i) printf("%d ", p[i]);
    printf("\n");

    free(p);
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}