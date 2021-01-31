#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
int number,posi,posj,col,row;
printf("Enter a number:");scanf("%d",&number);
printf("Enter the number of columns:");scanf("%d",&col);
printf("Enter the number of rows:");scanf("%d",&row);
     int **arr=(int **)malloc(col*sizeof(int));
    for (int i=0;i<col;i++){
        arr[i]=malloc(row*sizeof(int));
    }
     int **result=(int **)malloc(col*sizeof(int));
    for (int i=0;i<col;i++){
        result[i]=malloc(row*sizeof(int));
    }
    printf("Enter elements in array:\n");
for(int i=0;i<col;i++){
    for(int j=0;j<row;j++)
        scanf("%d",&arr[i][j]);
}
printf("As matrix:\n");
for(int i=0;i<col;i++){
    for(int j=0;j<row;j++)
        printf("%d  ",arr[i][j]);
        printf("\n");
}
printf("\n");
int min=result[0][0];
for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        result[i][j]=abs(number-arr[i][j]);
        if(result[i][j]<min){
        min=result[i][j];
        posi=i;
        posj=j;}}}
printf("Closest element to %d : %d \nPosition: %d.col %d.row ",number,arr[posi][posj],posi+1,posj+1);
    return 0;
}
