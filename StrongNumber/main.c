#include <stdio.h>
#include <stdlib.h>
int fact(int n){
int mul=1;
for(int i=1;i<=n;i++)
    mul*=i;
return mul;
}

int main(){
int num,a,sum=0;
printf("Enter a number:");scanf("%d",&num);
int temp=num;
while(num>0){
   a=num%10;
   sum+=fact(a);
   num/=10;
}
if(sum==temp)
    printf("%d is a strong number.",temp);
else
    printf("%d is not a strong number.",temp);
return 0;}
