#include <stdio.h>
#include "IntStack.h"

int main() {
    IntStack stk;
    if (Initialize(&stk, 100) == -1) {
        return 1;
    }

    int choice, value;
    while (1) {
        printf("\n1:Push 2:Pop 3:Print 0:Exit\n");
        printf("option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            Terminate(&stk);
            puts("Exit");
            return 0;
        case 1:
            printf("input: ");
            scanf("%d", &value);
            if (Push(&stk, value) == -1) printf("Error: Stack is Full");
            else printf("Success");
            break;
        case 2:
            if (Pop(&stk, &value) == -1) printf("Error: Stack is Empty");
            else printf("%d", value);
            break;
        case 3:
            Print(&stk);
            break;
        default:
            puts("Invalid choice");
            break;
        }
        putchar('\n');
    }
}