#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}