#include<stdio.h>
int main()
{
    int s,i,small;
    printf("enter the size of array: ");
    scanf("%d",&s);
    int ar[s];
    int *p[s];
    printf("enter the array: ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
        p[i]=&ar[i];
    }
    small=*p[0];
    for(i=0;i<s;i++)
    {
       if(*p[i]<small)
       {
           small=*p[i];
       }
    }
        printf("smallest number: %d",small);
    return 0;
}
