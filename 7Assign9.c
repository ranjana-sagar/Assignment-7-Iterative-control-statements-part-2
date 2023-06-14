#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,d,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;
    for(;x;)
    {
        d=x%10;
        s+=d*d*d;
        x/=10;
    }
    s==n?printf("%d is an armstrong number",n):printf("%d is an not armstrong number",n);
    getch();
    return 0;
}