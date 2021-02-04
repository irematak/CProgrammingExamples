#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
char *codes=(char*)malloc(1000*sizeof(char));
char *codes2=(char*)malloc(1000*sizeof(char));
int sum=0;
printf("Enter the codes:");gets(codes);
for(int i=0,j=strlen(codes)-1;i<strlen(codes),j>=0;i++,j--){
    codes2[i]=codes[j];
}
printf("%d",codes2[0]);
 for(int i=0;i<strlen(codes)-1;i+=2){
    for(int j=i;j<i+1;j++){
    if(codes2[j+1]=='a'||codes2[j+1]=='b'||codes2[j+1]=='c'||codes2[j+1]=='d'||codes2[j+1]=='e'||codes2[j+1]=='f'){
      if(codes2[j]==52){
        if(codes2[j+1]=='a')
           sum=34+40;
        if(codes2[j+1]=='b')
           sum+=35+40;
        if(codes2[j+1]=='c')
           sum+=36+40;
        if(codes2[j+1]=='d')
           sum+=37+40;
        if(codes2[j+1]=='e')
           sum+=38+40;
        if(codes2[j+1]=='f')
           sum+=39+40;
        }
      if(codes2[j]==53){
        if(codes2[j+1]=='a')
           sum+=40+50;
        if(codes2[j+1]=='b')
           sum+=41+50;
        if(codes2[j+1]=='c')
           sum+=42+50;
        if(codes2[j+1]=='d')
           sum+=43+50;
        if(codes2[j+1]=='e')
           sum+=44+50;
        if(codes2[j+1]=='f')
           sum+=45+50;
      }
      if(codes2[j]==54){
        if(codes2[j+1]=='a')
           sum+=46+60;
        if(codes2[j+1]=='b')
           sum+=47+60;
        if(codes2[j+1]=='c')
           sum+=48+60;
        if(codes2[j+1]=='d')
           sum+=49+60;
        if(codes2[j+1]=='e')
           sum+=50+60;
        if(codes2[j+1]=='f')
           sum+=51+60;
      }
      if(codes2[j]==55){
        if(codes2[j+1]=='a')
           sum+=52+70;
      }
      printf("%c",sum);
      sum=0;
    }
    else if (codes2[j+1]==48&&codes2[j]==50)
        printf(" ");
    else{
      if(codes2[j]==52)//upper case
        sum=(codes2[j+1])+codes2[j]-36;
       else if(codes2[j]==53)//upper case
        sum=(codes2[j+1])+codes2[j]-21;
       else if(codes2[j]==54) //lower case
       sum=(codes2[j+1])+codes2[j]-6;
       else if(codes2[j]==55)
        sum=(codes2[j+1])+codes2[j]+9;//lower case
       printf("%c",sum);
       sum=0;
    }
    }}
return 0;
}
