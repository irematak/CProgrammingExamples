#include <stdio.h>
#include <stdlib.h>
int main(){
char *ch_arr=(char*)malloc(10000*sizeof(char));
char *ch_arr2=(char*)malloc(10000*sizeof(char));
int count=0,counter=0;
printf("Enter the string:");gets(ch_arr);
for(int i=0;ch_arr[i]!='\0';i++)
    counter++;
for(int i=0,j=counter-1;i<counter;i++,j--){
    ch_arr2[j]=ch_arr[i];
}
for(int i=0;i<counter;i++){
   if(ch_arr[i]==ch_arr2[i])
        count++;
}
if(count==counter)
    printf("String is  palindrome.");
else
    printf("String is not palindrome.");
return 0;
}

