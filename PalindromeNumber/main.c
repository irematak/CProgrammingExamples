#include <stdio.h>
#include <stdlib.h>
int main(){
int num,count=0,a,count2=0;
int *arr=(int)malloc(10*sizeof(int));
int *arr2=(int)malloc(10*sizeof(int));
printf("Enter a number:");scanf("%d",&num);
int temp=num;
while(num>0){
a=num%10;
num/=10;
arr[count++]=a;
}
for(int i=0,j=count-1;i<count,j>=0;i++,j--){
    arr2[i]=arr[j];
}
for(int i=0;i<count;i++){
    if(arr[i]==arr2[i])
        count2++;
}
if(count2==count)
    printf("%d is a palindrome",temp);
else
    printf("%d is not a palindrome",temp);
return 0;
}
