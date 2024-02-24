#include <stdio.h>

int main() {
    int n,a=0,b=1;
    int sum;
    printf("enter the no of terms: ");
    scanf("%d",&n);
    printf("%d %d",a, b);
    for(int i=2;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}