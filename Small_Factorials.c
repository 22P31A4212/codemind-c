#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,f=1;
        scanf("%d",&b);
        for(int j=1;j<=b;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}