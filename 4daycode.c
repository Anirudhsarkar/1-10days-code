#include <stdio.h>
//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
int main (){
    int a,b,tt;
     printf("Enter no1\n");
    scanf("%d",&a);
    printf("Enter no2\n");
    scanf("%d",&b);
   
    
    tt=a;
    a=b;
    b=tt;
    printf("after swap:%d ,%d",a,b);
    return 0;
}