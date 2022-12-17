/*  Write a C program to take one non-negative integer as input and print the grade according to that input.
 The grade system is shown below
0-32 -> F,33-39>D, 40-49 ->C, 50-59 ->B,
60-69 -> A, 70-79 -> A, 80-100 -> A+  */


#include<stdio.h>

int main()
{
    int marks;


    printf("Enter your marks = ");
    scanf("%d",&marks);

    if (marks>=0 && marks<=32)
        {
        printf("Your grade is F");
        }

    else if (marks>=33 && marks<=39)
        {
        printf("Your grade is D");
        }

    else if (marks>=40 && marks<=49)
        {
        printf("Your grade is C");
        }

    else if (marks>=50 && marks<=59)
        {
        printf("Your grade is B");
        }

    else if (marks>=60 && marks<=69)
        {
        printf("Your grade is A-");
        }

    else if (marks>=70 && marks<=79)
        {
        printf("Your grade is A");
        }

    else if (marks>=80 && marks<=100)
        {
        printf("Your grade is A+");
        }
}
