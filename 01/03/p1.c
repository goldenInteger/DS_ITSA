#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        printf("¥¿¼Æ\n");
    } else if (n < 0) {
        printf("­t¼Æ\n");
    } else {
        printf("0\n");
    }
    return 0;
}