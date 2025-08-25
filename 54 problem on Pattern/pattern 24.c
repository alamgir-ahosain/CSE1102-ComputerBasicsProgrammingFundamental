
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
    for(j=1; j<=n-i; j++)
        {

            printf(" ");

        }
        for( int k=1;k<=i;k++)
            {
            printf("%c",k+64);
            }


        printf("\n");
    }
    return 0;
}

