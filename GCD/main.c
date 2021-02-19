#include <stdio.h>
#include <stdlib.h>
int main(){
int n1,n2,min;
printf("Enter two numbers:");scanf("%d %d",&n1,&n2);
if(n1<n2)
    min=n1;
else
    min=n2;
for(int i=min;i>0;i--){
    if(n1%i==0&&n2%i==0){
        printf("GCD of %d and %d is: %d",n1,n2,i);
        break;
    }
}
return 0;
}
