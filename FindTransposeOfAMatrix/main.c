#include <stdio.h>
#include <stdlib.h>
int main()
{   int n;
    printf("Enter size of square matrix:");
    scanf("%d",&n);
    int **arr1=(int **)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        arr1[i]=malloc(n*sizeof(int));
    }
    int **arr2=(int **)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        arr2[i]=malloc(n*sizeof(int));
    }
    printf("Enter elements of the matrix...\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("\n");
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",arr1[i][j]);
            printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==j)
            arr2[i][j]=arr1[i][j];
           else
                arr2[i][j]=arr1[j][i];
        }
    }
    printf("Transpose of the matrix:\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",arr2[i][j]);
            printf("\n");}

    return 0;
}
