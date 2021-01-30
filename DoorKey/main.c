#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,count1=0,count2=1,count3=0,count4=0,k=0;
int *pos1=(int *)malloc(101*sizeof(int));
int *pos2=(int *)malloc(101*sizeof(int));
int *pos3=(int *)malloc(101*sizeof(int));
 for(int i=1;i<101;i++){
    for(int j=1;j<21;j++){
        if(i%j==0)
            pos1[k]=count2++;
        else
           continue;
    }
    k++;count2=1;
 }
for(int i=0;i<100;i++){
    if(pos1[i]%2==0){
        pos3[count3++]=i+1;
    }
    else
        pos2[count4++]=i+1;
}
printf("\n\nLocked door numbers...\n");
for(int i=0;i<count3;i++)
    printf("%d ",pos2[i]);
printf("\n");

printf("\n\nOpened door numbers...\n");
for(int i=0;i<count3;i++)
    printf("%d ",pos3[i]);
printf("\n");
    return 0;

}
