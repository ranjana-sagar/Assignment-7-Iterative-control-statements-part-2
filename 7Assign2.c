#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=-1,b=1,c;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n;n--)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
    return 0;
}