//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i=10;
    do
    {
        printf("%d ",2*i-1);
        i--;
    } while (i>=1);
    return 0;
}