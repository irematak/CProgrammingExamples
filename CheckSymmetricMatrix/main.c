#include <stdio.h>
#include <stdlib.h>
int main()
{ int n,count;
    printf("Enter size of square matrix:");
    scanf("%d",&n);
    int **arr=(int **)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        arr[i]=malloc(n*sizeof(int));
    }
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            break;
            else if(arr[i][j]==arr[j][i])
            count++;
        }
   }
        if(count==n)
            printf("The matrix is symmetric.");
        else
            printf("The matrix is not symmetric.");
    return 0;
}
