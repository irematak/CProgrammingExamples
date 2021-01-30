#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col,row,pozi1,pozi2,pozj1,pozj2,min;
    int **arr=(int **)malloc(100*sizeof(int));
    for (int i=0;i<100;i++){
        arr[i]=malloc(100*sizeof(int));
    }
    printf("Enter the number of columns:");scanf("%d",&col);
    printf("Enter the number of rows:");scanf("%d",&row);
    printf("Enter values:\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("As matrix...\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");}
    int max=arr[0][0];
     min=arr[1][1];
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                pozi1=i;
                pozj1=j;

            }
            if(arr[i][j]<min){
                min=arr[i][j];
                pozi2=i;
                pozj2=j;
            }
        }
    }

    printf("Max number in this array --> %d , %d.col and %d.row \n",max,pozj1+1,pozi1+1);
    printf("Min number in this array --> %d , %d.col and %d.row ",min,pozj2+1,pozi2+1);
    return 0;
}
