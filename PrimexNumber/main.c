#include <stdio.h>
#include <stdlib.h>
int isprimex(int num2){
int flag1,flag2,flag3,sum=0,count=0;
int *pos=(int*)malloc(100*sizeof(int));
if(num2/10<1){
    for(int i=2;i<num2;i++){
            flag1=0;
        if(num2%i==0){
            flag1=1;
            break;
        }
    }
    if(num2==1)
    return 0;
    if(flag1==0)
    return 1;
    else
    return 0;
}
else{
    for(int i=2;i<num2;i++){
            flag2=0;
        if(num2%i==0){
            flag2=1;
            break;
        }
    }
    if(flag2==1)
        return 0;
    else{
        while(num2>0){
            pos[count++]=num2%10;
            num2/=10;
        }
        for(int i=0;i<count;i++)
            sum+=pos[i];
        num2=sum;
        for(int i=2;i<num2;i++){
            flag3=0;
        if(num2%i==0){
            flag3=1;
            break;
        }
    }
    if(flag3==1)
        return 0;

    if (num2/10<1)
        return 1;

    else if(num2/10>=1)
      return isprimex(num2);
    }
}
}

int main()
{ int num;
printf("Enter a number:");scanf("%d",&num);
if(isprimex(num)==1)
    printf("%d is primex number",num);
else
    printf("%d is not a primex number",num);
    return 0;
}
