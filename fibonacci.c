#include<stdio.h> 
int main() 
{ 
    int t1= 0,t2= 1;
    int a,j;
    int nextTerm = t1 + t2; 
    scanf("%d",&a);
    printf("%d %d",t1,t2);
    for(j=3;j<=a;j++) 
    { 
        nextTerm = t1+t2; 
        t1 = t2; 
        t2 = nextTerm; 
        printf("% d",nextTerm); 
    } 
}