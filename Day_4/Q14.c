#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    printf("Nth Fibonacci = %d", b);
    return 0;
}