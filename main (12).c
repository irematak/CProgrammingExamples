#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,row,col;
    int **arr1=(int **)malloc(100*sizeof(int));
    for (int i=0;i<100;i++){
        arr1[i]=malloc(100*sizeof(int));
    }
    int *arr2=(int *)malloc(200*sizeof(int));
    printf("Enter the number of columns:");scanf("%d",&col);
    printf("Enter the number of rows:");scanf("%d",&row);
    printf("values...\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
            printf("%d ",arr1[i][j]);
            printf("\n\n");
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
            arr2[count++]=arr1[i][j];
    }
    printf("As one dimensional array...\n");
    for(int i=0;i<count;i++)
        printf("%d ",arr2[i]);
    return 0;
}
