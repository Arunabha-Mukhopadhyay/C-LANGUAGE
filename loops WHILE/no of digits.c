#include<stdio.h>
// int main(){
//   int n;
//   printf("enter the no: ");
//   scanf("%d",&n);
//   int count=0;
//   while(n!=0){
//     n=n/10;
//     count++;
//   }
//   printf("the no of digits are :%d ",count);
//   return 0;
// }

// IF WE WANT SUM OF DIGITS THEN :

// int main(){
//   int n,a;
//   printf("enter the no: ");
//   scanf("%d",&n);
//   int sum=0;

//   while(n!=0){
//     a=n%10;
//     sum=sum+a;
//     n=n/10;
//   }
//   printf("the sum of digits are :%d ",sum);
//   return 0;
// }


// TO PRINT THE SUM OF EVEN DIGITSIN THE NUMBER

// int main(){
//   int n,a;
//   printf("enter the no: ");
//   scanf("%d",&n);
//   int sum=0;
//   while(n!=0){
//     a=n%10;
//     if (a%2==0){
//      sum=sum+a;
//       n=n/10;
//       printf("the sum of digits are :%d ",sum);
//       break;
//     }
//   }
//   return 0;
// }

#include <stdio.h>

int main() {
    int n, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = 0;

    while (n != 0) {
        a = n % 10;
        if (a % 2 == 0) {
            sum = sum + a;
        }
        n = n / 10;
    }
    printf("The sum of even digits is: %d\n", sum);
    return 0;
}
