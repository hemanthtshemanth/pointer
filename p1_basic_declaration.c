#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("%X\n",*ptr);
    printf("%X\n",&a);
    return 0;
}
