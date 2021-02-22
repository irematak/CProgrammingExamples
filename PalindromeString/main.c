#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char *ch_arr=(char)malloc(10000*sizeof(char));
char *ch_arr2=(char)malloc(10000*sizeof(char));
int count=0;
printf("Enter the string:");gets(ch_arr);
for(int i=0,j=strlen(ch_arr)-1;i<strlen(ch_arr);i++,j--){
    ch_arr2[j]=ch_arr[i];
}
for(int i=0;i<strlen(ch_arr);i++){
   if(ch_arr[i]==ch_arr2[i])
        count++;
}
if(count==strlen(ch_arr))
    printf("String is  palindrome.");
else
    printf("String is not palindrome.");
return 0;
}
