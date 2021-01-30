#include <stdio.h>
#include <stdlib.h>
void print_random_date(){
srand(time(0));
int day,month,year;
month=(1+rand()%12);
year=(1900+rand()%101);
if(month==2){
if((year%400==0)||((year%4==0)&&(year%100!=0)))//leap year
   day=(1+rand()%29);
   else
    day=(1+rand()%28);
   }
else if(month==4||month==6||month==9||month==11)
    day=(1+rand()%30);
else
    day=(1+rand()%31);
printf("%02d.%02d.%d",day,month,year); 
}

int main(){
print_random_date();
return 0;}