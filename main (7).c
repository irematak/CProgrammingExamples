#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void PerfectSquares(int num){
int b=0;
int *arr=(int *)malloc(20*sizeof(int));
    for(int i=0;i<num;i++){
        int a=sqrt(i);
        if(i==a*a)
            arr[b++]=i;
}
printf("\nThere are %d perfect squares \n\n",b);
printf("Perfect squares until %d :\n",num);
    for(int i=0;i<b;i++)
        printf("%d\n",arr[i]);

}
int main()
{
int n;
printf("Enter a number:");scanf("%d",&n);
PerfectSquares(n);
    return 0;
}