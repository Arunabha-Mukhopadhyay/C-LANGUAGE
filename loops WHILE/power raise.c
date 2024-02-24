#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    int power = 1;
    for (int i = 1; i <= b; i++) {
        power *= a;
    }
    printf("%d raised to the power %d is: %d\n", a, b, power);
    return 0;
}