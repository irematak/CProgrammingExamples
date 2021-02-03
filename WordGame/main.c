#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Control( ){
char word[100][50];
int n,flag=0;
printf("How many words:");scanf("%d",&n);
printf("Enter the words:");
for(int i=0;i<n;i++)
    scanf("%s",&word[i]);
for(int i=n-1;i>0;i--){
    int b=strlen(word[i-1])-1;
    if((word[i-1][b]!= word[i][0])||(word[i-1][b-1]!=word[i][1])){
        flag=1;
        break;
    }
}
if(flag==0)
    printf("True");
else
    printf("False");
}

int main(){
Control();
 return 0;
}
