#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,flag=0,count=0,count2=0,sum=0,sum1=0;
    printf("Enter a number:");scanf("%d",&number);
    int temp=number;
    int *pos=(int *)malloc(100*sizeof(int));
    int *pos2=(int *)malloc(100*sizeof(int));
    int *pos3=(int *)malloc(100*sizeof(int));
    for(int i=2;i<number;i++){
        if(number%i==0){
            flag=1;
        break;}
    }
    if(flag==0){
        printf("%d is a prime number",number);
        }
    else{
        for(int i=2;number!=1;i++){
		  if(number%i==0){
			number/=i;
			pos[count++]=i;
			i--;
		}
	}
      printf("Prime factors of %d :\n",temp);
      for(int i=0;i<count;i++)
        printf("%d ",pos[i]);
      for(int i=0;i<count;i++){
        if(pos[i]<10)
            sum+=pos[i];
        else{
            while(pos[i]>0){
             pos2[count2++]=pos[i]%10;
             pos[i]/=10;
           }
            for(int i=0;i<count2;i++){
               sum+=pos2[i];
        }
      }
    }
 }

       printf("\nThe sum of prime factors' digits:%d\n",sum);
       int i=0;
       int temp2=temp;
       while(temp>0){
        pos3[i]=temp%10;
        temp/=10;
        sum1+=pos3[i];
      }
      printf("The sum of number' digits:%d\n",sum1);
      if(sum==sum1)
        printf("%d is a Smith number.",temp2);
      else
        printf("%d is not a Smith number.",temp2);
    return 0;
}
