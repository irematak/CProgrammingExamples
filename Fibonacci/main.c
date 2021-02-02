#include <stdio.h>
#include <stdlib.h>
void fibonacci(int num2){
int fib[100];
fib[0]=0;
fib[1]=1;
for(int i=2;i<num2;i++)
fib[i]=fib[i-1]+fib[i-2];
printf("Fibonacci Series:\n");
for(int i=0;i<num2;i++)
printf("%d\n",fib[i]);
}
int main()
{
    int num;
    printf("Enter the number of terms:");scanf("%d",&num);
    fibonacci(num);
    return 0;
}
