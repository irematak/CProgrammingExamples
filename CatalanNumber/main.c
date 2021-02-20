#include <stdio.h>
#include <stdlib.h>
unsigned long long int fun(int n){
unsigned long long int m=2*n,multiply=1,multiply2=1;
if(n==0)
    return 1;
else{
for(int i=n;i>0;i--,m--){
    multiply*=m;
    multiply2*=i;
}
return multiply/multiply2;}
}
int main(){
int n;
printf("Enter n:");scanf("%d",&n);
int *arr=(int)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    arr[i]=((float)1/(i+1))*(fun(i));
    printf("%d ",arr[i]);
}

return 0;}
