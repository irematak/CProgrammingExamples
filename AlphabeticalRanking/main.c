#include <stdio.h>
#include <stdlib.h>
int mystrncpy(char *s1,char *s2,int n){
int i,sum1=0,sum2=0;
for(i=0;i<n;i++){
    if(s1[i]!=s2[i])
        break;
}
if(i==n)
    return 0;
else{
    for(int k=0;k<n;k++){
            sum1+=s1[k];
            sum2+=s2[k];}
        if(sum1<sum2)
            return 1;
        else
            return 2;
      }
}
int main()
{
int k;
char *str1=(char *)malloc(20*sizeof(char));
char *str2=(char *)malloc(20*sizeof(char));
printf("Text 1:");gets(str1);
printf("Text 2:");gets(str2);
printf("Untill where:");scanf("%d",&k);
if(mystrncpy(str1,str2,k)==0)
    printf("The first %d letters are the same",k);
else if(mystrncpy(str1,str2,k)==1)
   printf("%s's first %d letters alphabetically smaller.",str1,k);
else
 printf("%s's first %d letters alphabetically smaller.",str2,k);
    return 0;
}
