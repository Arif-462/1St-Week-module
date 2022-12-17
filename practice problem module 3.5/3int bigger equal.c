/*Write a C program to take three integers as input and show who is bigger.
 If they are equal print as it is. See the sample input output for more clarification.
Sample Input:       Sample Output:
5 10 4              B is bigger
1025                A is bigger
447                 C is bigger
10 10 10            They are equal

Bonus Task, try if you can do this also
2 10 10             B and C both are bigger
535                 A and C both are bigger
775                 A and B both are bigger        */

#include <stdio.h>

int main()
{

    int a,b,c;
    printf("Enter your 3 integer number: ");
    scanf("%d%d%d",&a,&b,&c);

    /*if (a>b && a>c)
        printf("A is bigger");

    else if (b>a && b>c)
        printf("B is bigger"); // practice

    else if (c>a && c>b)
        printf("c is bigger");

    else if (a==b && a==c)
        printf("They are equal");*/

    if (a>b && b>c)
        printf("A and B both are bigger\n");

    else if (b>a && c>a)
        printf("B and c both are bigger\n"); //bonus

    else if (a>b && c>b)
        printf("A and c both are bigger\n");

    else
    printf("A,B and C both are equal");






}

