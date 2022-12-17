
//Area of triangle by using ax*x+bx+c formula.

#include<stdio.h>

int main()
{
    float a,b,c;
    double s,area;//somobahu trivuj

    printf("Enter the first side of triangle : ");
    scanf("%f",&a);

    printf("Enter the second side of triangle : ");
    scanf("%f",&b);

    printf("Enter the third side of triangle : ");
    scanf("%f",&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf ("Area of triangle is %.3lf\n",area);


    return 0;
}
