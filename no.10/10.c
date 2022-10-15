// Write a program to print a table of N 

#include<stdio.h>
int main()
{
    int i,n,t;

    printf("\nEnter the number ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("\n%d",t);
    }
}