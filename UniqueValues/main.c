#include <stdio.h>
#include <stdlib.h>
int main(){
int arr[3][3],arr2[9],a=0,count=0,flag=0,b=0;
srand(time(0));
int *arr3=(int)malloc(9*sizeof(int));
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr[i][j]=rand()%20;
    }
}
printf("Array content:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d  ",arr[i][j]);
    }
  printf("\n");
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr2[a++]=arr[i][j];
    }
}
for(int i=0;i<a;i++){
        flag=0;
    for(int j=i+1;j<a;j++){//sayilar listesi hepsinden bi tane
        if(arr2[i]==arr2[j]){
            flag=1;
           continue;
        }
    }
    if(flag==0)
        arr3[b++]=arr2[i];
}
printf("\nUnique values:\n");
for(int i=0;i<b;i++){
    for(int j=0;j<a;j++){
        if(arr3[i]==arr2[j]){
            count++;
        }
    }
    if(count==1)
        printf("%d ",arr3[i]);
    count=0;
}
return 0;
}
