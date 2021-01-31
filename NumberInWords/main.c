#include <stdio.h>
#include <stdlib.h>
void Once(int n){
    if(n==1)
        printf("one");
    if(n==2)
        printf("two");
    if(n==3)
        printf("three");
    if(n==4)
        printf("four");
    if(n==5)
        printf("five");
    if(n==6)
        printf("six");
    if(n==7)
        printf("seven");
    if(n==8)
        printf("eight");
    if(n==9)
        printf("nine");
}
void Tence(int n){
   if(n==1)
        printf("ten");
    if(n==2)
        printf("twenty");
    if(n==3)
        printf("thirty");
    if(n==4)
        printf("forty");
    if(n==5)
        printf("fifty");
    if(n==6)
        printf("sixty");
    if(n==7)
        printf("seventy");
    if(n==8)
        printf("eighty");
    if(n==9)
        printf("ninety");
}
int main()
{
int number;
printf("Enter a number:");scanf("%d",&number);
if(number>0&&number<10){
Once(number);
}
else if(number>=10&&number<20){
     if(number==11)
       printf("eleven");
     if(number==12)
       printf("twelve");
    if(number==13)
       printf("thirteen");
    if(number==14)
       printf("fourteen");
    if(number==15)
       printf("fifteen");
    if(number==16)
       printf("sixteen");
    if(number==17)
       printf("seventeen");
    if(number==18)
       printf("eighteen");
    if(number==19)
      printf("nineteen");
}
else if(number>=20&&number<100){
int once=number%10;
int tence=number/10;
Tence(tence);
printf("-");
Once(once);
}
else if(number>=100&&number<1000){
int a=number%10;
int b=((number-a)/10)%10;
int c=number/100;
if(c>1){
Once(c);
printf(" ");
}
printf("hundred ");
Tence(b);
printf("-");
Once(a);
}
else if(number>=1000&&number<10000){
int d=number%10;//birler
int g=number/1000;//binler
int f=(number-(g*1000))/100;
int e=((number-d)/10)%10;
if(g>1){
    Once(g);
    printf(" ");
}
printf("thousand ");
if(f>1){
    Once(f);
    printf(" ");
}
if(f>0)
printf("hundred ");
Tence(e);
printf("-");
Once(d);
}
return 0;}
