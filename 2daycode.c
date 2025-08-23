#include <stdio.h>
// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
int main(){
    int a,b;
    printf("Enter no1\n");
    scanf("%d",&a);
    printf("Enter no2\n");
    scanf("%d",&b);
    printf("area=%d, perimeter = %d",a*b,2*(a+b));
   



    return 0;
}