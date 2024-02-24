//FOR DISPLAYING ALT SERIES

// #include <stdio.h>
// #include <math.h> 
// int main() {
//     int n, i = 1; // Initialize the value of i
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     while (i <= n) {
//         int r = pow(-1, i) * i; 
//         printf("%d\n", r); 
//     }
//     return 0;
// }

// FOR SUM OF THERE TERMS 
#include <stdio.h>
int main() {
    int n;
    printf("enter the no of terms: ");
    scanf("%d",&n);
    int sum=0; 
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
    printf("%d ",sum);
    return 0;
}

// ANOTHER WAY TO DISPLAY SUM 

// int main() {
//     int n;
//     printf("enter the no of terms: ");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         if(i%2==0){
//             sum=n/2;
//         }
//         else{
//             sum=(-n/2) +n;
//         }
//     }
//     printf("%d ",sum);
//     return 0;
// }