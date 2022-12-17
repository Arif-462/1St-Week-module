/*  You have got X marks in your exam. As you are a good and regular student,
   if you ask your teacher he/she can give you at most Y bonus marks.
    Now you need to tell if you take bonus marks will your number became 100?
  Write a C program to take two non-negative integers X and Y as input and print YES or NO.  */


#include<stdio.h>

int main()
{
    int x,y ;
    printf("Enter value of x and Y ");
    scanf("%d%d",&x,&y);

    int total = (x+y);

    if (total>=100)
    {
        printf("yes");
    }

    else
        printf ("No",total);


    return 0;


}
