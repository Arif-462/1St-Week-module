//Write a C program to take one non-negative integer as input and check if it is even or odd.

#include <stdio.h>

int main()

{
    int a;

    printf("Enter any muber: ");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("Even number");
    }
    else
    printf("odd nuber");

    return 0;
}
