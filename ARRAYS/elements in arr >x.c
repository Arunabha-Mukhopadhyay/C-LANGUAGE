#include <stdio.h>

int main(){
    int n,x;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enetr the no to compare: ");
    scanf("%d",&x);
    int arr[n];
    int count=0;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count +=1;
        }
    }
    printf("\n%d ",count);
    return 0;
}