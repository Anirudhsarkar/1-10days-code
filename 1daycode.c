#include <stdio.h>


//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/


int main(){
    int a,b;
    printf("Enter no1\n");
    scanf("%d",&a);
    printf("Enter no2\n");
    scanf("%d",&b);
    printf("the add of both number is %d",a+b);

    return 0;
}