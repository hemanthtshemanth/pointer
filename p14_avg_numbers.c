#include<stdio.h>
int main()
{
    int s,i,sum=0;
    printf("enter the size of array: ");
    scanf("%d",&s);
    int ar[s];
    int *p[s];
    int *p1=&sum;
    printf("enter the array: ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
        p[i]=&ar[i];
        *p1=sum+*p[i];
    }
    *p1=sum/s;
    printf("sum of the array: %d",*p1);
}
