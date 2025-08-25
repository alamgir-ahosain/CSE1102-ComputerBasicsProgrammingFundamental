#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is greater value %d ",a,a);
   else if(b>a&& b>c)
        printf("%d is greater value %d",b,b);

    else
        printf("%d is greater value %d",c,c);



    return 0;
}
