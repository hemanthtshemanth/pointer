#include<stdio.h>
int main()
{
    char ar[100];
    printf("enter the string: ");
    scanf("%s",ar);
    int i=0;
    char *p1=&ar;
    while(*p1!='\0')
    {
       p1++;
       i++;
    }
    printf("size of string is: %d",i);
    return 0;
}
