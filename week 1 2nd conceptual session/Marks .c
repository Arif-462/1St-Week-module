#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y:\n");
    scanf("%d %d",&x, &y);
    int totalMarks = (x+y);
    if(totalMarks>=100)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
