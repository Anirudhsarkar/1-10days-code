#include <stdio.h>
//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
int main (){
    int a;
    printf("Enter Celsius\n");
    scanf("%d",&a);
    printf("Fahrenheit %d",(a)*9/5+32);
    return 0;
}