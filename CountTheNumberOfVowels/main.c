#include <stdio.h>
#include <stdlib.h>
int main()
{   int count=0;
    char *word=(char *)malloc(20*sizeof(char));
    printf("Enter a word:");gets(word);
    for(int i=0;i<strlen(word);i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U')
            count++;
    }
    printf("Vowels:%d",count);
    return 0;
}
