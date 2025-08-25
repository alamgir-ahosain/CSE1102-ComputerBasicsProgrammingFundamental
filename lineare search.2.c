#include<stdio.h>
int main ()
{
    int n;
    printf("Enter Element:");
    scanf("%d",&n);
    int a[n];
        for(int j=0;j<n;j++)
        {
             scanf("%d",&a[j]);

        }
        for(int i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }






    return 0;
}
