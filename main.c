#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[100];
    word[99]=0;

    while(scanf("%99s",word)==1)
    {
        if (word[0]==word[strlen(word)-1])
        {
            printf("%s\n",&word[0]);
        }
    }

    return 0;
}

