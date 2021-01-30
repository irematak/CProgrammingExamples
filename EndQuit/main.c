#include <stdio.h>
#include <stdlib.h>
int main()
{
char entry;
char *arr=(char*)malloc(1000*sizeof(char));
int k=0;
while(1){
entry=getch();
k++;
arr[k]=entry;
if(arr[k-2]=='e'&&arr[k-1]=='n'&&arr[k]=='d'){
        printf("%c",'d');
        break;
    }
else
    putch(entry);

}
    return 0;
}
