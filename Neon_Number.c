#include<stdio.h>
int main()
{
    int a,r,s=0;
    scanf("%d",&a);
    int sq=a*a;
    while(sq!=0)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}