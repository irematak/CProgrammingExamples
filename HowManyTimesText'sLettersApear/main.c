#include <stdio.h>
#include <stdlib.h>
int main()
{int a=0,i,flag,k,count=0;
char *ch_arr=(char *)malloc(100*sizeof(char));
char *character=(char *)malloc(100*sizeof(char));
int *arr=(int *)malloc(100*sizeof(int));
printf("Text:");gets(ch_arr);
for(i=0;i<strlen(ch_arr);i++){
        flag=0;
    for(int j=0;j<i;j++){
        if(ch_arr[i]==32)
        flag=2;
        if(ch_arr[i]==ch_arr[j]) 
            flag=1;
    }
    if(flag==0){
      character[a]=ch_arr[i];
      a++;
    }
}
for( k=0;k<a;k++){
for(int y=0;y<strlen(ch_arr);y++){
    if (character[k]==ch_arr[y])
        count++;
    else
        continue;
    }
     arr[k]=count;
    count=0;
}
for(int i=0;i<a;i++)
    printf("There are %d --> %c times \n",arr[i],character[i]);
    return 0;
}
