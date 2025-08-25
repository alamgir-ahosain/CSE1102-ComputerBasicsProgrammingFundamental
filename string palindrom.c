#include<stdio.h>
int main()
{
    int i,j,n,len;
    char str[100];
    printf("Enter a string:");
    gets(str);
    len=strlen(str);
    len=len-1;
    int k=0;
    while(len>k)
    {
        if(str[len]!=str[k])
        {
            printf("%s not palindrom\n",str);
            return 0;
        }
        len--;
        k++;

    }
    printf("%s is palindrom",str);

    getch();
}
