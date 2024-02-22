#include<stdio.h>
int main(){
  int n;
  printf("enter the no of terms: ");
  scanf("%d",&n);

  int a=1;
  for(int i=1;i<=n;i++){
    printf("%d ",a);
    a=a*2;
  }
  return 0;
}
// for GP:3,12,48.... a=3 and a=a*4;