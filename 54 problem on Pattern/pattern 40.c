
#include<stdio.h>
int main ()
{
    int i,j,k,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
        {
        for(j=n-i;j>=1;j--)
            {
                printf(" ");
            }
            for(k=1;k<=i;k++)
            {
                printf("%c",k+64);
            }
            printf("\n");
        }
}
