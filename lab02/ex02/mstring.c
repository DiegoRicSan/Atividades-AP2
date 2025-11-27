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

void mstrcpy(char b[], char a[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
}

void mstrcat(char b[], char a[])
{
    int i, count = 0;
    for (i = mstrlen(a); b[count] != '\0'; i++)
    {
        a[i] = b[count];
        count++;
    }
    a[i] = '\0';           
}

int mstrcmp(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
            return a[i] - b[i];
    }
}

void mstrupper(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <=90)
        {
            s[i] += 32;
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }
}