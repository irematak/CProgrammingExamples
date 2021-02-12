#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int num,a=0,result;
printf("Enter a number:");
scanf("%d",&num);
while(1){
  result=(pow(2,a)*a)+1;
  if(result>=num){
  if(result==num){
   printf("%d is a cullen number.",num);
   break;
  }
  else{
   printf("%d is not a cullen number.",num);
   break;
  }
  }
  a++;
}
return 0;
}
