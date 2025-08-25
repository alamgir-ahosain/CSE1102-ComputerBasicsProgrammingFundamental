#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Element: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
    {
         printf("%d ",a[i]);
         }

         int value;
         printf("Enter value for search: ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
    if(value==a[i])

    {

        printf("%d is found in position %d",value,i+1);
        return 0;
    }
    }
     printf("not found");
    return 0;
    }

