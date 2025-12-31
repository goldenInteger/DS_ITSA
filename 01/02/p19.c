#include <stdio.h>

int main() {
    int n, i;
    long long res;
    while (scanf("%d", &n) != EOF) {
        res = 1;
        for (i = 1; i <= n; i++) {
            res *= i;
        }
        printf("%lld\n", res);
    }
    return 0;
}