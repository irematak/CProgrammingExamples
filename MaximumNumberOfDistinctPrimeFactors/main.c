#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c=0,e=0,count=0,d=0,pos;
int *arr=(int)malloc(1000*sizeof(int));
int *arr2=(int)malloc(1000*sizeof(int));
int *arr3=(int)malloc(1000*sizeof(int));
printf("Enter the range (a,b) :");scanf("%d %d",&a,&b);
for(int i=a;i<=b;i++){
    arr3[d++]=i;
}
for(int i=a;i<=b;i++){
   int temp=i;
    for(int j=2;temp!=1;j++){
		if(temp%j==0){
			temp/=j;
			arr[c++]=j;
			j--;
		}
}
 for(int i=0;i<c;i++){
    if(c==1)
        count=1;
       else{
          if(arr[i]!=arr[i+1])
             count++;
        }
 }
 c=0;
 arr2[e++]=count;
 count=0;
}
 for(int i=0;i<e;i++)
    printf("Number of distinct Prime Factors of %d is %d.\n",arr3[i],arr2[i]);
int max=arr2[0];
    for(int i=1;i<e;i++){
        if(max<arr2[i])
            max=arr2[i];
        else
            continue;
    }
    for(int i=0;i<e;i++){
        if(arr2[i]==max){
            pos=i;
            break;
        }
    }
printf("The number %d has the maximum number of distinct prime factors.",arr3[pos]);
return 0;}
