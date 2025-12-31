#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int maxVal;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (i == 0) {
            maxVal = x;
        } else if (x > maxVal) {
            maxVal = x;
        }
    }
    printf("%d\n", maxVal);
    return 0;
}