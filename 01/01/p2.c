#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", num / 1000);
    printf("%d\n", (num / 100) % 10);
    printf("%d\n", (num / 10) % 10);
    printf("%d\n", num % 10);

    return 0;
}