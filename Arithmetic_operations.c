#include <stdio.h>
int main()
{
    int a,b,s,d,p,q,r;
    scanf("%d%d",&a,&b);
    s = a+b;
    printf("Sum:%d
",s);
    d = a-b;
    printf("Difference:%d
",d);
    p = a*b;
    printf("Product:%d
",p);
    q = a/b;
    printf("Quotient:%d
",q);
    r = a%b;
    printf("Remainder:%d
",r);
}