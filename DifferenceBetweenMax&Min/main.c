#include <stdio.h>
#include <stdlib.h>
void Difference(int *arr,int size2){
int i,max=0,min;
printf("Enter values!\n");
for(i=0;i<size2;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<size2;i++){
if(arr[i]>max)
max=arr[i];}
min=max;
for(i=0;i<size2;i++){
if(arr[i]<min)
min=arr[i];}
int difference=max-min;
printf("Max number in this array:%d\n",max);
printf("Min number in this array:%d\n",min);
printf("Max-Min=%d\n",difference);
}
int main()
{   int size;
    printf("Enter the size of the array:");scanf("%d",&size);
    int *arr2=(int *)malloc(size*sizeof(int));
    Difference(arr2,size);
    return 0;
}
