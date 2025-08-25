
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int i,j,len1,len2;

    gets(s1);
    gets(s2);
    len1=strlen(s1); //7
    len2=strlen(s2);//3
    int start;
    for(i = 0; i<len1; i++)
    {
        if(s1[i]==s2[0])
        {
            start= i;
            break;
        }
    }

    for(i = start + 1,j = 1; j<len2; i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            break;
        }
    }

    if(j == len2)
        printf("Found");
    else
    printf("Not Found");

    return 0;
}
