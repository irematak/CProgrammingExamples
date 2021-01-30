#include <stdio.h>
#include <stdlib.h>

int main()
{
   char letter;
   printf("Enter a little letter:");scanf("%c",&letter);
   if(letter>='a'&&letter<='z')
   letter-=32;
   printf("Capital letter:%c",letter);
   return 0;
}
