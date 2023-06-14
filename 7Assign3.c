#include<stdio.h>
#include<conio.h>
int main()
{
    int a=-1,b=1,c,n;
    printf("Enter a  number:");
    scanf("%d",&n);
    for(;;)
    {
        c=a+b;
        if(c==n)
            break;
        else
            if(c>n)
               break;
        a=b;
        b=c;           
    }
    printf(c==n?"fibonacci number":"this is not fibonacci number");
    getch();
    return 0;
}