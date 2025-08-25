
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter element:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Main array:");
    for(int j=0; j<n; j++)
    {
        printf("%d  ",a[j]);
    }
    printf("Reverse array :");
    for(int k=n-1; k>=0; k--)

    {
        printf("%d ",a[k]);
    }


return 0;
}
