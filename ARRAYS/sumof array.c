#include<stdio.h>
int main(){
    int arr[5]={5,0,1,5,10};
    int sum=0;
    for (int i=0;i<=4;i++){
       sum=sum+arr[i];          
    }
     printf("%d \n",sum);
    return 0;
}