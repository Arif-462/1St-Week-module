/*  Write a C program to take three non-negative integers as input and tell if it forms a valid triangle.
A triangle is valid if sum of its two sides is greater than the third side. Print YES or NO.
 All sides must be valid (greater than 0).

Sample Input:       Sample Output:
2 4 2                    NO
10 20 20                 YES
4 2 8                    NO


*/

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);


    if(a+b>c && a+c>b && b+c>a)
        printf("Yes");

    else
        printf("NO");


}

