#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    if (n <= 1) {
        printf("NO\n");
        return 0;
    }
    int isPrime = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}