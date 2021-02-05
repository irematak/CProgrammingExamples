#include <stdio.h>
#include <stdlib.h>
void ones(int n){
    if(n>0&&n<7){
        for(int i=0;i<n;i++)
            printf("%c",'I');}
    if(n==7)
        printf("%s","IV");
    if(n==8)
       printf("%c",'V');
    if(n>8&&n<15){
        printf("%c",'V');
        for(int i=0;i<n-8;i++)
            printf("%c",'I');
    }
    if(n==15)
        printf("%s","IX");
}

void tens(int n2){
if((n2==1||n2==2||n2==3||n2==4||n2==5||n2==6)){
    for(int i=0;i<n2;i++)
        printf("%c",'X');
   }
   if((n2==7&&n2==0)||n2==7)
    printf("%s","XL");
   if((n2==8&&n2==0)||n2==8)
    printf("%c",'L');
   if((n2==9||n2==10||n2==11||n2==12||n2==13||n2==14)){
    printf("%c",'L');
    for(int i=0;i<n2-8;i++)
       printf("%c",'X');}
   if(n2==15)
    printf("%s","XC");

}

int main(){
int number,n1,n2,quotient,remainder;
printf("Enter the number:");scanf("%d",&number);
if(number<16){
    ones(number);
}
else if(number>15&&number<256){
   n1=number/16;
   n2=number%16;
   tens(n1);
   ones(n2);
}
else if(number>255&&number<4095){
 remainder=number%16;
 quotient=(number/16);
 n1=quotient%16;
 n2=quotient/16;
if(n2==1||n2==2||n2==3||n2==4||n2==5||n2==6){
    for(int i=0;i<n2;i++)
        printf("%c",'C');
}
if(n2==7)
    printf("%s","CD");
if(n2==8)
    printf("%c","D");
if(n2==9||n2==10||n2==11||n2==12||n2==13||n2==14){
    printf("%c",'D');
    for(int i=0;i<n2-8;i++){
        printf("%c",'C');
    }
}
if(n2==15)
    printf("%s","CM");
tens(n1);
ones(remainder);
}
return 0;
}
