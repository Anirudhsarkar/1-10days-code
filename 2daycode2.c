#include <stdio.h>
//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

int main(){
    float a;
    printf("Enter radius\n");
    scanf("%f",&a);
    
    printf("area= %f ,Circumference= %f ",3.14*a*a,2*3.14*a);
    return 0;
    
}