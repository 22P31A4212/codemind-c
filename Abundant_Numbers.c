#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    int s=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            s=s+i;
        }
    }
    if(s>x)
    printf("True");
    else
    printf("False");
}