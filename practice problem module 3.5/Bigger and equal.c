
/*  Write a C program to take two integers as input and show who is bigger.
If they are equal print as it is. See the sample input output for more clarification. */


#include<stdio.h>

int main(){
    int A,B;

    printf("Enter the value of A B = ");
    scanf("%d%d",&A,&B);



    if(A>B){

        printf("A is greater than B\n");

    }

    else if (A==B){
        printf("They are equal");
    }


    else
        printf("B greter than A\n");



return 0;

}
