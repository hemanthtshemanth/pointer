#include<stdio.h>
int main()
{
    int i,s=5,ar[5]={2,5,7,9,3};
    int *p[s];
    for(i=0;i<s;i++)
    {
        p[i]=&ar[i];
    }
    for(i=0;i<s;i++)
    {
        printf("%X: %d\n",p[i],*p[i]);
    }
}
