#include <stdio.h>
#include <stdlib.h>
int main()
{ int num,temp;
    printf("Enter the size of the array:");scanf("%d",&num);
    int *arr=(int *)malloc(num*sizeof(int));
    printf("Enter the values:\n");
    for(int i=0;i<num;i++)
    scanf("%d",&arr[i]);
    printf("\n");
    printf("Before ranking:\n");
    for(int i=0;i<num;i++){
    printf("%d ",arr[i]);
    }printf("\n\n");

   for(int i=1;i<num;i++){
    for(int j=0;j<num-1;j++){
     if(arr[j]>arr[j+1]){
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;}
     }
 }
   printf("After ranking:\n");
   for(int i=0;i<num;i++){
    printf("%d ",arr[i]);}
    return 0;
}
