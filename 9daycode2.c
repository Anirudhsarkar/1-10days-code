#include <stdio.h>
//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
int main(){
    int a;
    printf("enterr");
    scanf("%d",&a);
    if(100>a && 90<=a){
        printf("GRADE A");
    }
    else if(90>a && 80<=a){
        printf("GRADE B");
    }
    else if(80>a && 70<=a){
        printf("GRADE C");
    }
    else if(70>a && 60<=a){
        printf("GRADE D");
    }
    else if(60>a && 50<=a){
        printf("GRADE E");
    }
    else if(50>a && 40<=a){
        printf("GRADE F");
    }
    else if(40>a && 30<=a){
        printf("GRADE G");
    }
    else if(30>a && 20<=a){
        printf("GRADE H");
    }
    else if(20>a && 10<=a){
        printf("GRADE I");
    }
    else if(10>a && 0<=a){
        printf("GRADE J");
    }
    return 0;

}