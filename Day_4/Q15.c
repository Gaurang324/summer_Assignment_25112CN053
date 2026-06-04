#include <stdio.h>
int main() {
    int n, orig, sum = 0, digits = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    orig = n;
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
            power *= d;
        sum += power;
        temp /= 10;
    }
    if (sum == orig)
        printf("%d is Armstrong", orig);
    else
        printf("%d is not Armstrong", orig);
    return 0;
}