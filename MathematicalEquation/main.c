#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float result(int n,int x){
int a=0,b=0,fact=1;
float sum=0.0;
int *arr1=(int*)malloc(50*sizeof(int));
int *arr2=(int*)malloc(50*sizeof(int));
for(int i=2;i<=n;i++){
   arr1[a++]=pow(x,i);
}
for(int i=2;i<=n;i++){
    for(int j=i;j>=1;j--){
        fact*=j;
    }
    arr2[b++]=fact;
    fact=1;
}
for(int i=0;i<n-1;i++)
sum+=(float)arr1[i]/arr2[i];
sum+=x;
return sum;
}
int main()
{ int n,x;
printf("x + x^2/2! + x^3/3! + x^4/4!+ ... + x^n/n!\n\n");
printf("Enter n:");scanf("%d",&n);
printf("Enter x:");scanf("%d",&x);
printf("Sum:%.2f",result(n,x));
return 0;}
