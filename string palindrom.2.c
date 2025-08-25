#include<stdio.h>
int main()
{
    int i,j,n,len,length;
    char str[100];
    printf("Enter a string:");
    gets(str);
    len=strlen(str);
    length=len-1; //length=higher index
    for(i=0,j=length;i<=j;i++,j--)
        if(str[i]!=str[j])
    {
        printf("%s is not palindrom \n",str);
        return 0;
    }
    printf("%s is palindrom",str);
    getch();
}

