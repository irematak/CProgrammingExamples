#include <stdio.h>
#include <stdlib.h>
int main(){
int n,count=0,flag=0,a;
printf("Enter n:");scanf("%d",&n);
for(int i=n;i>0;i--){
   if(i>10){
    int temp=i;
     while(temp>0){
        a=temp%10;
        temp/=10;
        if(a==3){
         flag=1;
         break;
       }
        else
         flag=0;
    }
    if(flag==0)
      count++;
   }
   else{
      if(i!=3)
        count++;
      else
        continue;
    }
 }
printf("%d numbers do not contain 3.",count);
return 0;
}
