//Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main() {
    int a;
    printf("Input Percentage");
    scanf("%d", &a);

    if (a > 100 )
    {
          printf("enter valid percentage");
    }else if (a >= 90)
    {
          printf("Your grade is A+");

    }else if (a >= 80)
    {
          printf("Your grade is A");
    }else if (a >= 70)
    {
          printf("Your grade is B");
    }else{
          printf("Your grade is C");

    }
    
    
    
    
  


    return 0;
}



 