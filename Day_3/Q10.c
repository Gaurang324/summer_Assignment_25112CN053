#include <stdio.h>
int main() {
    int start, end, isPrime;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        isPrime = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}