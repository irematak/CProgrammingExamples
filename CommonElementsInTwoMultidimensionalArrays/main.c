#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void isCommon(int *s1[][2][3],int *s2[][3][3]){
srand(time(0));
for(int i=0;i<1;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<3;k++)
            *(*(*(s1+i)+j)+k)=rand()%50;//s1[i][j][k]
    }
}
printf("Elements of the first array:\n");
for(int i=0;i<1;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
            printf("%d ",*(*(*(s1+i)+j)+k));
           }
               printf("\n");}
                    printf("\n");}
 printf("\n");
 for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
        *(*(*(s2+i)+j)+k)=rand()%50;
     }
  }
}
printf("Elements of the second array:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
       printf("%d ",*(*(*(s2+i)+j)+k));}
      printf("\n");}
     printf("\n");}
      PrintCommon(s1,s2);
}


void PrintCommon(int *n1[][2][3],int *n2[][3][3]){
int a1[7],count1=0,a2[19],count2=0,common[7],e=0,common2[7],d=0,flag=0;
for(int i=0;i<1;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
        a1[count1++]=*(*(*(n1+i)+j)+k);
      }
   }
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
        a2[count2++]=*(*(*(n2+i)+j)+k);
    }
  }
}

for(int i=0;i<count2;i++){
    for(int j=0;j<count1;j++){
        if(a1[j]==a2[i])
            common[e++]=a2[i];
        else
            continue;
    }
}
for(int j=0;j<e;j++){
    flag=0;
for(int i=0;i<j;i++){
    if(common[i]==common[j])
    flag=1;
  }
  if(flag==0){
   common2[d++]=common[j];
    }
}
if(d==0)
    printf("There are no common elements in the two arrays.");
if(d>0){
printf("The common elements in the two arrays are:\n");
for(int i=0;i<d;i++)
    printf("%d ",common2[i]);
    }
}

int main()
{
int *arr1[1][2][3];
int *arr2[2][3][3];
isCommon(arr1,arr2);
return 0;}
