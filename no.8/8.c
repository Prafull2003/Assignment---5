// Write a program to print squares of the first N natural numbers

#include<stdio.h>
int main()
{
    int i,n,t;

    printf("\nEnter the number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        t=i*i;
        printf("\n%d",t);

    }

    return 0;
}