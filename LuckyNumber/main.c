#include <stdio.h>
#include <stdlib.h>
int main(){
srand(time(0));
int n,count=0;
printf("Enter how many values to use:");scanf("%d",&n);
int *arr=(int)malloc(n*sizeof(int));
int *arr2=(int)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
    arr[i]=(rand()%20)+1;
printf("Numbers:");
for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
printf("\n");
for(int i=0;i<n;i+=2){
arr2[count++]=arr[i];
}
printf("Lucky numbers is:");
for(int i=2;i<count;i+=3)
    arr2[i]='/';
 for(int i=0;i<count;i++){
    if(arr2[i]=='/')
        continue;
    else
        printf("%d ",arr2[i]);
}
return 0;
}
