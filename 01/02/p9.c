#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &i);
        if (i > 31) {
            printf("Value of more than 31\n");
        } else {
            printf("%u\n", 1U << i);
        }
    }
    return 0;
}