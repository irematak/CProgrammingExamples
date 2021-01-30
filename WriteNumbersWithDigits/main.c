#include <stdio.h>
#include <stdlib.h>
int is_possible(int n1,int n2){
int count1=0,count2=0,k=0;
int *arr1=(int *)malloc(100*sizeof(int));
int *arr2=(int *)malloc(100*sizeof(int));
while(n1>0){
    arr1[count1++]=n1%10;
    n1/=10;
}
while(n2>0){
    arr2[count2++]=n2%10;
    n2/=10;
}
for(int i=0;i<count1;i++){
    for(int j=0;j<count2;j++){
        if(arr1[i]==arr2[j])
            k++;
    }
}
if(k==count2)
    return 1;
return 0;
}

int main()
{ int num1,num2;
printf("Enter first number:");scanf("%d",&num1);
printf("Enter second number :");scanf("%d",&num2);
if(is_possible(num1,num2)==1)
    printf("You can write %d with %d's digits",num2,num1);
else
   printf("You can not write %d with %d's digits",num2,num1);
    return 0;
}
