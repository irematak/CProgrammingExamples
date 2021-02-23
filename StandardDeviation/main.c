#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int num,sum=0;
float difference=0;
printf("Enter the number of values:");
scanf("%d",&num);
int *arr=(int*)malloc(num*sizeof(int));
printf("Enter the values:");
for(int i=0;i<num;i++)
    scanf("%d",&arr[i]);
for(int i=0;i<num;i++)
    sum+=arr[i];
float mean=(float)sum/num;
printf("Mean:%.2f\n",mean);
for(int i=0;i<num;i++)
    difference+=pow((arr[i]-mean),2);
float variance=difference/num;
printf("Variance:%.2f\n",variance);
float standart_deviation=sqrt(variance);
printf("Strandart deviation:%.2f\n",standart_deviation);
return 0;
}
