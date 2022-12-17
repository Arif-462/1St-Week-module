

#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter 3 integers: ");
   scanf("%d %d %d",&a,&b,&c);
   
   printf ("These number are = %d %d %d\n",a,b,c);
   int sum = a+b+c ;
   printf("sum of 3 integer = %d",sum);
   float avg = (float)sum/3;
   printf("\n The average is = %f",avg);
   printf("\nAscii charecter is = %c %c %c",a,b,c);
   return 0;
}
