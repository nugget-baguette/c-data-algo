#include <stdio.h>

int main() {
    int n;
    printf("Enter the length of edge: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            if (j == 0 || j == i || i == n - 1) putchar('o');
            else putchar(' ');
        }
        putchar('\n');
    }
}