#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    if(a<=199)
    {
        b=1.20;
        c=a*b;
        d=c+100;
        printf("%.2f",d);
    }
    else if(a>=200 && a<400)
    {
        b=1.50;
        c=a*b;
        d=c+100;
        printf("%.2f",d);
    }
    else if(a>=400 && a<600)
    {
        b=1.80;
        c=(a*b);
        d=c+(c*0.15);
        printf("%.2f",d);
    }
    else if(a>=600)
    {
        b=2.00;
        c=(a*b);
        d=c+(c*0.15);
        printf("%.2f",d);
    }
}