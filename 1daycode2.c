#include <stdio.h>

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
int main(){
    int a,b;
    printf("Enter no1\n");
    scanf("%d",&a);
    printf("Enter no2\n");
    scanf("%d",&b);
    printf("sum=%d, diff=%d , product=%d , Quotient=%d",a+b,a-b,a*b,a/b);
    return 0;

}
