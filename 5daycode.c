#include <stdio.h>
#include <math.h> 
//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
int main (){
    //int amount;
    float r,p,t,ttt;
    printf("Enter principal \n");
    scanf("%f",&p);
    printf("Enter rate \n");
    scanf("%f",&r);
    printf("Enter time  \n");
    scanf("%f",&t);
    ttt = pow(1+(r/100),t);    
    //amount = (p*((1+(r/100))^t));

    printf("simple intrest:%f,Comound intrest: %f",(p*r*t)/100,(p*(ttt))-p);
    return 0;
}
