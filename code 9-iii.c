//Program to print cubes of the first 10 natural numbers

#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d ",i*i*i);
        i++;
    } while (i<=10);
    return 0;
}