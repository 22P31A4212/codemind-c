#include<stdio.h>
int main() 
{ 
    int t1= 0,t2= 1;
    int a;
    int nextTerm = t1 + t2; 
    scanf("%d",&a);
    while(nextTerm<a)
    { 
        nextTerm = t1+t2; 
        t1 = t2; 
        t2 = nextTerm; 
    }
    if(nextTerm==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}