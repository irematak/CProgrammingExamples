#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
int a,b,c;
printf("Enter coefficients for ax^2+bx+c :");scanf("%d %d %d",&a,&b,&c);
int d=(b*b)-(4*a*c);
int root1=(-b+sqrt(d))/(2*a);
int root2=(-b-sqrt(d))/(2*a);
if(d>0){
printf("There are two real roots.\nroot1 = %d  root2 = %d",root1,root2);
}
 else if(d==0)
 printf("There is one real root.\nroot1 = root2 = %d",root1);
 else
    printf("There are no real roots.");

        return 0;
}
