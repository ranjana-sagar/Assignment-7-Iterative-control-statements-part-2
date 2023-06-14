#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,x;
    for(x=2;x<100;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d ",x);       
    }
    getch();
    return 0;
}