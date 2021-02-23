#include <stdio.h>
#include <stdlib.h>
int main(){
int num,r,n,n2,sum=0;
printf("Enter the first number:");scanf("%d",&num);
printf("Enter the total numbers:");scanf("%d",&n);
printf("Enter the common ratio:");scanf("%d",&r);
int *arr=(int *)malloc(n*sizeof(int));
arr[0]=num;
n2=num;
for(int i=1;i<n;i++){
    n2*=r;
    arr[i]=n2;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    sum+=arr[i];}
printf("\nThe Sum of Geometric Progression Series:%d\n",sum);
return 0;
}
