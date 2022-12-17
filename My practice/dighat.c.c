#include<stdio.h>
int main()
{
    double a,b,c,d,x1,x2;


    printf("Enter value of of a,b,c  ",a,b,c);
    scanf("%.3lf %.3lf %.3lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);

    x1 = (-b+d)/(2*a) ;
    x2 = (-b-d)/(2*a) ;

    printf("x1 = %.3lf\n",x1);

    printf("x2 = %.3lf",x2);




    return 0;










}
