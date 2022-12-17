/*Write a C program to take integer value as input and print that value. There is a twist! The input will contain a %
sign.
Sample Input:                                   Sample Output:
20%                                                 20
*/
#include<stdio.h>
int main()
{
    int a;
    char cha;

    scanf("%d%c",&a,&cha);

    printf("%d\n",a);


    return 0;
}
