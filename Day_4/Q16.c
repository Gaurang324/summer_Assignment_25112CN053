#include <stdio.h>
int main() {
    int start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    for (int n = start; n <= end; n++) {
        int sum = 0, digits = 0, temp = n;
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
        if (sum == n)
            printf("%d ", n);
    }
    return 0;
}