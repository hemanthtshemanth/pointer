#include<stdio.h>
int main()
{
    int s,i,j,temp;
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
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(*p[i]>*p[j])
            {
              temp=*p[i];
              *p[i]=*p[j];
              *p[j]=temp;
            }
        }
    }
    printf("ascending order");
    for(i=0;i<s;i++)
    {
        printf("\t%d",*p[i]);
    }
    return 0;
}
