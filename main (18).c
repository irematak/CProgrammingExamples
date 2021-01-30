#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,count=0,i,pos1;
    int *pos= (int *)malloc(100*sizeof(int));
    printf("Enter an integer:");scanf("%d",&num);
    while(num>0){
      pos[count++]=num%10;
      num/=10;
    }
    int max=pos[count-1];
    pos1=1;
    for(i=count-1;i>=0;i--){
    if(pos[i]>max){
    max=pos[i];
    pos1=count-1;
    if(max==pos[0])
      pos1=count;
   }
}
    printf("Largest digit of the number is %d  and it's in %d. digit.",max,pos1);
    return 0;
}
