// to PRINT MARKS OF 10 STUDENTS LESS THAN 35 WITH INDICES 
#include<stdio.h>
int main(){
    int arr[10]={95,90,31,25,100,50,65,89,97,30};
    for (int i=0;i<11;i++){
       if(arr[i]<35){
        printf("%d %d \n",arr[i], i);
       }
    }
    return 0;
}