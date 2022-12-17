#include<stdio.h>


int main()
{
    int i, n, p, j;

    float r , result;



 printf("solved this problem with simple intest formula\n\n\n\n");


     printf("Enter your duration = " ,n);
    scanf (" %d",&n);

    printf("Enter your return money with interest = ",j);
    scanf ("%d",&j);


     printf("Enter your capital money = ",p);
    scanf ("%d",&p);


    i=j-p;

     printf("your interest = %d\n",i);


    r = (float)100*i/(p*n);

    printf("Anual interest = %.2f %%\n",r);







    return 0;
}
