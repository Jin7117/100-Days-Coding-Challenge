//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>



int main() {
    int a;
    printf("Input a number\n");
    scanf("%d", &a);

    if ( a >0)
    {
      printf("The number %d is Positive",a);
    }else if (a<0)
    {
      printf("The number %d is Negative",a);
    }
     else{
      printf("The number %d is Zero",a);
    }

    
    return 0;
}