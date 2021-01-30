#include <stdio.h>
#include <stdlib.h>
int result(int num1,int num2){
int sum=0;
while(num2!=0){
    sum+=num1;
    num2--;
}
return sum;
}

int main()
{int n1,n2;
printf("Enter two integers:");scanf("%d %d",&n1,&n2);
printf("%d x %d = %d",n1,n2,result(n1,n2));
    return 0;
}