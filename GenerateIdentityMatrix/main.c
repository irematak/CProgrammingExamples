#include <stdio.h>
#include <stdlib.h>

int main()
{  int n;
    printf("Enter size of square matrix:");
    scanf("%d",&n);
    int **arr=(int **)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        arr[i]=malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            arr[i][j]=1;
            else
            arr[i][j]=0;
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        printf("%d  ",arr[i][j]);
        printf("\n");}
    return 0;
}
