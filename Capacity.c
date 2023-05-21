#include<stdio.h>
int main()
{
    int cap,s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    cap=s*t*b;
    printf("%d KB",cap);
}