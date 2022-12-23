#include<stdio.h>
int main()
{
    long int a;
    int r,s=0;
    scanf("%ld",&a);
    while(a/10!=0)
    {
        s=0;
        while(a!=0)
        {
            r=a%10;
            s+=r;
            a=a/10;
        }
        a=s;
    }
    printf("%d",s);
}