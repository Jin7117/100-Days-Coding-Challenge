//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a ,b,c;
    printf("Input first side\n");
    scanf("%d", &a);
    printf("Input second side\n");
    scanf("%d", &b);
    printf("Input third side\n");
    scanf("%d", &c);

    if(a==b && b==c){
      printf("The triangle is an equilateral triangle");
    }else if (a==b || b==c || c==a)
    {
      printf("The triangle is an isoceles triangle");
    }else
    {
      printf("The triangle is a scalene triangle");
    }
    
    

    return 0;
}



 