/*  (01 number)
#include <stdio.h>

int main ()
{
    int x,y;
    printf("Enter two numbers: ");

    scanf("%d %d",&x, &y);

    if(x>y)
    {
        printf("%d is a large number.\n",x);
    }


    else
    {
        if(x<y)
        {
            printf("%d is large number.\n",y);
        }
        else
        {
            printf("The two numbers are equal.\n");
        }
    }



    return 0;
}
*/


/*    (02 number)


#include <stdio.h>

int main ()
{
    int x,y;
    printf("Enter two numbers: ");

    scanf("%d %d",&x, &y);

    if(x>y)
    {
        printf("%d is a large number.\n",x);  //for 2 numbers nested if else best option
    }
    else if(x<y)
    {
        printf("%d is large number.\n",y);
    }
    else
    {
        printf("The two numbers are equal.\n");
    }

    return 0;
}

*/

// (03 number)

#include <stdio.h>

int main ()
{
    int x,y,z;
    printf("Enter Three numbers: "); // Tree numbers nested if else

    scanf("%d %d %d",&x, &y, &z);

    if(x>y && x>z)
    {
        printf("%d is a large number.\n",x);  // best option
    }
    else if(x<y && z<y)
    {
        printf("%d is large number.\n",y);
    }
    else if(x<z && y<z)
    {
        printf("%d is large number.\n",z);
    }
    else
    {
        printf("The Three numbers are equal.\n");
    }

    return 0;
}


