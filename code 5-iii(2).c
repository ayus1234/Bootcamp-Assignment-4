//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d ",2*(11-i)-1);
        i++;
    } while (i<=10);
    return 0;
}