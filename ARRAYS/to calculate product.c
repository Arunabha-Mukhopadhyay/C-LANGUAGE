#include<stdio.h>
int main(){
  int n;
  printf("enter the size plz: ");
  scanf("%d",&n);
  int arr[n];
  int prod=1;
  for (int i=0;i<=n-1;i++){
       scanf("%d",&arr[i]);          
    }
    printf("\n");
  for (int i=0;i<=n-1;i++){
       printf("%d\n ",arr[i]);  
        prod =prod*arr[i];   
    }
  printf("%d \n",prod);
  return 0;
}