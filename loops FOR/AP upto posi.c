// program from 100,97,94... upto to all positive 


// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);

//   if (n <= 0) {
//     printf("Number of terms must be positive.\n");
//     return 1; // Exit the program with an error status
//   }

//   for(int i = 100; i >= 103 - 3*n; i -= 3){
//     if (i <= 0) {
//     printf("Number of terms must be positive.\n");
//     return 1; // Exit the program with an error status
//   }
//     printf("%d ", i);
//   }
//   return 0;
// }


//ANOTHER WAY
#include<stdio.h>
int main(){
  // int n;
  // printf("enter the no of terms: ");
  // scanf("%d",&n);

  int a=100;
  for(int i=1;a>0;i++){
    printf("%d ",a);
    a=a-3;
  }
  return 0;
}