#include<stdio.h>
int main()
{
    int x;
    printf("Entet any number\n");
    scanf("%d",&x);

    if(x % 2 == 0)
    {
        printf("The input numbet is even number.\n");
    }
    else
    {
        printf("The input number is odd number.\n");
    }

    return 0;
}
