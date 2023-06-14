#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,h;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0&&b%h==0)
        {
            printf("HCF is %d",h);
            break;
        }
    getch();
    return 0;        
}