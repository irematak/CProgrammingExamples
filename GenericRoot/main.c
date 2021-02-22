#include <stdio.h>
#include <stdlib.h>
int fun(int num){
int n,sum=0;
 while(num>0){
  n=num%10;
  sum+=n;
  num/=10;
}
if(sum<10)
    return sum;
return fun(sum);
}

int main(){
int num;
printf("Enter a number:");scanf("%d",&num);
printf("Generic root of %d : %d",num,fun(num));
return 0;
}
