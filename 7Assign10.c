#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,x,s,d;
    for(i=1;i<=1000;i++)
    {
        x=i;
        s=0;
        for(;x;)
        {
            d=x%10;
            s+=d*d*d;
            x/=10;
        }
        if(s==i)
            printf("%d ",s);
    }
    getch();
    return 0;
}