#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char line[1000];
int count1=0,count2=0,count3=0;
printf("Enter a string:");gets(line);
for(int i=0;i<strlen(line);i++){
  if((line[i]>=65&&line[i]<=90)||(line[i]>=97&&line[i]<=122))
     count1++;
  else if(line[i]>=48&&line[i]<=57)
    count2++;
  else
    count3++;
}
printf("Number of Alphabets in the string is :%d\n",count1);
printf("Number of Digits in the string is :%d\n",count2);
printf("Number of Special characters in the string is :%d\n",count3);
return 0;
}
