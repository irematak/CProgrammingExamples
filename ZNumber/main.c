#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void is_znumber(int n){
int count1=0,count2=0,sum=0,flag=0;
int *arr=malloc(10*sizeof(int));
int temp=n;
while(n>0){
    arr[count1++]=n%10;
    n/=10;
}
for(int i=0;i<count1;i++)
    sum+=arr[i];
for(int i=0;i<count1;i++){
    if(arr[i]==0){
    flag=1;
    break;}
}
if(flag==1)
    printf("False");
else{
for(int i=0;i<count1;i++){
    if(temp % (int)pow(arr[i],2)==0)
      count2++;
}
if(temp%sum==0)
    count2++;
if(count2==(count1+1))
    printf("True");
else
    printf("False");
 }
}
int main()
{
 int n;
 printf("Enter a number:");scanf("%d",&n);
 is_znumber(n);
 return 0;
}
