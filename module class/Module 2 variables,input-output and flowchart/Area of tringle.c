
// Area of triangle by using 1/2*base*height formula.

#include<stdio.h>

int main()
{
    float base,height;
    double area;

    printf("Enter base of triangle : ",base);
    scanf("%f",&base);

    printf("Enter height of triangle : ",height);
    scanf("%f",&height);

    area =(base*height)/2;

    printf("Area of triangle is %.3lf\n",area);


    return 0;
}
