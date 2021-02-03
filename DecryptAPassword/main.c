#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void Password(char *n,int*key,int k){
for(int i=0;i<k;i++){
    if(key[i]<0){
        if(key[i]<-26){
          key[i]=key[i]%26;
        }
        else
        key[i]=key[i]+26;
    }
    if(key[i]>26){
        key[i]=key[i]%26;
    }
}
for(int i=0;i<k;i++){
    if(n[i]==32){
      continue;
    }
    else
    n[i]+=key[i];
}
for(int i=0;i<k;i++){
    if(n[i]>90){
        n[i]=n[i]-90+64;
    }
}
printf("Decrypted password:");
for(int i=0;i<k;i++){
    printf("%c",n[i]);
}
}

int main(){
 int *key=(int*)malloc(100*sizeof(int));
 char *password=(char*)malloc(100*sizeof(char));
 printf("Enter the encrypted password:");gets(password);
 printf("Enter the key numbers:");
for(int i=0;i<strlen(password);i++)
    scanf("%d",&key[i]);
int n=strlen(password);
Password(password,key,n);
 return 0;
}
