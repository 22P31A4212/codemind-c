#include <stdio.h>
int main()
{	
    int tr,i;
    scanf("%d",&tr);
    for(i=1;i<=tr;i++)
    {
        int n, reversed = 0, remainder, original;
        scanf("%d", &n);
        original = n;
        while (n != 0)
        {
            remainder = n % 10;
            reversed = reversed * 10 + remainder ,original;
            n /= 10;
        }
        if (original == reversed)
        printf("True
");
        else
        printf("False
");
    }
}
