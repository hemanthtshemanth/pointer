#include<stdio.h>
int main()
{
    int i,j=0;
    char ar[100];
    printf("enter the string: ");
    scanf("%[^\n]s",ar);
    char *p=&ar;
    printf("\n reverse string :\n");
    while(*p!='\0')
    {
       p++;
       j++;
    }
    for(i=0;i<j;i++)
    {
        p--;
        printf("%c",*p);
    }
    return 0;
}
