#include <stdio.h>

int main(){

    int num1, num2, num3, sum;
    float avg,mult,mod;
    printf("Enter three numbers: ");

    scanf("%d %d %d",&num1,&num2,&num3);


    sum = num1 + num2+ num3;



    avg = (float)sum/3;

    mult = num1*num2;

    mod = num1%num3;

    printf("The sum is = %d\n",sum);
    printf("The avarege is = %.3lf\n",avg);

    printf("The multiple is = %.3lf\n",mult);

    printf("the modulus is = %.3lf\n",mod);
    return 0;



}
