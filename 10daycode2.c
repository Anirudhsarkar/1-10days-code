#include <stdio.h>


//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
int main(){
    int a;
    printf(":\n");
    scanf("%d",&a);
    if(a==1){
        printf("Monday");
    }
    else if(a==2){
        printf("Tuesday");
    }
    else if(a==3){
        printf("Wednesday");
    }
    else if(a==4){
        printf("Thrusday");
    }
    else if(a==5){
        printf("Friday");
    }
    else if(a==6){
        printf("Saturday");
    }
    else {
        printf("Sunday");
    }
    return 0 ;
    

}