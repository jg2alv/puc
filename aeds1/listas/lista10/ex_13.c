#include <stdio.h>
#include <string.h>

void counter(char *str, int *vowels, int *consonants)
{
    int sz = strlen(str);
    char *vowelsarr = "aeiouAEIOU";
    char *consonantsarr = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    for (int i = 0; i < sz; i++)
    {
        if (strchr(vowelsarr, str[i]) != NULL)
            (*vowels)++;
        else if (strchr(consonantsarr, str[i]) != NULL)
            (*consonants)++;
    }
}

int main()
{
    char str[] = "hello, world!!";
    int vowels = 0, consonants = 0;

    counter(str, &vowels, &consonants);
    printf("%d %d\n", vowels, consonants);
}