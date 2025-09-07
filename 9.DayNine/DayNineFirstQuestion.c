//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>


int main() {
    int a,b,c,d ;
    printf("Input coefficiant of x^2\n");
    scanf("%d", &a);
    printf("Input coefficiant of x\n");
    scanf("%d", &b);
    printf("Input last coefficiant\n");
    scanf("%d", &c);

    d = pow(b,2) - 4*a*c;

    if(d>0){
      printf("The equation has two distinct real roots, %.2lf and %.2lf",(-b + sqrt(d)) / (2 * a) ,(-b - sqrt(d)) / (2 * a) );
    }else if (d<0)
    {
      printf("The equation has two complex (imaginary) roots.");
    }else{
      printf("The equation has one real root (a repeated root), %.2lf", (-b) / (2.0 * a) ) ;

    }
    

    return 0;
}



 