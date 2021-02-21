#include <stdio.h>
#include <stdlib.h>
int main(){
int n,m=0;
int *arr=(int)malloc(1000*sizeof(int));
printf("Enter number of rows of Floyd's triangle to print:");scanf("%d",&n);
for(int i=1;i<=n;i++)
    m+=i;
for(int i=0;i<m;i++)
    arr[i]=i+1;
int k=0,j;
for(int i=0;i<n;i++){
    for( j=k;j<k+1+i;j++){
        printf("%d ",arr[j]);
    }
    k=j;
    printf("\n");
}
return 0;}
