#include<stdio.h>
#include<conio.h> 
int main()
{
    int a,i=2;
    printf("Enter a number:");
    scanf("%d",&a);
    a+=1;
    for(;a;a++)
    {
        for(i=2;i<a;i++)
            if(a%i==0)
               break;
        if(i==a)
        {
           printf("%d is next prime number",a);
           break; 
        }        
    }
    getch();
    return 0;
}