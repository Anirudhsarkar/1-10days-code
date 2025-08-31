#include <stdio.h>
#include <math.h>
//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double determinant , root1,root2,root;
    determinant = b*b - 4 * a * c;
    if(determinant>0){
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2*a);
        printf("Roots are real and different:%.2lf %.2lf\n",root1,root2);

        
    }
    else if (determinant==0){
        root = -b / (2 * a);
        printf("Roots are real and same:%.2lf\n",root);


    }
    else{
        printf("Roots are complex\n");

    } 
    return 0;

    
    
        
    
    


}