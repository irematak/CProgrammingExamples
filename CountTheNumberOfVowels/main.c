#include <stdio.h>
#include <stdlib.h>
int main()
{   int count=0;
    char *string=(char *)malloc(100*sizeof(char));
    printf("Enter a string:");gets(string);
    for(int i=0;i<strlen(string);i++){
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u' || string[i] == 'A' ||
            string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||
            string[i] == 'U')
            count++;
    }
    printf("Number of vowels::%d",count);
    return 0;
}
