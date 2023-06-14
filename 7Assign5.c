#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i=2;
    printf("Enter anumber:");
    scanf("%d%d",&a,&b);
    for(i=2;i<=(a<b?a:b);i++)
        if(a%i==0&&b%i==0)
            break;
    i>(a<b?a:b)?printf("%d,%d are co-prime numbers",a,b):printf("%d,%d are not co-prime numbers",a,b);
    getch();
    return 0;                
}