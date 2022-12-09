#include<stdio.h>
int main()
{
    int a,h,m;
    scanf("%d",&a);
    {
        m=a%60;
        h=a/60;
    }
    printf("%d Hour(s) %d Minute(s)",h,m);
}