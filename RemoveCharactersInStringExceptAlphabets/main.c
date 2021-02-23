#include <stdio.h>
#include <stdlib.h>
int main(){
char line[2000];
int count=0;
printf("Enter a string:");gets(line);
for(int i=0;i<strlen(line);i++){
    if((line[i]>=65&&line[i]<=90)||(line[i]>=97&&line[i]<=122)){
        line[count++]=line[i];
    }
}
printf("Output string:");
for(int i=0;i<count;i++)
    printf("%c",line[i]);
return 0;
}
