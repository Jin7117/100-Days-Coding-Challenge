//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int max;
    printf("Input first number\n");
    scanf("%d", &a);
    printf("Input second number\n");
    scanf("%d", &b);
    printf("Input third number\n");
    scanf("%d", &c);

    if (a>b && a>c)
    {
      max = a;
    }else if (b>a && b>c)
    {
      max = b;
    }else{
      max =c;
    }
    
    printf("Highest number is %d", max);


    return 0;
}



 