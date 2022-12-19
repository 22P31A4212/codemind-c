#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b+(2*c))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}