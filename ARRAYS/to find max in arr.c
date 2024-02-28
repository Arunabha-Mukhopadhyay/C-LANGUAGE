#include <stdio.h>

int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
        if(max<arr[i]){  //FOR MIN : max>arr[i];
            max=arr[i];
        }
    }
    printf("\n%d ",max);
    return 0;
}