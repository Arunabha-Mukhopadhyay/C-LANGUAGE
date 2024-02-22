// PRINT AP :1,3,5,7....
#include<stdio.h>
int main(){
  int n;
  printf("enter the no of terms: ");
  scanf("%d",&n);

  for(int i=1;i<=2*n-1;i=i=i+2){
    printf("%d ",i);
  }
  return 0;
}

//SIMILARLY FOR 4,7,10,13.... REPLACE 3*n+1 but withoiut using maths is given below by creating extra variable

// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter the no of terms: ");
//   scanf("%d",&n);

//   int a=4;
//   for(int i=1;i<=n;i++){
//     printf("%d ",a);
//     a=a+3;
//   }
//   return 0;
// }