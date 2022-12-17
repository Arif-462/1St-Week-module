/*problem no 4
Write a C program to take two positive integers as input and show the summation, subtraction and
multiplication of those two numbers.*/




#include<stdio.h>

int main()
{
    int a,b,sum,substr,multiplies;
    a = 5;
    b = 2;
    sum = a+b;
    substr = a - b;
    multiplies = a*b;

    printf("%d ",sum);
    printf("%d ",substr);
    printf("%d ",multiplies);

    getchar();
}
