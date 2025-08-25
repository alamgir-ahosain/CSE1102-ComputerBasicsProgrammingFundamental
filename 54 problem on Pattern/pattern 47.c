#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",j+64);
        }
        for(k=i; k>=1; k--)
        {
            printf("%c",k+64);
        }
        printf("\n");

    }
}
