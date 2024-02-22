#include<stdio.h>
int main(){
  int n;
  printf("enter the no of terms: ");
  scanf("%d",&n);

  int a=100;
  for(int i=1;i<n;i++){
    printf("%d ",a);
    a=a*0.5;
  }
  return 0;
}