#include<stdio.h>

int main()
{
    int i,num,pos,n,a[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter value and position you want to insert:\n");
    scanf("%d %d",&num,&pos);
    for(i=n;i>=pos;i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = num;
    n+=1;
    printf("after insertion array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }

    return 0;
}
