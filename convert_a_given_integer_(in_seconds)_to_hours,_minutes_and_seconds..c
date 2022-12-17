#include<stdio.h>
int main()
{
    int t,h,m,s;
    scanf("%d",&t);
    h=t/3600;
    m=(t-(h*3600))/60;
    s=(t-(h*3600)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s);
}