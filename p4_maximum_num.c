#include<stdio.h>
int main()
{
    int a=45,b=33;
    int *p1=&a;
    int *p2=&b;
    (*p1>*p2)?printf("%d",*p1):printf("%d",*p2);
}
