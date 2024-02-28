// to count the no of pairs whose sum is = to user input.

#include <stdio.h>

int main(){
   int n,x,count=0;
   printf("enter the size of array: ");
   scanf("%d",&n);
   printf("enter the no: ");
   scanf("%d",&x);
   int arr[n];
   for(int i=0;i<=n-1;i++){
       scanf("%d",&arr[i]);
   }
   printf("\n");
   for(int i=0;i<=n-1;i++){
    //   printf("%d ",arr[i]);

/* FOR BETTER : PUT ALSO => for(int j=i+1;j<=n-1;j++){
    if(arr[i]+arr[i+1]==x){
        count =count+1;
    }
  }
*/

    if(arr[i]+arr[i+1]==x){
        count =count+1;
        printf("%d %d ", arr[i], arr[i+1]);
    }
   }
   printf("%d ",count);
    return 0;
}