#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPower(int a,int b){
int flag;
if(a==9&&b==3)
    return 0;
else if(b==2){
    for(int i=0;i<a;i++){
        flag=0;
        if(pow(2,i)==a){
          flag=1;
          return 0;
          break;
        }
        else
          continue;
    }
    if(flag==0)
        return 1;
}
else if(a<10){
    if(a==1||a==b)
      return 0;
    else
       return 1;
}
return isPower(a/b,b);
}

int main(){
int number,n;
printf("Enter a number:");scanf("%d",&number);
printf("Which number's power:");scanf("%d",&n);
if(isPower(number,n)==0)
    printf("%d is a power of %d ",number,n);
else
   printf("%d is not a power of %d ",number,n);
return 0;
}
