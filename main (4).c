#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,remainder,sum=0,a=0,num;
    printf("Enter an integer:");scanf("%d",&n);
    num=n;
    int *s=(int *)malloc(10*sizeof(int));
    while(n!=0){
      remainder=n%10;
      s[a++]=remainder;
      n/=10;
    }
    for(int i=0;i<a;i++){
        sum+=pow(s[i],3);
    }
    if(sum==num)
        printf("%d is an Armstrong number",num);
    else
        printf("%d is not an Armstrong number",num);
    return 0;
}
