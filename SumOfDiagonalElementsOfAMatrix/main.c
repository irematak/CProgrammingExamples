#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3],sum=0;
    printf("Enter elements in array : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        } printf("\n");
    }
    for(int i=0;i<3;i++){
        sum+=arr[i][i];
    }
   printf("Sum of diagonal elements:%d",sum);
    return 0;
}
