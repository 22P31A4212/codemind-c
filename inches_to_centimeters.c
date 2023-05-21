#include<stdio.h>
void cm(int h)
{
    float a;
    a=2.54*h;
    printf("%0.2f",a);
}
int main()
{
    int h;
    scanf("%d",&h);
    cm(h);
}