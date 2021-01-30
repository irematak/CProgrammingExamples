#include <stdio.h>
#include <stdlib.h>
int nprime(int n){
int flag,a=1;
int *arr=(int *)malloc(10000*sizeof(int));
arr[0]=2;
for(int i=3;i<10000;i++){
        flag=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            flag=1;
            break;
        }
    }
   if(flag==0){
    arr[a]=i;
   a++;}
}
return arr[n-1];
}
int main()
{ int number;
    printf("Which prime number:");scanf("%d",&number);
    printf("%d. prime number is %d",number,nprime(number));
    return 0;
}