#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    long long d = n / 86400;
    n %= 86400;
    long long h = n / 3600;
    n %= 3600;
    long long m = n / 60;
    long long s = n % 60;
    
    printf("%lld days\n", d);
    printf("%lld hours\n", h);
    printf("%lld minutes\n", m);
    printf("%lld seconds\n", s);
    
    return 0;
}