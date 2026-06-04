#include <stdio.h>
int main() {
    int n, isPrime = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime==1)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);
    return 0;
}