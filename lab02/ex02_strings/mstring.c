#include "mstring.h"

int mstrlen(char s[])
{
    int i;
    for (i = 0;; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
    }   
    return i - 1;
}

void mstrcpy(char dest[], char orig[])
{
    int i;
    for (i = 0; orig[i] != '\0'; i++)
    {
        dest[i] = orig[i];
    }
    dest[i] = '\0';
}

void mstrcat(char dest[], char orig[])
{
    int i, count = 0;
    for (i = mstrlen(dest); orig[count] != '\0'; i++)
    {
        dest[i] = orig[count];
        count++;
    }
    dest[i] = '\0';           
}

int mstrcmp(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
            return a[i] - b[i];
    }
    return a[i] - b[i];
}

void mstrupper(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }
}

void mstrlower(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <=90)
        {
            s[i] += 32;
        }
    }
}

int mcount_vogais(char s[])
{
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int meh_palindromo(char s[])
{
    int i, j = mstrlen(s) - 1;
    for (i = 0; i <= j; i++)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        j--;
    }
    return 1;   
}

void mremove_espacos(char s[])
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}