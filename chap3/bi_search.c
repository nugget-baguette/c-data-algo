#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    scanf("%d %d", &n, &key);
    int *a = calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int ans = bin_search(a, n, key);
    printf("%d\n", ans);
    free(a);
    return 0;
}