#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char word[10*10*10];
    char *res = gets(word);

    res[0] = toupper(res[0]);

    printf("%s\n", res);
}