#include <stdio.h>

//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
int main (){
    char a1;
    printf("Input :");
    scanf("%c",&a1);
    if( a1>='A' && a1<='Z'){
        printf("Uppercase alphabet");
        
    }
    else if( a1>='a' && a1<='z'){
        printf("lowecase alphabet");
    }
    else if(a1>='0' && a1<='9' ){
        printf("Digit");
    }
    else {
        printf("Special character");
    }
    return 0;



}