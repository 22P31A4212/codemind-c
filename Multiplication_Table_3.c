#include<stdio.h>
int main()
{
    int n,r,q,i,p;
    scanf("%d%d%d",&n,&r,&q);
    for(i=r;i<=q;i++)
    {
        p=n*i;
        {
        printf("%d x %d = %d
",n,i,p);
        }
    }
}
