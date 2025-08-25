#include<stdio.h>
int main ()
{
    int i,j,k,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d",j);

        }
        for(k=2; k<=i; k++)
        {
            printf("%d",k);
        }

        printf("\n");
     }
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=n-i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(int h=2;h<=n-i;h++)
        {
            printf("%d",h);
        }

        printf("\n");
    }



}

