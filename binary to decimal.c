
#include<stdio.h>
int main()
{
    int i,n,j,d=0,rem,base=1;
    printf("Enter binary number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        d=d+rem*base;
        n=n/10;
        base=base*2;
    }

    printf("decimal number:%d",d);

    getch();
    return 0;

}
