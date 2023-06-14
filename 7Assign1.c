#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=-1,b=1,c;
    printf("Enter the term:");
    scanf("%d",&n);
    for(;n;n--)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth term of fibonacci series is %d",n,c);
    getch();
    return 0;
}