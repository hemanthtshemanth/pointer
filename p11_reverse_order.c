#include<stdio.h>
int main()
{
    int s,i;
    printf("enter the size of array: ");
    scanf("%d",&s);
    int ar[s];
    int *p[s];
    printf("enter the array: ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
        p[i]=&ar[i];
        printf("\t%d",*p[i]);
    }
    printf("\nreverse elements :\n");
    for(i=s-1;i>=0;i--)
    {
        printf("\t%d",*p[i]);
    }
    return 0;
}
