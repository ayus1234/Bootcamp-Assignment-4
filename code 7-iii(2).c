//Program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d ",2*(11-i));
        i++;
    } while (i<=10);
    return 0;
}