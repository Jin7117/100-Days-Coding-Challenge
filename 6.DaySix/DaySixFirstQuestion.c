//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int a;
    printf("Input a number\n");
    scanf("%d", &a);

    if ( a % 2 == 0)
    {
      printf("The number %d is even",a);
    }else{
      printf("The number %d is Odd",a);
    }

    
    return 0;
}