#include<stdio.h>
int main()
{
    int n,i,j,f=0,min=999;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i!=0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d",i);
            break;
        }
    }
}