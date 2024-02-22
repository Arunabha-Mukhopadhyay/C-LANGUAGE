// to print all the even no between 1 to 100
#include<stdio.h>

int main(){
  int n=100;
  
  //if user input then :

  /*printf("enter the no plz: ");
    scanf("%d",&n);*/

// FOR EVEN NO CODE;
  for (int i = 1; i <=n; i++) {
    if (i%2==0) {
      printf("%d ",i);
    }
  }
  printf("\n");

//USING CONTINUE TO PRINT ODD NO
for(int i=0;i<=n;i++){
  if (i%2==0) {
    continue;
  }
  printf("%d ",i);
}
printf("\n");


//USING CONTINUE TO PRINT EVEN NO
for (int i=0;i<=n;i++){
  if(i%2!=0){
    continue;
  }
  printf("%d ",i);
}
printf("\n");

// FOR ODD NO CODE;

   for (int i = 1; i <=n; i++) {
    if (i%2!=0) {
      printf("%d ",i);
    }
  }
  return 0;
}