#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }

}
