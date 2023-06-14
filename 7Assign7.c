#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i=2;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    a+=1;
    for(a;a<b;a++)
    {
         for(i=2;i<a;i++)
            if(a%i==0)
               break;
        if(i==a)
           printf("%d ",a);       
    }
    getch();
    return 0;
}