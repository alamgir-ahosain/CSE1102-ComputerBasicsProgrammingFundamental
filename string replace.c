
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],r[100];
    int i,j,len1,len2,len3;

    gets(s1);
    gets(s2);
    gets(r);
    len1=strlen(s1);
    len2=strlen(s2);
    len3=strlen(r);

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
        {
           for(int k =start,l = 0;l<len3;
           k++,l++)
           {

           }
        }


    return 0;
}
