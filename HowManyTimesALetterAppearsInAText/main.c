#include <stdio.h>
#include <stdlib.h>
int main(){
char letter;
char *ch_arr=(char *)malloc(100*sizeof(char));
int i,c,count=0;
int *arr=(int *)malloc(99*sizeof(int));
printf("Enter a text:");gets(ch_arr);
printf("Enter a letter:");scanf("%c",&letter);
for(i=0;i<strlen(ch_arr);i++){
    if(letter==ch_arr[i])
    arr[count++]=i;
}
printf("The number of times %c appears is %d.\n",letter,count);
for(c=0;c<count;c++)
printf("%d. index of '%c'character : %d\n",c+1,letter,arr[c]);
return 0;
}
