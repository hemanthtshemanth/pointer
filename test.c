#include<stdio.h>
int main()

{
    int k=5;
    int *p=&k;
    int *m=p;
    printf("%d%d%d",k,*p,*m);
    return 0;
}
