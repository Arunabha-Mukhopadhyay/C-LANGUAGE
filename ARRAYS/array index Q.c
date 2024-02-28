/* TO PRINT ARRAY SUCH THAT ELEMENTS IN ODD INDEX GETS MULTIPLIED BY 2 
AND ELEMENTS AT EVEN INDEX GET INCREMENTED BY 10 */ 

#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
            printf("\n%d ",arr[i]);
        }
        else{
            arr[i]=arr[i]*2;
            printf("\n%d ",arr[i]);
        }
    }
    return 0;
}