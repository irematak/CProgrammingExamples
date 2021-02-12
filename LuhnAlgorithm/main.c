#include <stdio.h>
#include <stdlib.h>
int main(){
int cardNum[16],sum=0,a;
for(int i=0;i<16;i++){
    printf("Enter the %d. digit of the card number:",i+1);
    scanf("%d",&cardNum[i]);
}
for(int i=1;i<16;i+=2){
    sum+=cardNum[i];
}
for(int i=0;i<17;i+=2){
 cardNum[i]*=2;
}
for(int i=0;i<16;i+=2){
    if(cardNum[i]>=10){
        printf("card number:%d\n",cardNum[i]);
        while(cardNum[i]>0){
            a=cardNum[i]%10;
            cardNum[i]/=10;
            sum+=a;
        }
    }
    else
        sum+=cardNum[i];
}
if(sum%10==0)
    printf("The card number is correct");
else 
    printf("The card number is incorrect");
return 0;
}
