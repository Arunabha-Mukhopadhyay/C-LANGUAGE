// print no. from 1 to 100
#include<stdio.h>

int main(){
  int n;
  
  //if user input then :

  printf("enter the no plz: ");
  scanf("%d",&n);

  for (int i = n; i <=n*10; i=i+n) {
    printf("%d ",i);
  }
  return 0;
}