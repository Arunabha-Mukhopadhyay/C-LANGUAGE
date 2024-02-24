#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int prod = 1;
    for (int i = 1; i <=n; i++) {
      prod *= i;
      printf("%d ", prod);
    }
    return 0;
}

//FOR MORE IMPROVED CODE

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         int prod = 1;
//         for (int j = 1; j <= i; j++) {
//             prod *= j;
//         }
//         printf("%d! = %d\n", i, prod);
//     }
//     return 0;
// }
