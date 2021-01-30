#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{int num,count=0,sum=0;
int *pos=(int *)malloc(100*sizeof(int));
printf("Enter a number:");scanf("%d",&num);
for(int i=1;i<num;i++){
    if(num%i==0)
        pos[count++]=i;
}
for(int i=0;i<count;i++){
    printf("%d ",pos[i]);
    sum+=pos[i];
}
if(sum==num)
    printf("\n%d is a Perfect Number",num);
else
    printf("\n%d is not a Perfect Number",num);
    return 0;
}
