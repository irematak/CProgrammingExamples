#include <stdio.h>
#include <stdlib.h>
void display_duration(int sec){
int minute,hour,second;
if(sec>=3600){
    hour=sec/3600;
    sec-=3600*hour;
    if(sec>=60){
    minute=sec/60;
    sec-=60*minute;
    second=sec;
    }}
else if(sec<3600&&sec>=60){
    minute=sec/60;
    sec-=60*minute;
    second=sec;
    hour=0;
}
else{
 second=sec;
 hour=0;
 minute=0;
}
printf("H:M:S - %d:%d:%d",hour,minute,second);
}
int main()
{ int second ;
printf("Enter seconds:");scanf("%d",&second);
display_duration(second);
    return 0;
}
