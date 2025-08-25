
#include<stdio.h>
int main ()
{
    int n,value,j,d=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&value);
    for(j=0; j<n; j++)
    {
        scanf("%d",&a[j]);

    }


    int left,right,mid;
    left=0;
    right=n-1;


    while(left<=right)
    {
        mid=(left+right)/2;

        if(a[mid]==value)
        {
        d=1;
        break;
        }
        else if(a[mid]<value)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }

    if(d==1) printf("true");
    else printf("false");

    return 0;
}


