#include <stdio.h>
#include <stdlib.h>
int closest_prime(int value){
int flag,num2;
for(int i=value-1;i>=0;i--){
flag=0;
for(int j=2;j<i;j++){
    if(i%j==0){
        flag=1;
        break;
    }}
    if(flag==0){
        num2=i;
    break;}
}
return num2;
}
int main()
{
int num;
printf("Enter an integer:");scanf("%d",&num);
printf("Closest prime number:%d",closest_prime(num));
return 0;
}
