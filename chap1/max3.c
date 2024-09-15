#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (a < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    printf("The maximum value is %d\n", max);
}