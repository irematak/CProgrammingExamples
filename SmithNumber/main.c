#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,flag=0,count=0,flag2=0,count2=0,sum=0,sum1=0,multiply=1;
    printf("Enter a number:");scanf("%d",&number);
    int temp=number;
    int *pos=(int *)malloc(100*sizeof(int));
    int *pos2=(int *)malloc(100*sizeof(int));
    int *pos3=(int *)malloc(100*sizeof(int));
    int *pos4=(int *)malloc(100*sizeof(int));
    for(int i=2;i<number;i++){
        if(number%i==0){
            flag=1;
        break;}
    }
    if(flag==0){
        printf("%d is a prime number",number);
        }
    else{
        for(int i=2;i<number;i++){
            if(number%i==0){
                pos[count++]=i;
                multiply*=i;}
            }

       for(int i=0;i<count;i++){
        for(int j=2;j<pos[i];j++){
                if(pos[i]%j==0)
                flag2=1;
                break;
       }
       if(flag2==0)
            pos2[count2++]=pos[i];

      }
      printf("Prime factors of %d :\n",number);
      for(int i=0;i<count2;i++){
        printf("%d ",pos2[i]);
        while(pos2[i]>0){
         pos3[i]=pos2[i]%10;
         pos2[i]=pos2[i]/10;
         sum+=pos3[i];
        }
       }
       printf("\nThe sum of prime factors' digits:%d\n",sum);
       int i=0;
       while(number>0){
        pos4[i]=number%10;
        number/=10;
        sum1+=pos4[i];
      }
      printf("The sum of number' digits:%d\n",sum1);
      if(sum==sum1)
        printf("%d is a Smith number.",temp);
      else
        printf("%d is not a Smith number.",temp);
    }
    return 0;
}
