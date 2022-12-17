// write a c program the input integer number is even or odd .

#include<stdio.h>
int main()
{
    int x;

    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is a even number\n",x);
    }
    else
    {
        printf("%d is a odd number\n",x);
    }

    return 0;
}
