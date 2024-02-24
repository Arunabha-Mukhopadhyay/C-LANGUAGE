#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int originalNumber = n;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    if (sum == originalNumber) {
        printf("The sum of the cubes of the digits equals the number itself: %d\n", originalNumber);
    } else {
        printf("The sum of the cubes of the digits does not equal the number itself.\n");
    }

    return 0;
}