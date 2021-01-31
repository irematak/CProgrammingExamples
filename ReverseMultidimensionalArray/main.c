#include <stdio.h>
#include <stdlib.h>
void ReverseArr(int arr[][10],int col, int row){
printf("Enter elements in array :\n");
for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array:\n");
     for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("Reversed Array:\n");
     for(int i=col-1;i>=0;--i){
        for(int j=row-1;j>=0;--j)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}

int main()
{ int row,col;
    printf("Enter the number of columns:");scanf("%d",&col);
    printf("Enter the number of rows:");scanf("%d",&row);
     int **arr=(int **)malloc(100*sizeof(int));
    for (int i=0;i<col;i++){
        arr[i]=malloc(row*sizeof(int));
    }
    ReverseArr(arr,col,row);
    return 0;
}
