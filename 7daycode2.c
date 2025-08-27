#include <stdio.h>
//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
int main(){
    char a1 ;
    scanf("%c",&a1);
    if(a1== 'a' || a1== 'e' || a1== 'i' || a1== 'o' || a1== 'u' || a1== 'A' || a1== 'E'|| a1== 'I' || a1== 'O' || a1== 'U'){
        printf("Vowel");

    }
    else{
        printf("Constant");
    }
    return 0;
}