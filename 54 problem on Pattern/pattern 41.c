#include<stdio.h>
int main ()
{
    int i,j,k,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j>=1; j--)
        {

            printf("%c",j+64);
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }


}
