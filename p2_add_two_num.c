#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    int *p1=&a;
    int *p2=&b;
    c=*p1+*p2;
    printf("%d + %d= %d",a,b,c);
return 0;
}
