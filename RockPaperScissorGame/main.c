#include <stdio.h>
#include <stdlib.h>
int main(){
int n,m,count=0,count2=0;
srand(time(0));
printf("--------------------------------------------\n");
printf("Welcome To The Rock Paper Scissors Game\n\n");
printf("1-Rock\n2-Paper\n3-Scissors\n");
printf("\nPress 1 to 3\n");
printf("--------------------------------------------");
for(int i=0;i<3;i++){
printf("\nRound %d\n\n",i+1);
printf("Player's turn:");scanf("%d",&n);
printf("|You choose:%d|\n\n",n);
m=(rand()%3)+1;
printf("Computer's turn\n");
printf("|Computer choose:%d|\n\n",m);
if(n==m){
    printf("It's a draw.Both got 1 point\n");
    count++;
    count2++;
}
else if(n>m){
    if(n==3&&m==1){
        printf("Computer Got It!\n");
        count2++;
    }
    else{
       printf("You Got It!\n");
       count++;
    }

}
else if(m>n){
    if(m==3&&n==1){
        printf("You Got It!\n");
        count++;
    }
    else{
       printf("Computer Got It!\n");
       count2++;
    }
}
}
printf("--------------------\n");
printf("\nYOU:%d | COMPUTER:%d\n\n",count,count2);
printf("--------------------\n");
if(count==count2)
    printf("No winner it is a draw!");
else if(count>count2)
    printf("You win the game!");
else
    printf("Computer win the game");
printf("\n--------------------\n");
return 0;
}
