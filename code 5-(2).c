//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d ",2*(11-i)-1);
    return 0;
}