#include <stdio.h>
#include <stdlib.h>
void lucas(int *N,int n){
  for(int i=2;i<n;i++){
    N[i]=N[i-1]+N[i-2];
  }
   for(int i=0;i<n;i++)
    printf("%d ",N[i]);
}


int main(){
int n;
int *N=(int)malloc(1000*sizeof(int));
printf("Enter the number of terms of Lucas numbers you want to print :");scanf("%d",&n);
N[0]=2,N[1]=1;
lucas(N,n);
return 0;
}
