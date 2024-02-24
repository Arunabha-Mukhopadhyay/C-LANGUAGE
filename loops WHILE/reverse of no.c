#include <stdio.h>
int main(){
  int n;
  printf("enter the no: ");
  scanf("%d",&n);
  int r=0;
  while(n>0){
    r=r+(n%10);
    r=r*10;
    n=n/10;
  }
//ALSO IF WE DO 1ST R=R*10 THEN R=R+(N%10) WE WILL GET THE SAME OUTPUT WITHOUT USING R=R/10
  r=r/10;     
  printf("the sum of digits are :%d ",r);
  return 0;
}

// TO FIND SUM OF THE ORIGINAL NO AND NO GET AFTER REVERSING THE DIGITS
// #include <stdio.h>
// int main(){
//   int n;
//   printf("enter the no: ");
//   scanf("%d",&n);
//   int r=0;
//   int original_no=n;
//   while(n>0){
//     r=r*10;
//     r=r+(n%10);
//     n=n/10;
//   }
//   int sum=original_no+r ;   
//   printf("the sum of digits are :%d ",sum);
//   return 0;
// }