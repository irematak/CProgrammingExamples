#include <stdio.h>
#include <stdlib.h>

int main()
{
   char letter;
   printf("Enter a lower-case letter:");scanf("%c",&letter);
   if(letter>='a'&&letter<='z')
   letter-=32;
   printf("Upper case letter is %c",letter);
   return 0;
}
