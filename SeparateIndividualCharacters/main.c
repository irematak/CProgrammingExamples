#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char line[1000],line2[1000];
int n;
printf("Enter a string:");gets(line);
for(int i=0,j=0;j<strlen(line);i+=2,j++){
    line2[i]=line[j];
    line2[i+1]=' ';
    n=i+2;
}
for(int i=0;i<n;i++)
    printf("%c",line2[i]);
return 0;
}
