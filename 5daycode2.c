#include <stdio.h>
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
int main(){
    int h,m,s;
    int i;
    
    printf("Enter seconds \n");
    scanf("%d",&i);
    h=(i/3600);
    m=((i %3600)/60);
    s = (i %60); 
    printf("%d:%d:%d",h,m,s);
    return 0;

}