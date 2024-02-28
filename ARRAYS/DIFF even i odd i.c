// PRINT DIFFERENCE BETWEEN SUM OF EVEN INDEXED - SUM OF ODD INDEXED;

#include <stdio.h>

int main(){
   int n,total_sum=0,sum=0;
   printf("enter the size of array: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<=n-1;i++){
       scanf("%d",&arr[i]);
   }
   printf("\n");
   for(int i=0;i<=n-1;i++){
    //   printf("%d ",arr[i]);
    if(i%2==0){
       sum=sum+arr[i];
    }
    else{
        total_sum=total_sum+arr[i];
    }
   }
   printf("%d ",sum-total_sum);
    return 0;
}