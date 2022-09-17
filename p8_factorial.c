#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("enter the num.:");
    scanf("%d",&n);
    int *p=&f;
    for(i=n;i>0;i--)
    {
        *p=f*i;
    }
    printf("%d",*p);
}
