#include<stdio.h>
int main()
{
    int n,i,s=0,sq=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        sq=sq+(i*i);
    }
    int a=s*s;
    int b=a-sq;
    printf("%d",b);
}
