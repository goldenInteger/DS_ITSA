#include <stdio.h>

int main() {
    int n, x, y, sum;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        sum = x + y;
        printf("%d\n", sum * sum);
    }
    return 0;
}